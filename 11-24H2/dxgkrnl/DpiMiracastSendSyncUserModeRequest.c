/*
 * XREFs of DpiMiracastSendSyncUserModeRequest @ 0x14024C3A8
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x14007EDE0 (DpiMiracastInterfaceChange.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003E6D0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x140041808 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1402C9FC8 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpiMiracastSendSyncUserModeRequest(
        __int64 a1,
        ULONG a2,
        __int64 a3,
        __int64 a4,
        PVOID a5,
        ULONG a6,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int Status; // edi
  struct _FILE_OBJECT *v12; // rsi
  struct _DEVICE_OBJECT *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax
  PIRP v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  PVOID OutputBuffer; // [rsp+20h] [rbp-68h]
  __int64 OutputBufferLength; // [rsp+28h] [rbp-60h]
  __int64 InternalDeviceIoControl; // [rsp+30h] [rbp-58h]
  PKEVENT v24; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( IsMiniportListMutexOwnedByCurrentThread() || *(struct _KTHREAD **)(a1 + 88) == KeGetCurrentThread() )
  {
    Status = -1073741790;
    WdLogSingleEntry1(2LL, -1073741790LL);
    WdLogGlobalForLineNumber = 3603;
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 32);
    *(_QWORD *)(a1 + 88) = KeGetCurrentThread();
    v9 = *(_QWORD *)(a1 + 432);
    if ( v9
      && ((v10 = *(_QWORD *)(v9 + 64), ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)))
       || (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v10 + 4032), 1LL)) )
    {
      Status = -1073741790;
      WdLogSingleEntry1(2LL, -1073741790LL);
      *(_QWORD *)(a1 + 88) = 0LL;
      WdLogGlobalForLineNumber = 3628;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
    }
    else
    {
      v12 = *(struct _FILE_OBJECT **)(a1 + 176);
      v13 = *(struct _DEVICE_OBJECT **)(a1 + 184);
      if ( v12 )
        ObfReferenceObject(*(PVOID *)(a1 + 176));
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
      if ( !v12 )
      {
        WdLogSingleEntry1(3LL, a1);
        result = 3221226166LL;
        WdLogGlobalForLineNumber = 3658;
        return result;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
        McTemplateK0pqtqq_EtwWriteTransfer(
          v14,
          &EventEnterMiracastSendUserModeRequest,
          v15,
          *(_QWORD *)(a1 + 96),
          1,
          0,
          a6,
          0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v17 = IoBuildDeviceIoControlRequest(a2, v13, 0LL, 0, a5, a6, 0, &Event, IoStatusBlock);
      if ( v17 )
      {
        v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
        v17->IoStatus.Status = -1073741637;
        Status = IofCallDriver(v13, v17);
        if ( Status == 259 )
        {
          v18 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = v18;
          if ( v18 )
          {
            WdLogSingleEntry1(2LL, v18);
            WdLogGlobalForLineNumber = 3735;
          }
          else
          {
            Status = IoStatusBlock->Status;
          }
        }
      }
      else
      {
        Status = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 3701;
      }
      ObfDereferenceObject(v12);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
      {
        LODWORD(v24) = Status;
        LODWORD(InternalDeviceIoControl) = IoStatusBlock->Information;
        LODWORD(OutputBufferLength) = 0;
        LODWORD(OutputBuffer) = 1;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v19,
          &EventLeaveMiracastSendUserModeRequest,
          v20,
          *(_QWORD *)(a1 + 96),
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          v24);
      }
    }
  }
  return Status;
}
