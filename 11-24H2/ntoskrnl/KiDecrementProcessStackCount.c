/*
 * XREFs of KiDecrementProcessStackCount @ 0x1402699D0
 * Callers:
 *     KiOutSwapKernelStacks @ 0x140268FB8 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x140269E64 (KeDeleteThread.c)
 *     KiSuspendThread @ 0x140338B00 (KiSuspendThread.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiDecrementProcessStackCount(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // ett
  signed __int64 *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rcx

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 264), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)result == 8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    KiAcquireKobjectLockSafe(a1);
    v4 = *(_DWORD *)(a1 + 264);
    if ( (v4 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 )
    {
      while ( v4 < 8 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 264), v4 & 0xFFFFFFF8 | 3, v4);
        if ( v5 == v4 )
        {
          _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
          v6 = (signed __int64 *)(a1 + 120);
          _m_prefetchw(&KiProcessOutSwapListHead);
          v7 = KiProcessOutSwapListHead;
          do
          {
            *v6 = v7;
            v8 = v7;
            v7 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v6, v7);
          }
          while ( v7 != v8 );
          if ( !v7 )
            KeSetEvent(&KiSwapEvent, 10, 0);
          goto LABEL_12;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_12:
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
