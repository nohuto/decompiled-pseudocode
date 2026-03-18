/*
 * XREFs of DpiCleanUpGlobalState @ 0x14023B6D8
 * Callers:
 *     DxgkUnload @ 0x1401CBE90 (DxgkUnload.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DISPLAY_MUX_MGR@@QEAA@XZ @ 0x14008266C (--1DISPLAY_MUX_MGR@@QEAA@XZ.c)
 *     DpiPdoPollingWorkItem @ 0x1402555B0 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  DISPLAY_MUX_MGR *v0; // rbx

  KeCancelTimer(&stru_140160F10);
  DpiPdoPollingWorkItem(g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_140160F90 )
    IoFreeWorkItem(qword_140160F90);
  ExDeleteNPagedLookasideList(&stru_140160E00);
  if ( qword_140160FB0 )
  {
    ExFreePoolWithTag(qword_140160FB0, 0);
    qword_140160FB0 = 0LL;
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
  v0 = qword_140161380;
  if ( qword_140161380 )
  {
    DISPLAY_MUX_MGR::~DISPLAY_MUX_MGR(qword_140161380);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v0);
    qword_140161380 = 0LL;
  }
}
