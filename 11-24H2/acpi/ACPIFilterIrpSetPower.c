/*
 * XREFs of ACPIFilterIrpSetPower @ 0x14001BD40
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1400174E8 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x14001A998 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardPowerIrp @ 0x14001B990 (ACPIDispatchForwardPowerIrp.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildRegRequest @ 0x14001FA84 (ACPIBuildRegRequest.c)
 *     ACPIInternalCheckPowerReferences @ 0x1400475C4 (ACPIInternalCheckPowerReferences.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x14005CC6C (ACPIDeviceIrpWarmEjectRequest.c)
 */

__int64 __fastcall ACPIFilterIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  _IO_STACK_LOCATION *v8; // rax
  _IO_STACK_LOCATION *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // r14
  void *v12; // r8
  __int64 v14; // rdx
  __int64 v15; // rsi
  KIRQL v16; // al
  _QWORD *v17; // r12
  _QWORD *v18; // r15
  _QWORD *v19; // rcx
  ULONG_PTR v20; // rsi
  KIRQL v21; // al
  KIRQL v22; // r13
  void *v23; // r12
  _QWORD *v25; // [rsp+68h] [rbp+10h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0LL;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
  {
    if ( !_bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u) )
      v7 = AMLIGetNamedChild(*(_QWORD *)(DeviceExtension + 760), 1195725407LL);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    {
      if ( !v7 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
        v8 = a2->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
        *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
        v8[-1].FileObject = v8->FileObject;
        v8[-1].Control = 0;
        v9 = a2->Tail.Overlay.CurrentStackLocation;
        v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
        v9[-1].Context = ACPIDeviceIrpCompleteRequest;
        v9[-1].Control = -32;
        PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 776), a2);
        return 259LL;
      }
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
      ACPIBuildRegRequest(a1, a2, &ACPIDeviceIrpDelayedDeviceOffRequest);
LABEL_20:
      AMLIDereferenceHandleEx(v7);
      return 259LL;
    }
    *(_BYTE *)(v6 + 556) = 1;
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
    v10 = *(_QWORD **)(v6 + 416);
    while ( v10 )
    {
      v14 = v10[1];
      v10 = (_QWORD *)*v10;
      if ( (*(_DWORD *)(v14 + 16) & 0x810LL) == 0 )
        _InterlockedOr64((volatile signed __int64 *)(v14 + 16), 0x800uLL);
    }
    v11 = *(_QWORD **)(v6 + 416);
    while ( v11 )
    {
      v15 = v11[1];
      v11 = (_QWORD *)*v11;
      if ( (*(_BYTE *)(v15 + 16) & 0x10) == 0 )
      {
        v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v17 = (_QWORD *)(v15 + 48);
        v18 = *(_QWORD **)(v15 + 48);
        v25 = (_QWORD *)(v15 + 48);
        if ( v18 != (_QWORD *)(v15 + 48) )
        {
          do
          {
            v19 = v18;
            v18 = (_QWORD *)*v18;
            v20 = *(v19 - 1);
            if ( *((_DWORD *)v19 - 5) == 1 )
            {
              KeReleaseSpinLock(&AcpiPowerLock, v16);
              v21 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
              v22 = v21;
              if ( !v20 || v20 == v6 || (unsigned int)(*(_DWORD *)(v20 + 368) - 2) > 1 || *(_BYTE *)(v20 + 556) )
              {
                KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
              }
              else
              {
                v23 = *(void **)(v20 + 784);
                if ( v23 )
                {
                  ACPIInitReferenceDeviceExtension(v20);
                  ObfReferenceObject(v23);
                  KeReleaseSpinLock(&AcpiDeviceTreeLock, v22);
                  if ( (unsigned __int8)ACPIInternalCheckPowerReferences(v20) == 1 )
                  {
                    *(_BYTE *)(v20 + 556) = 1;
                    PoFxNotifySurprisePowerOn(v23);
                  }
                  ObfDereferenceObject(v23);
                  ACPIInitDereferenceDeviceExtensionUnlocked(v20);
                }
                else
                {
                  KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
                }
                v17 = v25;
              }
              v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
            }
          }
          while ( v18 != v17 );
        }
        KeReleaseSpinLock(&AcpiPowerLock, v16);
      }
    }
    v12 = &ACPIDeviceIrpDelayedDeviceOnRequest;
    if ( !v7 )
      v12 = &ACPIDeviceIrpForwardRequest;
    ACPIDeviceIrpDeviceRequest(a1, a2, v12);
    if ( v7 )
      goto LABEL_20;
  }
  else if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 728), 1u);
    ACPIDeviceIrpWarmEjectRequest(DeviceExtension, a2, &ACPIDeviceIrpForwardRequest, 0LL);
  }
  else
  {
    ACPIDispatchForwardPowerIrp(a1, a2);
  }
  return 259LL;
}
