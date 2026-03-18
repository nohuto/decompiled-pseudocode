/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x14000DCD0
 * Callers:
 *     VidSchiSubmitSignalCommand @ 0x140013B40 (VidSchiSubmitSignalCommand.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14001FBBC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 * Callees:
 *     McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer @ 0x14000D4F4 (McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer.c)
 *     ??0TraceDxgkSignalSynchronizationObjectArrays@@QEAA@IQEBQEBU_VIDSCH_SYNC_OBJECT@@PEB_K@Z @ 0x14000D960 (--0TraceDxgkSignalSynchronizationObjectArrays@@QEAA@IQEBQEBU_VIDSCH_SYNC_OBJECT@@PEB_K@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14000F8C0 (VidSchiCompleteSignalSyncObject.c)
 *     ??1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ @ 0x140011258 (--1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchiCompleteSignalCommmand(HwQueueStagingList *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  char v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // edi
  int *v12; // rsi
  unsigned int i; // ebp
  int v14; // eax
  struct _KEVENT *v16; // rcx
  _BYTE v17[32]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+80h] [rbp-88h]
  __int64 v19; // [rsp+A0h] [rbp-68h]
  __int64 v20; // [rsp+C8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(a2 + 1272);
  v7 = *(_QWORD *)(v4 + 104);
  v9 = a3;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 1280) = *(_QWORD *)(a2 + 1280);
    goto LABEL_3;
  }
  if ( *(_QWORD *)(a2 + 1280) )
  {
LABEL_3:
    v10 = *(_QWORD *)(a2 + 1280);
    if ( v10 )
      *(_QWORD *)(v10 + 1272) = *(_QWORD *)(a2 + 1272);
    v11 = 0;
    v12 = (int *)(a2 + 752);
    *(_QWORD *)(a2 + 1272) = 0LL;
    *(_QWORD *)(a2 + 1280) = 0LL;
    goto LABEL_16;
  }
  v12 = (int *)(a2 + 752);
  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    TraceDxgkSignalSynchronizationObjectArrays::TraceDxgkSignalSynchronizationObjectArrays(
      (TraceDxgkSignalSynchronizationObjectArrays *)v17,
      *(_DWORD *)(a2 + 756),
      (const struct _VIDSCH_SYNC_OBJECT *const *)(a2 + 760),
      (char *)(a2 + 1016));
    if ( v18 && v19 && v20 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer();
    TraceDxgkSignalSynchronizationObjectArrays::~TraceDxgkSignalSynchronizationObjectArrays((TraceDxgkSignalSynchronizationObjectArrays *)v17);
  }
  if ( (*v12 & 2) != 0 )
  {
    v16 = *(struct _KEVENT **)(a2 + 1016);
    if ( (*v12 & 8) != 0 )
    {
      ((void (__fastcall *)(struct _KEVENT *, _QWORD))DxgCoreInterface[72])(v16, 0LL);
    }
    else
    {
      KeSetEvent(v16, 0, 0);
      ObfDereferenceObject(*(PVOID *)(a2 + 1016));
    }
    v11 = 0;
    *(_QWORD *)(a2 + 1016) = 0LL;
  }
  else
  {
    v11 = 0;
    for ( i = 0; i < *(_DWORD *)(a2 + 756); ++i )
      VidSchiCompleteSignalSyncObject(a1, v9);
  }
LABEL_16:
  v14 = *v12;
  *(_DWORD *)(a2 + 80) |= 4u;
  if ( (v14 & 2) == 0 && *(_DWORD *)(a2 + 756) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(PVOID *)(a2 + 8LL * v11++ + 760));
    while ( v11 < *(_DWORD *)(a2 + 756) );
  }
  return VidSchiCheckPendingDeviceCommand(v7, v6, a3, a4);
}
