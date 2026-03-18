/*
 * XREFs of MiFreeDeferredCrcPages @ 0x140239B68
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFreeDeferredCrcPages(_QWORD *a1)
{
  _QWORD *v1; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // [rsp+30h] [rbp+8h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  while ( 1 )
  {
    v1 = (_QWORD *)*v1;
    if ( !v1 )
      break;
    v5 = v1[2];
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    v7 = *(_DWORD *)(v5 + 32);
    BYTE2(v7) = BYTE2(v7) & 0xF8 | 6;
    *(_DWORD *)(v5 + 32) = v7;
    MiDecrementShareCountEx(v5, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
