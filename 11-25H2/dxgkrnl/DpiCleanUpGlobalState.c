/*
 * XREFs of DpiCleanUpGlobalState @ 0x140234CF8
 * Callers:
 *     DxgkUnload @ 0x1401C6C00 (DxgkUnload.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DISPLAY_MUX_MGR@@QEAA@XZ @ 0x140081FEC (--1DISPLAY_MUX_MGR@@QEAA@XZ.c)
 *     DpiPdoPollingWorkItem @ 0x14024E780 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  DISPLAY_MUX_MGR *v0; // rbx

  KeCancelTimer(&stru_14015DF50);
  DpiPdoPollingWorkItem(g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_14015DFD0 )
    IoFreeWorkItem(qword_14015DFD0);
  ExDeleteNPagedLookasideList(&stru_14015DE40);
  if ( qword_14015DFF0 )
  {
    ExFreePoolWithTag(qword_14015DFF0, 0);
    qword_14015DFF0 = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( NotificationEntry )
  {
    IoUnregisterPlugPlayNotificationEx(NotificationEntry);
    NotificationEntry = 0LL;
  }
  v0 = qword_14015E3C0;
  if ( qword_14015E3C0 )
  {
    DISPLAY_MUX_MGR::~DISPLAY_MUX_MGR(qword_14015E3C0);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v0);
    qword_14015E3C0 = 0LL;
  }
}
