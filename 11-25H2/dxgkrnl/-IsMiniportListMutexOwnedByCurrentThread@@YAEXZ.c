/*
 * XREFs of ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x140041E78
 * Callers:
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x140041E48 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x140245598 (DpiMiracastSendSyncUserModeRequest.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403D0FD0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1404025DC (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     <none>
 */

char IsMiniportListMutexOwnedByCurrentThread(void)
{
  struct _KTHREAD *CurrentThread; // rbx
  LONG StateMutex; // eax
  char v2; // cl

  CurrentThread = KeGetCurrentThread();
  StateMutex = KeReadStateMutex(Mutex);
  v2 = 1;
  if ( StateMutex == 1
    || CurrentThread != (struct _KTHREAD *)_InterlockedCompareExchange64(
                                             &qword_14015DD98,
                                             (signed __int64)CurrentThread,
                                             (signed __int64)CurrentThread) )
  {
    return 0;
  }
  return v2;
}
