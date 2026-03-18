/*
 * XREFs of DpiGetDxgAdapterFromChild @ 0x1403DC98C
 * Callers:
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1403E52A0 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1403F2E70 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapterFromChild(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  PIRP v4; // rax
  IRP *v5; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  NTSTATUS v11; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  if ( DeviceObject && a2 )
  {
    KeInitializeEvent(&Object, SynchronizationEvent, 0);
    v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Object, &IoStatusBlock);
    v5 = v4;
    if ( v4 )
    {
      CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MinorFunction = 7;
      CurrentStackLocation[-1].Parameters.Read.Length = 4;
      v5->IoStatus.Status = -1073741637;
      Status = IofCallDriver(DeviceObject, v5);
      if ( Status == 259 )
      {
        v11 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = v11;
        if ( v11 )
        {
          WdLogSingleEntry1(2LL, v11);
          WdLogGlobalForLineNumber = 2165;
          return (unsigned int)Status;
        }
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        WdLogSingleEntry1(2LL, Status);
        WdLogGlobalForLineNumber = 2177;
      }
      else
      {
        v8 = *(_QWORD **)(IoStatusBlock.Information + 8);
        ExFreePoolWithTag((PVOID)IoStatusBlock.Information, 0);
        v9 = v8[8];
        if ( v9 && *(_DWORD *)(v9 + 16) == 1953656900 && *(_DWORD *)(v9 + 20) == 5 )
        {
          *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 64LL) + 4032LL);
          ObfDereferenceObject(v8);
        }
        else
        {
          Status = -1073741808;
          WdLogSingleEntry1(3LL, v8);
          WdLogGlobalForLineNumber = 2212;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    Status = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2115;
  }
  return (unsigned int)Status;
}
