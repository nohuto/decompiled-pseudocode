/*
 * XREFs of ACPIDispatchIrp @ 0x14001ADE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x14001B414 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     _ACPIInternalErrorEx @ 0x14001C1A0 (_ACPIInternalErrorEx.c)
 *     ACPIWakeDeferredRestoreEnables @ 0x1400204F0 (ACPIWakeDeferredRestoreEnables.c)
 *     WPP_RECORDER_SF_qq @ 0x140023BC4 (WPP_RECORDER_SF_qq.c)
 *     ACPIWakeEmptyRequestQueue @ 0x140031854 (ACPIWakeEmptyRequestQueue.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x140045940 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x140048648 (ACPIThermalReleaseCoolingInterfaces.c)
 *     EnableDisableRegionSpacesForDevice @ 0x14004E778 (EnableDisableRegionSpacesForDevice.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1400BDE58 (ACPIInternalNotifyAvailableDeviceObject.c)
 */

__int64 __fastcall ACPIDispatchIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  KIRQL v5; // al
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int8 MajorFunction; // al
  __int64 MinorFunction; // rcx
  unsigned int v12; // edi
  KPROCESSOR_MODE RequestorMode; // dl
  unsigned int v15; // eax
  unsigned int Status; // edi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 (__fastcall *v20)(ULONG_PTR, PIRP); // rdi
  __int64 (__fastcall *v21)(ULONG_PTR, PIRP); // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdi
  unsigned int (__fastcall *v25)(ULONG_PTR, PIRP); // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int LowPart; // ecx
  bool v31; // zf
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 DeviceExtension; // rax
  unsigned int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&Event, 0, sizeof(Event));
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 16) != 1599293264 )
      ACPIInternalErrorEx(0x90234uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
    if ( (*(_BYTE *)(v6 + 8) & 4) != 0 )
    {
      v7 = 0LL;
      v6 = 0LL;
    }
    else
    {
      v7 = *(_QWORD *)(v6 + 24);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 728));
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v6 )
    {
      MajorFunction = CurrentStackLocation->MajorFunction;
      MinorFunction = CurrentStackLocation->MinorFunction;
      if ( CurrentStackLocation->MajorFunction == 15 )
      {
LABEL_7:
        v7 += 8LL;
        goto LABEL_8;
      }
      if ( MajorFunction == 22 )
      {
        v19 = *(_QWORD *)(v7 + 32);
        if ( (unsigned __int8)MinorFunction >= 4u )
        {
          v21 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v19 + 32);
        }
        else
        {
          v20 = *(__int64 (__fastcall **)(ULONG_PTR, PIRP))(v19 + 8 * MinorFunction);
          v21 = v20;
          if ( (_BYTE)MinorFunction == 2 && !CurrentStackLocation->Parameters.Create.Options )
          {
            LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
            if ( *(_DWORD *)(v6 + 548) != LowPart )
            {
              v31 = *(_DWORD *)(v6 + 368) == 3;
              *(_DWORD *)(v6 + 548) = LowPart;
              if ( v31 && (*(_DWORD *)(v6 + 668) & 0x300) != 0 )
              {
                LOBYTE(v8) = LowPart == 1;
                EnableDisableRegionSpacesForDevice(v6, v8, v20);
                v21 = v20;
              }
            }
          }
        }
        if ( CurrentStackLocation->MinorFunction == 2
          && !CurrentStackLocation->Parameters.Create.Options
          && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1
          && !_bittest64((const signed __int64 *)(v6 + 8), 0x33u)
          && (*(_DWORD *)(v6 + 1120) & 0x1000LL) != 0 )
        {
          Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 728));
          Irp->IoStatus.Status = 0;
          ACPIWakeDeferredRestoreEnables(v6, v8, Irp);
          v12 = 259;
          ACPIInternalDecrementIrpReferenceCount(v6, v28, v29);
          return v12;
        }
        if ( v21 )
        {
          v12 = v21(BugCheckParameter3, Irp);
LABEL_30:
          ACPIInternalDecrementIrpReferenceCount(v6, v22, v23);
          return v12;
        }
      }
      else
      {
        if ( MajorFunction != 27 )
        {
          if ( MajorFunction && MajorFunction != 2 )
          {
            if ( MajorFunction == 14 )
            {
              RequestorMode = Irp->RequestorMode;
              if ( !RequestorMode
                || (Irp->Flags & 0x400000) != 0
                || RootDeviceExtension
                && BugCheckParameter3 == *(_QWORD *)(RootDeviceExtension + 768)
                && SeSinglePrivilegeCheck((LUID)7LL, RequestorMode) )
              {
                goto LABEL_7;
              }
              v15 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
              if ( v15 == 3325956
                || v15 == 3325952
                || (v40 = v15 - 3325968, (unsigned int)v40 <= 0x38)
                && (v41 = 0x111110001111111LL, _bittest64(&v41, v40)) )
              {
                Status = -1073741637;
                Irp->IoStatus.Status = -1073741637;
              }
              else
              {
                DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
                if ( *(_QWORD *)(DeviceExtension + 776) )
                {
                  ++Irp->CurrentLocation;
                  ++Irp->Tail.Overlay.CurrentStackLocation;
                  v37 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), Irp);
                  ACPIInternalDecrementIrpReferenceCount(v6, v38, v39);
                  return v37;
                }
                Status = Irp->IoStatus.Status;
              }
              IofCompleteRequest(Irp, 0);
              ACPIInternalDecrementIrpReferenceCount(v6, v17, v18);
              return Status;
            }
            if ( MajorFunction == 23 )
              v7 += 40LL;
            else
              v7 += 48LL;
          }
LABEL_8:
          if ( *(_QWORD *)v7 )
          {
            v12 = (*(__int64 (__fastcall **)(ULONG_PTR, PIRP))v7)(BugCheckParameter3, Irp);
          }
          else
          {
            v12 = -1073741822;
            Irp->IoStatus.Status = -1073741822;
            IofCompleteRequest(Irp, 0);
          }
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 728), 0xFFFFFFFF) == 1 )
            KeSetEvent(*(PRKEVENT *)(v6 + 752), 0, 0);
          return v12;
        }
        if ( (_BYTE)MinorFunction )
        {
          v24 = *(_QWORD *)(v7 + 24);
          if ( (unsigned __int8)MinorFunction >= 0x1Au )
          {
            v25 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v24 + 208);
          }
          else
          {
            v25 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v24 + 8 * MinorFunction);
            switch ( (_BYTE)MinorFunction )
            {
              case 0xB:
                if ( (*(_DWORD *)(v6 + 8) & 0x200LL) == 0 )
                  _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x200uLL);
                break;
              case 7:
                if ( *(_DWORD *)(v6 + 368) == 2 && (*(_DWORD *)(v6 + 8) & 0x200LL) != 0 )
                {
                  *(_DWORD *)(v6 + 372) = 2;
                  *(_DWORD *)(v6 + 368) = 3;
                  ACPIInternalNotifyAvailableDeviceObject(v6);
                  if ( (*(_DWORD *)(v6 + 668) & 0x300) != 0 )
                  {
                    LOBYTE(v32) = 1;
                    EnableDisableRegionSpacesForDevice(v6, v32, v33);
                  }
                  ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(v6);
                }
                break;
              case 2:
              case 0x17:
                if ( *(_DWORD *)(v6 + 368) == 3 )
                {
                  if ( (*(_DWORD *)(v6 + 668) & 0x300) != 0 )
                    EnableDisableRegionSpacesForDevice(v6, 0LL, v9);
                  *(_DWORD *)(v6 + 372) = 3;
                  *(_DWORD *)(v6 + 368) = 2;
                }
                ACPIThermalReleaseCoolingInterfaces(v6);
                _InterlockedAnd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFDFFuLL);
                KeInitializeEvent(&Event, SynchronizationEvent, 0);
                *(_QWORD *)(v6 + 752) = &Event;
                ACPIWakeEmptyRequestQueue(v6);
                ACPIInternalDecrementIrpReferenceCount(v6, v34, v35);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 728), 0xFFFFFFFF) != 1 )
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                _InterlockedIncrement((volatile signed __int32 *)(v6 + 728));
                *(_QWORD *)(v6 + 752) = 0LL;
                if ( v25 )
                {
                  return v25(BugCheckParameter3, Irp);
                }
                else
                {
                  v12 = -1073741822;
                  Irp->IoStatus.Status = -1073741822;
                  IofCompleteRequest(Irp, 0);
                }
                return v12;
            }
          }
        }
        else
        {
          v25 = *(unsigned int (__fastcall **)(ULONG_PTR, PIRP))(v7 + 16);
        }
        if ( v25 )
        {
          v12 = v25(BugCheckParameter3, Irp);
          ACPIInternalDecrementIrpReferenceCount(v6, v26, v27);
          return v12;
        }
      }
      v12 = -1073741822;
      Irp->IoStatus.Status = -1073741822;
      IofCompleteRequest(Irp, 0);
      goto LABEL_30;
    }
  }
  else
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      6,
      17,
      (__int64)&WPP_9c896f3fb25c3899c55b6b55cc08feda_Traceguids,
      BugCheckParameter3,
      (char)Irp);
  }
  Irp->IoStatus.Status = -1073741810;
  IofCompleteRequest(Irp, 0);
  return 3221225486LL;
}
