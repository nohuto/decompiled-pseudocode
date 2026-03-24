/*
 * XREFs of KeyboardClassClose @ 0x1C0004620
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassLogError @ 0x1C0005970 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0006E78 (WPP_RECORDER_SF_qqq.c)
 *     KbdEnableDisablePort @ 0x1C000F5E0 (KbdEnableDisablePort.c)
 */

NTSTATUS __fastcall KeyboardClassClose(__int64 a1, IRP *a2)
{
  int v2; // ebp
  IRP *v3; // rdi
  char v4; // r14
  __int64 v6; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  KIRQL v8; // dl
  int v9; // edx
  int v10; // r8d
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 i; // r12
  char *v15; // r13
  char v16; // bl
  int v17; // edx
  int v18; // r8d
  void *v19; // rcx

  v2 = 0;
  v3 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  v6 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  if ( *(_QWORD *)v6 == *(_QWORD *)(v6 + 8) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 160));
    if ( DriverEntry == CurrentStackLocation->FileObject->FsContext2 )
    {
      --*(_DWORD *)(v6 + 80);
      CurrentStackLocation->FileObject->FsContext2 = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 160), v8);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v6 )
  {
    if ( !--HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      for ( i = 0LL; (unsigned int)i < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext); i = (unsigned int)(i + 1) )
      {
        v15 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * i;
        if ( !v15[19] )
        {
          v16 = v15[16];
          v15[16] = 0;
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          if ( v16 )
          {
            v19 = (void *)_InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v15 + 1) + 328LL), 0LL);
            if ( v19 )
              IoUnregisterPlugPlayNotification(v19);
            v2 = KbdEnableDisablePort(0LL, v3, *((_QWORD *)v15 + 1), v15);
          }
          if ( v2 >= 0 )
          {
            v4 = 1;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v17, v18, 38);
            KeyboardClassLogError(a1, -1073414134, 10120, v2, 0, 0LL, 0);
          }
          ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        }
      }
    }
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)(v6 + 8) != a1 )
    {
      ++v3->CurrentLocation;
      ++v3->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 16), v3);
    }
    v2 = KbdEnableDisablePort(0LL, v3, v6, &CurrentStackLocation->FileObject);
    if ( v2 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 39);
      KeyboardClassLogError(a1, -1073414134, 10120, v2, 0, 0LL, CurrentStackLocation->MajorFunction);
    }
    else
    {
      v4 = 1;
    }
  }
  v11 = 0;
  v3->IoStatus.Information = 0LL;
  if ( !v4 )
    v11 = v2;
  v3->IoStatus.Status = v11;
  IofCompleteRequest(v3, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v12, 2LL);
    }
  }
  return v11;
}
