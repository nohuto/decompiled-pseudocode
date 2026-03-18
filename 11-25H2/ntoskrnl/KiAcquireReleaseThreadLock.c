/*
 * XREFs of KiAcquireReleaseThreadLock @ 0x1404636FC
 * Callers:
 *     KeRundownApcQueues @ 0x1408F56FC (KeRundownApcQueues.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAcquireReleaseThreadLock(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rdx
  int v4; // edi
  __int64 result; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  _InterlockedOr(v6, 0);
  if ( *(_QWORD *)(v1 + 64) )
  {
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v1 + 64) );
    }
    *(_QWORD *)(v1 + 64) = 0LL;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
