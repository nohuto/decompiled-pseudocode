/*
 * XREFs of KiSwitchPriQueue @ 0x14048E740
 * Callers:
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402D4F94 (KiActivateWaiterQueueWithNoLocks.c)
 */

__int64 __fastcall KiSwitchPriQueue(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 result; // rax
  _QWORD *v10; // rcx

  v4 = (_QWORD *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, v4, a4);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_QWORD *)(a1 + 232) = a2;
  v8 = *(char *)(a1 + 563);
  *(_DWORD *)(a1 + 540) = v8;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v8 + 536));
  result = a2 + 672;
  *(_QWORD *)(a1 + 64) = 0LL;
  v10 = *(_QWORD **)(a2 + 680);
  if ( *v10 != a2 + 672 )
    __fastfail(3u);
  *v4 = result;
  v4[1] = v10;
  *v10 = v4;
  *(_QWORD *)(a2 + 680) = v4;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
