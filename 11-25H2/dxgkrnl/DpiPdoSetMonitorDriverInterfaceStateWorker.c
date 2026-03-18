/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceStateWorker @ 0x1403FD780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoSetMonitorDriverInterfaceStateWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT *v4; // rbx
  __int64 v5; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v7; // rax
  IRP *v8; // rsi
  NTSTATUS Status; // eax
  NTSTATUS v10; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_14015E1A8, Executive, 0, 0, 0LL);
    v4 = (PDEVICE_OBJECT *)qword_14015E1E0;
    if ( (__int64 *)qword_14015E1E0 == &qword_14015E1E0 )
    {
      v4 = 0LL;
      byte_14015E1A0 = 0;
    }
    else
    {
      if ( *(__int64 **)(qword_14015E1E0 + 8) != &qword_14015E1E0
        || (v5 = *(_QWORD *)qword_14015E1E0, *(_QWORD *)(*(_QWORD *)qword_14015E1E0 + 8LL) != qword_14015E1E0) )
      {
        __fastfail(3u);
      }
      qword_14015E1E0 = *(_QWORD *)qword_14015E1E0;
      *(_QWORD *)(v5 + 8) = &qword_14015E1E0;
    }
    KeReleaseMutex(&stru_14015E1A8, 0);
    if ( !v4 )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v4[2]);
    if ( !AttachedDeviceReference )
    {
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 4196;
      goto LABEL_19;
    }
    v7 = IoBuildDeviceIoControlRequest(
           0x232437u,
           AttachedDeviceReference,
           v4 + 3,
           1u,
           0LL,
           0,
           1u,
           &Object,
           &IoStatusBlock);
    v8 = v7;
    if ( v7 )
    {
      v7->IoStatus.Status = -1073741637;
      KeClearEvent(&Object);
      Status = IofCallDriver(AttachedDeviceReference, v8);
      if ( Status != 259 )
        goto LABEL_16;
      v10 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      if ( !v10 )
      {
        Status = IoStatusBlock.Status;
LABEL_16:
        if ( Status < 0 )
        {
          WdLogSingleEntry1(2LL, Status);
          WdLogGlobalForLineNumber = 4252;
        }
        goto LABEL_18;
      }
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 4240;
    }
    else
    {
      WdLogSingleEntry1(6LL, -1073741670LL);
      WdLogGlobalForLineNumber = 4220;
    }
LABEL_18:
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_19:
    ObfDereferenceObject(v4[2]);
    ExFreePoolWithTag(v4, 0);
  }
  IoFreeWorkItem(IoWorkItem);
}
