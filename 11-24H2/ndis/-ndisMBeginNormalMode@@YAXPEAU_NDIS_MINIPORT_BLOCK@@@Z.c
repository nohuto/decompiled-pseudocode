/*
 * XREFs of ?ndisMBeginNormalMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140068210
 * Callers:
 *     ?ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140155640 (-ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMBeginNormalMode(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // al
  bool v3; // zf
  void (__fastcall *v4)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rdx

  a1->InitMode = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->PeriodicReceiveQueue.SpinLock);
  v3 = a1->PeriodicReceiveQueue.State == PeriodicReceivesOn;
  a1->NormalTopReceive = a1->PeriodicReceiveQueue.State != PeriodicReceivesOn;
  v4 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMIndicateReceiveNblsWithThrottling;
  if ( !v3 )
    v4 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  a1->TopIndicateNetBufferListsHandler = v4;
  a1->TopIndicateLoopbackNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisMDispatchReceiveNetBufferLists;
  KeReleaseSpinLock(&a1->PeriodicReceiveQueue.SpinLock, v2);
}
