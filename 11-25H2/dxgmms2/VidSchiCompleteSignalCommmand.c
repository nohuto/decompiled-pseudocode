/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x140019130
 * Callers:
 *     VidSchiSubmitSignalCommand @ 0x14001EFA0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14002C1FC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 * Callees:
 *     McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer @ 0x14001895C (McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer.c)
 *     ??0TraceDxgkSignalSynchronizationObjectArrays@@QEAA@IQEBQEBU_VIDSCH_SYNC_OBJECT@@PEB_K@Z @ 0x140018DC8 (--0TraceDxgkSignalSynchronizationObjectArrays@@QEAA@IQEBQEBU_VIDSCH_SYNC_OBJECT@@PEB_K@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14001AB40 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14001AD20 (VidSchiCompleteSignalSyncObject.c)
 *     ??1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ @ 0x14001C6B8 (--1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchiCompleteSignalCommmand(HwQueueStagingList *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v9; // rcx
  unsigned int v10; // edi
  int *v11; // rsi
  unsigned int i; // ebp
  int v13; // eax
  struct _KEVENT *v15; // rcx
  _BYTE v16[32]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+80h] [rbp-88h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  __int64 v19; // [rsp+C8h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 88);
  v5 = *(_QWORD *)(a2 + 1272);
  v6 = *(_QWORD *)(v3 + 104);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 1280) = *(_QWORD *)(a2 + 1280);
    goto LABEL_3;
  }
  if ( *(_QWORD *)(a2 + 1280) )
  {
LABEL_3:
    v9 = *(_QWORD *)(a2 + 1280);
    if ( v9 )
      *(_QWORD *)(v9 + 1272) = *(_QWORD *)(a2 + 1272);
    v10 = 0;
    v11 = (int *)(a2 + 752);
    *(_QWORD *)(a2 + 1272) = 0LL;
    *(_QWORD *)(a2 + 1280) = 0LL;
    goto LABEL_16;
  }
  v11 = (int *)(a2 + 752);
  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    TraceDxgkSignalSynchronizationObjectArrays::TraceDxgkSignalSynchronizationObjectArrays(
      (TraceDxgkSignalSynchronizationObjectArrays *)v16,
      *(_DWORD *)(a2 + 756),
      (const struct _VIDSCH_SYNC_OBJECT *const *)(a2 + 760),
      (char *)(a2 + 1016));
    if ( v17 && v18 && v19 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer();
    TraceDxgkSignalSynchronizationObjectArrays::~TraceDxgkSignalSynchronizationObjectArrays((TraceDxgkSignalSynchronizationObjectArrays *)v16);
  }
  if ( (*v11 & 2) != 0 )
  {
    v15 = *(struct _KEVENT **)(a2 + 1016);
    if ( (*v11 & 8) != 0 )
    {
      ((void (__fastcall *)(struct _KEVENT *, _QWORD))DxgCoreInterface[72])(v15, 0LL);
    }
    else
    {
      KeSetEvent(v15, 0, 0);
      ObfDereferenceObject(*(PVOID *)(a2 + 1016));
    }
    v10 = 0;
    *(_QWORD *)(a2 + 1016) = 0LL;
  }
  else
  {
    v10 = 0;
    for ( i = 0; i < *(_DWORD *)(a2 + 756); ++i )
      VidSchiCompleteSignalSyncObject(a1, a3);
  }
LABEL_16:
  v13 = *v11;
  *(_DWORD *)(a2 + 80) |= 4u;
  if ( (v13 & 2) == 0 && *(_DWORD *)(a2 + 756) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(PVOID *)(a2 + 8LL * v10++ + 760));
    while ( v10 < *(_DWORD *)(a2 + 756) );
  }
  return VidSchiCheckPendingDeviceCommand(v6, v5);
}
