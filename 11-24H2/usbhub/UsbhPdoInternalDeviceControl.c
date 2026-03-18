/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x14000B2A0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x14000BE94 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnPortStatus @ 0x14000C4F0 (UsbhFdoReturnPortStatus.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x140016FD8 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhSetPdo_AllowIo @ 0x14001D6C8 (UsbhSetPdo_AllowIo.c)
 *     UsbhIdleIrp_Event @ 0x14001EFA4 (UsbhIdleIrp_Event.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1400296B0 (UsbhFdoValidateConnectionPdo.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1400367AC (UsbhFdoSelectInterfacePdo.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     UsbhFdoReturnDeviceHandle @ 0x14003AAD4 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x14003AB8C (UsbhFdoReturnTtDeviceHandle.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x14003F6C0 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x14003F828 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x14003F88C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14003F97C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x14003FA64 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x14003FC5C (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x14004005C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1400400C0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140040180 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x140040390 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x140040438 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1400404D8 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1400405C8 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140040684 (UsbhFdoSubmitPdoIdleNotification.c)
 *     USBHUB_TriggerCallBacks @ 0x14004E8F4 (USBHUB_TriggerCallBacks.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(_QWORD *BugCheckParameter3, IRP *BugCheckParameter4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v5; // r14
  unsigned int LowPart; // ebx
  __int64 v7; // rbp
  KSPIN_LOCK *v8; // r12
  KIRQL v9; // al
  KIRQL v10; // r13
  __int64 Pool2; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _DEVICE_OBJECT *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  unsigned int MsDescriptorPdo; // r14d
  __int64 v23; // rbp
  _QWORD *v24; // rbx
  KIRQL v25; // r12
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // r8
  __int64 result; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  __int64 v36; // rcx
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  unsigned int Status; // ebx
  int v50; // eax
  int v51; // [rsp+70h] [rbp+8h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = BugCheckParameter3[8];
  if ( !v5 )
    goto LABEL_66;
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v5 + 1184), 100LL);
      if ( *(_BYTE *)(v5 + 2741) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            10,
            (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
        Log(*(_QWORD *)(v5 + 1184), 256, 1397903939, 0, *(_QWORD *)(v5 + 1184));
        UsbhSetPdo_AllowIo(v36, BugCheckParameter3);
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        result = 0LL;
        *(_QWORD *)(v5 + 2784) = 0LL;
        *(_BYTE *)(v5 + 2741) = 0;
        return result;
      }
      if ( *(_DWORD *)(v5 + 784) != 2 )
      {
LABEL_109:
        v51 = 1232023609;
        goto LABEL_9;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          11,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903953, 0, *(_QWORD *)(v5 + 1184));
      *(_QWORD *)(v5 + 2784) = BugCheckParameter4;
LABEL_46:
      BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      return 259LL;
    case 0x220FABu:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          0x40000000u,
          3,
          12,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v5 + 1184));
      v30 = *(_QWORD *)(v5 + 1184);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 64);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
            *(_DWORD *)v32 = 1213354579;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 16) = 0LL;
            *(_QWORD *)(v32 + 24) = v30;
          }
        }
      }
      *(_QWORD *)(v5 + 2792) = BugCheckParameter4;
      goto LABEL_46;
    case 0x220463u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          0x40000000u,
          1,
          13,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v5 + 840));
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      *(_DWORD *)(v5 + 1432) |= 0x80000u;
      return 0LL;
    case 0x220420u:
      v51 = 1232023603;
      goto LABEL_9;
  }
  if ( LowPart > 0x220424 )
  {
    if ( LowPart > 0x22044F )
    {
      switch ( LowPart )
      {
        case 0x491404u:
          v51 = 1232023857;
          goto LABEL_9;
        case 0x491408u:
          v51 = 1232023858;
          goto LABEL_9;
        case 0x49140Fu:
          v51 = 1232023859;
          goto LABEL_9;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x22044Fu:
          v51 = 1232023856;
          goto LABEL_9;
        case 0x22042Cu:
          v51 = 1232023652;
          goto LABEL_9;
        case 0x220433u:
          v51 = 1232023607;
          goto LABEL_9;
        case 0x220437u:
          v51 = 1232023608;
          goto LABEL_9;
        case 0x22043Bu:
          v51 = 1232023606;
          goto LABEL_9;
      }
    }
LABEL_106:
    v51 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    goto LABEL_9;
  }
  if ( LowPart == 2229284 )
  {
    v51 = 1232023602;
  }
  else
  {
    switch ( LowPart )
    {
      case 0x220003u:
        v51 = 1232023604;
        break;
      case 0x220007u:
        goto LABEL_109;
      case 0x22000Fu:
        v51 = 1232023601;
        break;
      case 0x220013u:
        v51 = 1232023605;
        break;
      case 0x220017u:
        v51 = 1232023649;
        break;
      case 0x22001Bu:
        v51 = 1232023600;
        break;
      case 0x22001Fu:
        v51 = 1232023650;
        break;
      case 0x220020u:
        v51 = 1232023651;
        break;
      case 0x220027u:
        v51 = 1232023653;
        break;
      case 0x22002Bu:
        v51 = 1232023654;
        break;
      default:
        goto LABEL_106;
    }
  }
LABEL_9:
  v7 = BugCheckParameter3[8];
  if ( !v7 )
    goto LABEL_66;
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v8 = (KSPIN_LOCK *)(v7 + 1216);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1216));
  v10 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1216), v9);
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = -1073741810;
    IofCompleteRequest(BugCheckParameter4, 0);
    return 3221225486LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = BugCheckParameter4;
      v12 = v7 + 1224;
      *(_DWORD *)Pool2 = 1330201673;
      *(_DWORD *)(Pool2 + 32) = v51;
      v13 = (_QWORD *)(Pool2 + 8);
      v14 = *(_QWORD **)(v12 + 8);
      if ( *v14 != v12 )
        goto LABEL_158;
      *v13 = v12;
      v13[1] = v14;
      *v14 = v13;
      *(_QWORD *)(v12 + 8) = v13;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1264);
    }
    KeReleaseSpinLock(v8, v10);
    if ( LowPart == 2228227 )
    {
      v18 = *(struct _DEVICE_OBJECT **)(v5 + 1184);
      v19 = FdoExt(v18, v15, v16, v17);
      v20 = BugCheckParameter3[8];
      if ( !v20 )
        goto LABEL_66;
      if ( *(_DWORD *)v20 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, v20);
      SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
      SecurityContext->AccessState = *(_ACCESS_STATE **)(v20 + 1160);
      if ( WORD1(SecurityContext->SecurityQos) != 19 )
      {
        switch ( WORD1(SecurityContext->SecurityQos) )
        {
          case 0:
            MsDescriptorPdo = UsbhFdoSelectConfigurationPdo(v18, BugCheckParameter3, BugCheckParameter4);
            break;
          case 1:
            MsDescriptorPdo = UsbhFdoSelectInterfacePdo(v18, BugCheckParameter3, BugCheckParameter4);
            break;
          case 0x1E:
          case 0x30:
          case 0x31:
            MsDescriptorPdo = UsbhFdoValidateConnectionPdo(v18, BugCheckParameter3, BugCheckParameter4);
            break;
          case 0x2A:
            MsDescriptorPdo = UsbhFdoGetMsDescriptorPdo(v18, BugCheckParameter3, BugCheckParameter4);
            break;
          default:
            goto LABEL_64;
        }
        return MsDescriptorPdo;
      }
      if ( (*(_DWORD *)(v20 + 1432) & 0x80000) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            1,
            19,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            *(_QWORD *)(v20 + 840));
        MsDescriptorPdo = -1073741637;
        BugCheckParameter4->IoStatus.Status = -1073741637;
        IofCompleteRequest(BugCheckParameter4, 0);
        v23 = BugCheckParameter3[8];
        if ( v23 )
        {
          if ( *(_DWORD *)v23 != 1329877064 )
            UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
          v24 = (_QWORD *)(v23 + 1224);
          v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 1216));
          v26 = *(_QWORD **)(v23 + 1224);
          if ( v26 == (_QWORD *)(v23 + 1224) || !v26 )
          {
LABEL_159:
            v50 = *(_DWORD *)(v23 + 1264);
            if ( !v50 )
            {
              USBHUB_TriggerCallBacks(BugCheckParameter3);
              KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
            }
            *(_DWORD *)(v23 + 1264) = v50 - 1;
            goto LABEL_31;
          }
          while ( 1 )
          {
            if ( v26 == v24 )
              goto LABEL_159;
            v27 = (_QWORD *)*v26;
            if ( (IRP *)v26[2] == BugCheckParameter4 )
              break;
            v26 = (_QWORD *)*v26;
          }
          if ( (_QWORD *)v27[1] == v26 )
          {
            v28 = (_QWORD *)v26[1];
            if ( (_QWORD *)*v28 == v26 )
            {
              *v28 = v27;
              v27[1] = v28;
              ExFreePoolWithTag(v26 - 1, 0);
LABEL_31:
              if ( (_QWORD *)*v24 != v24 || *(_DWORD *)(v23 + 1264) )
              {
                KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 1216), v25);
              }
              else
              {
                KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 1216), v25);
                KeSetEvent((PRKEVENT)(v23 + 1240), 0, 0);
              }
              return MsDescriptorPdo;
            }
          }
LABEL_158:
          __fastfail(3u);
        }
LABEL_66:
        UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
      }
LABEL_64:
      ++BugCheckParameter4->CurrentLocation;
      ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
      MsDescriptorPdo = IofCallDriver(*(PDEVICE_OBJECT *)(v19 + 1216), BugCheckParameter4);
LABEL_65:
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      return MsDescriptorPdo;
    }
    if ( LowPart <= 0x22042C )
    {
      if ( LowPart == 2229292 )
      {
        MsDescriptorPdo = -1073741637;
        BugCheckParameter4->IoStatus.Status = -1073741637;
        IofCompleteRequest(BugCheckParameter4, 0);
        goto LABEL_65;
      }
      if ( LowPart > 0x22001F )
      {
        v38 = LowPart - 2228256;
        if ( !v38 )
          return UsbhFdoReturnHubName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v39 = v38 - 7;
        if ( !v39 )
          return UsbhFdoSubmitPdoIdleNotification(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v40 = v39 - 4;
        if ( !v40 )
          return UsbhFdoRecordFailure(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v41 = v40 - 1013;
        if ( !v41 )
          return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v41 == 4 )
          return UsbhFdoReturnControllerName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_150;
      }
      if ( LowPart == 2228255 )
        return UsbhFdoCyclePdoPort(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      v33 = LowPart - 2228231;
      if ( v33 )
      {
        v34 = v33 - 8;
        if ( !v34 )
          return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v35 = v34 - 4;
        if ( !v35 )
          return UsbhFdoReturnPortStatus(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v37 = v35 - 4;
        if ( !v37 )
        {
          BugCheckParameter4->IoStatus.Status = 0;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return 0LL;
        }
        if ( v37 == 4 )
          return UsbhFdoReturnHubCount(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
LABEL_150:
        Status = BugCheckParameter4->IoStatus.Status;
        BugCheckParameter4->IoStatus.Status = Status;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return Status;
      }
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    }
    if ( LowPart <= 0x22044F )
    {
      if ( LowPart == 2229327 )
        return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      v42 = LowPart - 2229299;
      if ( v42 )
      {
        v43 = v42 - 4;
        if ( v43 )
        {
          v44 = v43 - 4;
          if ( !v44 )
            return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          v45 = v44 - 4;
          if ( !v45 )
            return UsbhFdoReturnTopologyAddress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          if ( v45 == 4 )
            return UsbhIdleIrp_Event(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, 7LL, 0);
          goto LABEL_150;
        }
        LOBYTE(v17) = 1;
      }
      else
      {
        v17 = 0LL;
      }
      return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, v17);
    }
    v46 = LowPart - 2232243;
    if ( !v46 )
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    v47 = v46 - 2557009;
    if ( v47 )
    {
      v48 = v47 - 4;
      if ( v48 )
      {
        if ( v48 == 7 )
          return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_150;
      }
      return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    }
    else
    {
      return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    }
  }
}
