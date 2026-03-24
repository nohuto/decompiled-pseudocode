/*
 * XREFs of MouseClassCreate @ 0x1C00037F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0002630 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002770 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqdDdd @ 0x1C0003D30 (WPP_RECORDER_SF_qqdDdd.c)
 *     WPP_RECORDER_SF_qqDdd @ 0x1C0003EF0 (WPP_RECORDER_SF_qqDdd.c)
 *     WPP_RECORDER_SF_qqdq @ 0x1C00053E0 (WPP_RECORDER_SF_qqdq.c)
 *     MouseClassLogError @ 0x1C00056A0 (MouseClassLogError.c)
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0005770 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00066C0 (WPP_RECORDER_SF_qqq.c)
 *     MouEnableDisablePort @ 0x1C000EFB0 (MouEnableDisablePort.c)
 */

__int64 __fastcall MouseClassCreate(__int64 a1, IRP *a2, __int64 a3, int a4)
{
  IRP *v4; // rbx
  char v6; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v8; // rbp
  char v9; // di
  NTSTATUS v10; // esi
  KPROCESSOR_MODE RequestorMode; // dl
  int v12; // r8d
  int v13; // r9d
  KIRQL v14; // al
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  struct _IO_REMOVE_LOCK *v19; // rcx
  IRP *v20; // rdx
  __int64 v21; // rdx
  int v23; // edx
  unsigned int v24; // edi
  __int64 v25; // rcx
  char *v26; // r12
  char v27; // di
  int v28; // edx
  __int64 v29; // rcx
  int v30; // r8d
  ULONG RemlockSize; // [rsp+20h] [rbp-68h]
  unsigned int PrivilegeValue; // [rsp+90h] [rbp+8h]

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  v8 = *(_QWORD *)(a1 + 64);
  v9 = CurrentStackLocation->Flags & 1;
  if ( v4->RequestorMode == 1 || v9 )
  {
    v23 = *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16);
    if ( (v23 & 1) != 0 )
    {
      v10 = -1073741790;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqdDdd(WPP_GLOBAL_Control->DeviceExtension, v23, (unsigned int)&WPP_RECORDER_INITIALIZED, a4);
      if ( !v4->RequestorMode && v9 )
        MouClassTraceLoggingDeniedCreateForReadWithSFAC(*(unsigned int *)(CurrentStackLocation->Parameters.WMI.ProviderId
                                                                        + 16));
      goto LABEL_20;
    }
  }
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v4, File, 1u, 0x20u);
  if ( v10 >= 0 )
  {
    if ( *(_BYTE *)(v8 + 64) && !*(_BYTE *)(v8 + 65) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 2, 2, 31);
      v10 = -1073741823;
      v19 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
      v20 = v4;
      goto LABEL_19;
    }
    if ( *(_QWORD *)v8 == *(_QWORD *)(v8 + 8) )
    {
      if ( v9 )
        RequestorMode = 1;
      else
        RequestorMode = v4->RequestorMode;
      if ( SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
      {
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 144));
        CurrentStackLocation->FileObject->FsContext2 = DriverEntry;
        ++*(_DWORD *)(v8 + 80);
        KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 144), v14);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqDdd(
          WPP_GLOBAL_Control->DeviceExtension,
          CurrentStackLocation->Parameters.WMI.ProviderId,
          v12,
          v13,
          RemlockSize,
          a1,
          (char)v4,
          *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16),
          v4->RequestorMode,
          v9);
      }
    }
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v8 )
    {
      if ( ++HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) != 1 )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        goto LABEL_18;
      }
      v25 = 0LL;
      for ( PrivilegeValue = 0; PrivilegeValue < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext); v25 = PrivilegeValue )
      {
        v26 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v25;
        if ( !v26[19] )
        {
          v27 = v26[16];
          v26[16] = 1;
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          if ( !v27 )
          {
            LOBYTE(v29) = 1;
            v10 = MouEnableDisablePort(v29, v4, *((_QWORD *)v26 + 1), v26);
          }
          if ( v10 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqq(
                WPP_GLOBAL_Control->DeviceExtension,
                v28,
                v30,
                33,
                RemlockSize,
                a1,
                (char)v4,
                *(_QWORD *)(v8 + 16));
            MouseClassLogError(a1, -1073414135, 20120, v10, 0, 0LL, CurrentStackLocation->MajorFunction);
            v26[16] = 0;
          }
          else
          {
            v6 = 1;
          }
          ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        }
        ++PrivilegeValue;
      }
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v6 )
        goto LABEL_18;
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( *(_QWORD *)(v8 + 8) != a1 )
      {
        ++v4->CurrentLocation;
        ++v4->Tail.Overlay.CurrentStackLocation;
        v24 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 16), v4);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v4, 0x20u);
        return v24;
      }
      LOBYTE(v15) = 1;
      v10 = MouEnableDisablePort(v15, v4, v8, &CurrentStackLocation->FileObject);
      if ( v10 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdq(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            v17,
            v18,
            RemlockSize,
            a1,
            (char)v4,
            v10,
            *(_QWORD *)(v8 + 16));
        goto LABEL_18;
      }
    }
    v10 = 0;
LABEL_18:
    v19 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
    v20 = v4;
LABEL_19:
    IoReleaseRemoveLockEx(v19, v20, 0x20u);
  }
LABEL_20:
  v4->IoStatus.Status = v10;
  v4->IoStatus.Information = 0LL;
  IofCompleteRequest(v4, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v21) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v21, 2LL);
    }
  }
  return (unsigned int)v10;
}
