/*
 * XREFs of KiPriQueueThreadPriorityChanged @ 0x1402D8290
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402D4F94 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1402D6C08 (KiActivateWaiterPriQueue.c)
 */

__int64 __fastcall KiPriQueueThreadPriorityChanged(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // edx
  bool v5; // r11
  __int64 v6; // rbx
  int v8; // edx
  __int64 result; // rax
  signed __int8 v10; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v12; // rcx

  v2 = *(char *)(a2 + 563);
  v4 = *(_DWORD *)(a2 + 540);
  v5 = 0;
  v6 = (unsigned __int8)v4;
  if ( (unsigned __int8)v4 == (_DWORD)v2 )
    goto LABEL_2;
  v8 = v4 & 0x100;
  if ( !v8 )
  {
    v12 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v12 + 4 * v2 + 536), 1u);
    v5 = (int)v2 < (int)v6;
  }
  result = (unsigned __int8)v2;
  *(_DWORD *)(a2 + 540) = (unsigned __int8)v2 | v8;
  if ( !v5 )
  {
LABEL_2:
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  else
  {
    v10 = _interlockedbittestandset(a1, 7u);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( v10 )
      result = KiActivateWaiterQueueWithNoLocks(a2, (unsigned __int64)a1, 0LL, a2);
    else
      result = (__int64)KiActivateWaiterPriQueue((ULONG_PTR)a1);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DeferredReadyListHead.Next )
      return KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  }
  return result;
}
