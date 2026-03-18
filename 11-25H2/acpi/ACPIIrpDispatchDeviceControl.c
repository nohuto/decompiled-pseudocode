/*
 * XREFs of ACPIIrpDispatchDeviceControl @ 0x1400101A0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1400108B0 (AcpiIoctlCleanupArgumentObjects.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140010C04 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x140010F68 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x14001143C (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x14001B450 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     _ACPIInternalErrorEx @ 0x14001C1A0 (_ACPIInternalErrorEx.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x140021EC8 (ACPIIoctlAcquireGlobalLock.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x14003A8D8 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x140048F9C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlEnumChildren @ 0x140049858 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlReleaseGlobalLock @ 0x14004A868 (ACPIIoctlReleaseGlobalLock.c)
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1400556E0 (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140061F70 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlEvaluateUsb4Osc @ 0x140062290 (ACPIIoctlEvaluateUsb4Osc.c)
 *     ACPIIoctlGetDeviceInformation @ 0x140062418 (ACPIIoctlGetDeviceInformation.c)
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x140062684 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     ACPIIoctlRegisterDeviceFirmwareLock @ 0x140062760 (ACPIIoctlRegisterDeviceFirmwareLock.c)
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1400627E0 (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIIoctlUnregisterDeviceFirmwareLockHandler @ 0x140062848 (ACPIIoctlUnregisterDeviceFirmwareLockHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1400979F0 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x14009ECE0 (ACPIIoctlTranslateBiosResources.c)
 */

NTSTATUS __fastcall ACPIIrpDispatchDeviceControl(ULONG_PTR BugCheckParameter3, PIRP Irp, __int64 a3, int a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  KPROCESSOR_MODE RequestorMode; // dl
  ULONG_PTR v7; // r14
  unsigned int v8; // edi
  void *v9; // r12
  unsigned int v10; // r13d
  PVOID v11; // r15
  int v12; // eax
  int v13; // r14d
  __int64 v14; // r8
  int v15; // esi
  NTSTATUS result; // eax
  int v17; // eax
  KIRQL v18; // al
  __int64 v19; // rdi
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned int LowPart; // edi
  int Status; // esi
  unsigned __int64 v24; // rdi
  __int64 DeviceExtension; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28[2]; // [rsp+40h] [rbp-20h] BYREF
  LUID PrivilegeValue; // [rsp+98h] [rbp+38h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+48h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  RequestorMode = Irp->RequestorMode;
  PrivilegeValue = (LUID)7LL;
  v7 = BugCheckParameter3;
  if ( !RequestorMode )
    goto LABEL_2;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (Irp->Flags & 0x400000) != 0 )
  {
    if ( LowPart == 3325952 )
      goto LABEL_2;
    if ( LowPart == 3325956 )
      goto LABEL_2;
    v24 = LowPart - 3325976;
    if ( (unsigned int)v24 <= 0x30 )
    {
      BugCheckParameter3 = 0x1111100011111LL;
      if ( _bittest64((const __int64 *)&BugCheckParameter3, v24) )
        goto LABEL_2;
    }
    DeviceExtension = ACPIInternalGetDeviceExtension(v7);
    if ( *(_QWORD *)(DeviceExtension + 776) )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), Irp);
    }
    goto LABEL_59;
  }
  if ( !RootDeviceExtension
    || BugCheckParameter3 != *(_QWORD *)(RootDeviceExtension + 768)
    || LowPart != 3325952
    || !SeSinglePrivilegeCheck(PrivilegeValue, RequestorMode) )
  {
    if ( LowPart == 3325956
      || LowPart == 3325952
      || (v26 = LowPart - 3325968, (unsigned int)v26 <= 0x38) && (v27 = 0x111110001111111LL, _bittest64(&v27, v26)) )
    {
      Status = -1073741637;
      Irp->IoStatus.Status = -1073741637;
LABEL_40:
      IofCompleteRequest(Irp, 0);
      return Status;
    }
    v18 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v19 = *(_QWORD *)(v7 + 64);
    if ( v19 && *(_DWORD *)(v19 + 16) != 1599293264 )
      ACPIInternalErrorEx(0x901A5uLL, v7, *(_QWORD *)(v7 + 64));
LABEL_27:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
    if ( *(_QWORD *)(v19 + 776) )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(*(PDEVICE_OBJECT *)(v19 + 776), Irp);
    }
LABEL_59:
    Status = Irp->IoStatus.Status;
    goto LABEL_40;
  }
LABEL_2:
  v8 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v8 == 3326024 )
  {
LABEL_3:
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
    v28[0] = 0LL;
    v31 = 0LL;
    P = 0LL;
    PrivilegeValue.LowPart = 0;
    switch ( v8 )
    {
      case 0x32C01Cu:
        v12 = ACPIIoctlEvalPreProcessingV1Ex(
                v7,
                (_DWORD)Irp,
                (_DWORD)CurrentStackLocation,
                a4,
                (__int64)v28,
                (__int64)&P,
                (__int64)&v31,
                (__int64)&PrivilegeValue);
        break;
      case 0x32C000u:
        v12 = ACPIIoctlEvalPreProcessingV1(v7, (__int64)v28, (__int64)&P, (__int64)&v31, (__int64)&PrivilegeValue);
        break;
      case 0x32C040u:
        v12 = ACPIIoctlEvalPreProcessingV2(v7, (__int64)v28, (__int64)&P, (__int64)&v31, (__int64)&PrivilegeValue);
        break;
      case 0x32C048u:
        v12 = ACPIIoctlEvalPreProcessingV2Ex(
                v7,
                (_DWORD)Irp,
                (_DWORD)CurrentStackLocation,
                a4,
                (__int64)v28,
                (__int64)&P,
                (__int64)&v31,
                (__int64)&PrivilegeValue);
        break;
      default:
        goto LABEL_11;
    }
    v11 = P;
    v13 = v12;
    if ( v12 < 0 )
      goto LABEL_21;
    v9 = (void *)v31;
    v10 = PrivilegeValue.LowPart;
LABEL_11:
    v13 = AMLIAsyncEvalObject(
            v28[0],
            (_DWORD)v11,
            v10,
            (_DWORD)v9,
            (__int64)&ACPIIoctlAsyncEvalControlMethodCompletion,
            (__int64)Irp);
    AMLIDereferenceHandleEx(v28[0]);
    if ( v9 )
    {
      AcpiIoctlCleanupArgumentObjects(v9, v10);
      ExFreePoolWithTag(v9, 0x41706341u);
    }
    v15 = 259;
    if ( v13 == 259 )
      return v15;
    if ( v13 >= 0 )
    {
      if ( v8 == 3325952 )
      {
        v14 = 0LL;
      }
      else
      {
        v20 = v8 - 3325980;
        if ( v20 )
        {
          v21 = v20 - 36;
          if ( v21 )
          {
            if ( v21 != 8 )
              goto LABEL_20;
            LOBYTE(v14) = 1;
            v17 = ACPIIoctlEvalPostProcessingV2(Irp, v11, v14);
          }
          else
          {
            v17 = ACPIIoctlEvalPostProcessingV2(Irp, v11, 0LL);
          }
LABEL_19:
          v13 = v17;
LABEL_20:
          dword_140089138 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)v11, 1u);
          goto LABEL_21;
        }
        LOBYTE(v14) = 1;
      }
      v17 = ACPIIoctlEvalPostProcessingV1(Irp, v11, v14);
      goto LABEL_19;
    }
LABEL_21:
    if ( v11 )
      ExFreePoolWithTag(v11, 0x52706341u);
    Irp->IoStatus.Status = v13;
    IofCompleteRequest(Irp, 0);
    return v13;
  }
  switch ( v8 )
  {
    case 0x32C000u:
    case 0x32C01Cu:
    case 0x32C040u:
      goto LABEL_3;
    case 0x32C004u:
    case 0x32C018u:
    case 0x32C03Cu:
    case 0x32C044u:
      result = ACPIIoctlEvalControlMethod(v7, Irp, CurrentStackLocation);
      break;
    case 0x32C008u:
      result = ACPIIoctlRegisterOpRegionHandler(v7, Irp, CurrentStackLocation);
      break;
    case 0x32C00Cu:
      return ACPIIoctlUnRegisterOpRegionHandler(v7, Irp, CurrentStackLocation);
    case 0x32C010u:
      result = ACPIIoctlAcquireGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
      break;
    case 0x32C014u:
      result = ACPIIoctlReleaseGlobalLock(BugCheckParameter3, Irp, CurrentStackLocation);
      break;
    case 0x32C020u:
      return ACPIIoctlEnumChildren(v7, Irp, CurrentStackLocation);
    case 0x32C024u:
      return ACPIIoctlQueryDeviceBiosName(v7, Irp, CurrentStackLocation);
    case 0x32C028u:
      return ACPIIoctlGetDeviceInformation(v7, Irp, CurrentStackLocation);
    case 0x32C02Cu:
      return ACPIIoctlTranslateBiosResources(v7, Irp, CurrentStackLocation);
    case 0x32C030u:
      return ACPIIoctlRegisterDeviceFirmwareLock(v7, Irp, CurrentStackLocation);
    case 0x32C034u:
      return ACPIIoctlUnregisterDeviceFirmwareLockHandler(BugCheckParameter3, Irp, CurrentStackLocation);
    case 0x32C038u:
      return ACPIIoctlGetDeviceSpecificData(v7, Irp, CurrentStackLocation);
    case 0x32C04Cu:
      return ACPIIoctlEvaluateUsb4Osc(v7, Irp);
    case 0x32C050u:
      return ACPIIoctlQueryDeviceBiosNameEx(v7, Irp, CurrentStackLocation);
    default:
      v18 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v19 = *(_QWORD *)(v7 + 64);
      if ( v19 && *(_DWORD *)(v19 + 16) != 1599293264 )
        ACPIInternalErrorEx(0x901A5uLL, v7, *(_QWORD *)(v7 + 64));
      goto LABEL_27;
  }
  return result;
}
