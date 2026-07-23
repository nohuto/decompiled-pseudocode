/*
 * XREFs of RawMountVolume @ 0x1408ACB4C
 * Callers:
 *     RawFileSystemControl @ 0x1408AE108 (RawFileSystemControl.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x14025D974 (PnpGetRelatedTargetDevice.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140464570 (IoReportTargetDeviceChangeAsynchronous.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     RawScanDeletedList @ 0x1408ACE04 (RawScanDeletedList.c)
 *     RawInitializeVcb @ 0x1408ACE6C (RawInitializeVcb.c)
 *     IoCreateStreamFileObjectLite @ 0x1408AD0D0 (IoCreateStreamFileObjectLite.c)
 *     RawCleanupVcb @ 0x1408AE3C4 (RawCleanupVcb.c)
 */

NTSTATUS __fastcall RawMountVolume(_QWORD *a1)
{
  __int64 v2; // r15
  NTSTATUS result; // eax
  PDEVICE_OBJECT v4; // rbx
  ULONG v5; // eax
  int v6; // esi
  struct _FILE_OBJECT *StreamFileObjectLite; // r15
  struct _IRP *CurrentIrp; // r14
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v10; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-78h] BYREF
  struct _FILE_OBJECT *v12; // [rsp+48h] [rbp-70h]
  PDEVICE_OBJECT v13; // [rsp+50h] [rbp-68h]
  int NotificationStructure; // [rsp+58h] [rbp-60h] BYREF
  GUID v15; // [rsp+5Ch] [rbp-5Ch]
  int v16; // [rsp+6Ch] [rbp-4Ch]
  __int64 v17; // [rsp+70h] [rbp-48h]
  int v18; // [rsp+78h] [rbp-40h]
  __int64 v19; // [rsp+7Ch] [rbp-3Ch]
  int v20; // [rsp+84h] [rbp-34h]
  int v21; // [rsp+88h] [rbp-30h]
  int v22; // [rsp+8Ch] [rbp-2Ch]
  wchar_t v23; // [rsp+90h] [rbp-28h]
  int v24; // [rsp+92h] [rbp-26h]

  DeviceObject = 0LL;
  RawScanDeletedList();
  v2 = a1[2];
  if ( *(_WORD *)(v2 + 304) > 0x1000u )
    return -1073741489;
  result = IoCreateDevice(*(PDRIVER_OBJECT *)(a1[5] + 8LL), 0x160u, 0LL, 8u, 0, 0, &DeviceObject);
  if ( result >= 0 )
  {
    v4 = DeviceObject;
    v5 = *(_DWORD *)(v2 + 152);
    if ( v5 > DeviceObject->AlignmentRequirement )
      DeviceObject->AlignmentRequirement = v5;
    v4->SectorSize = *(_WORD *)(v2 + 304);
    v4->Flags |= 0x10u;
    v13 = v4 + 1;
    v6 = RawInitializeVcb(&v4[1], a1[2], a1[1]);
    if ( v6 < 0 )
    {
      RawCleanupVcb((PFSRTL_ADVANCED_FCB_HEADER)&v4[1]);
      IoDeleteDevice(v4);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)&v4[1].Dpc.TargetInfoAsUlong + 8LL) = v4;
      *(_DWORD *)(*(_QWORD *)&v4[1].Dpc.TargetInfoAsUlong + 24LL) = -1;
      *(_WORD *)(*(_QWORD *)&v4[1].Dpc.TargetInfoAsUlong + 6LL) = 0;
      v4->Flags &= ~0x80u;
      v4->StackSize = *(_BYTE *)(v2 + 76) + 1;
      v12 = 0LL;
      v15 = 0LL;
      v16 = 0;
      v24 = 0;
      StreamFileObjectLite = IoCreateStreamFileObjectLite(0LL, v4);
      v12 = StreamFileObjectLite;
      *(&v4[1].Queue.Wcb.NumberOfMapRegisters + 1) += 2;
      LODWORD(v4[1].Queue.Wcb.DeviceObject) += 2;
      NotificationStructure = 4063233;
      v17 = 0LL;
      v18 = -1;
      v19 = 1LL;
      v20 = 6;
      v21 = 16;
      v22 = *(_DWORD *)L"RAW";
      v23 = aRaw[2];
      CurrentIrp = 0LL;
      DeviceObject = 0LL;
      if ( (int)PnpGetRelatedTargetDevice(StreamFileObjectLite, &DeviceObject) >= 0 )
      {
        if ( DeviceObject )
          CurrentIrp = DeviceObject->CurrentIrp;
        v15 = GUID_IO_VOLUME_MOUNT;
        IoReportTargetDeviceChangeAsynchronous((PDEVICE_OBJECT)CurrentIrp, &NotificationStructure, 0LL, 0LL);
        ObfDereferenceObject(CurrentIrp);
      }
      ObfDereferenceObject(StreamFileObjectLite);
      *(&v4[1].Queue.Wcb.NumberOfMapRegisters + 1) -= 2;
      LODWORD(v4[1].Queue.Wcb.DeviceObject) -= 2;
      ExAcquireFastMutex(&RawGlobalLock);
      p_Blink = &v4[1].DeviceQueue.DeviceListHead.Blink;
      v10 = RawMountedQueue;
      if ( *(__int64 **)(RawMountedQueue + 8) != &RawMountedQueue )
        __fastfail(3u);
      *p_Blink = (struct _LIST_ENTRY *)RawMountedQueue;
      p_Blink[1] = (struct _LIST_ENTRY *)&RawMountedQueue;
      *(_QWORD *)(v10 + 8) = p_Blink;
      RawMountedQueue = (__int64)p_Blink;
      KeReleaseGuardedMutex(&RawGlobalLock);
    }
    return v6;
  }
  return result;
}
