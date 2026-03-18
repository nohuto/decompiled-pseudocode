/*
 * XREFs of KiSwitchPriQueue @ 0x140493CB4
 * Callers:
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402A5864 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KiSwitchPriQueue(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 result; // rax
  _QWORD *v9; // rcx

  v3 = (_QWORD *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, v3);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_QWORD *)(a1 + 232) = a2;
  v7 = *(char *)(a1 + 563);
  *(_DWORD *)(a1 + 540) = v7;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v7 + 536));
  result = a2 + 672;
  *(_QWORD *)(a1 + 64) = 0LL;
  v9 = *(_QWORD **)(a2 + 680);
  if ( *v9 != a2 + 672 )
    __fastfail(3u);
  *v3 = result;
  v3[1] = v9;
  *v9 = v3;
  *(_QWORD *)(a2 + 680) = v3;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
