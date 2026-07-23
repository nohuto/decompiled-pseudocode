/*
 * XREFs of IoGetDeviceProperty @ 0x1408BA410
 * Callers:
 *     PoStoreRequester @ 0x1402BAE34 (PoStoreRequester.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E514 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     PiRebalanceOptOut @ 0x1405A65D4 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x1405C80A0 (KseDsCallbackHookAddDevice.c)
 *     ArbQueryConflict @ 0x1407038D0 (ArbQueryConflict.c)
 *     ArbShareDriverExclusive @ 0x140703FDC (ArbShareDriverExclusive.c)
 *     IoGetDmaAdapter @ 0x14071DB60 (IoGetDmaAdapter.c)
 *     IopIsPciRootBus @ 0x140723670 (IopIsPciRootBus.c)
 *     PopRegisterTargetDeviceProtection @ 0x140749F74 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14074A804 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14074FBE8 (PopWakeSourceGetDeviceProperty.c)
 *     IoWMISuggestInstanceName @ 0x1407A3E60 (IoWMISuggestInstanceName.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     PiControlGetPropertyData @ 0x1408BAE00 (PiControlGetPropertyData.c)
 *     IopQueryDeviceHardwareIdForPdcTask @ 0x1409EB200 (IopQueryDeviceHardwareIdForPdcTask.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A195D4 (SshpGenerateDeviceFriendlyName.c)
 *     SshpGenerateDeviceVerboseDescription @ 0x140A19898 (SshpGenerateDeviceVerboseDescription.c)
 *     PopGenerateDeviceFriendlyName @ 0x140A7C424 (PopGenerateDeviceFriendlyName.c)
 *     PopDiagQueryDevicePropertyString @ 0x140A86280 (PopDiagQueryDevicePropertyString.c)
 *     VfIsPCIBus @ 0x140B89284 (VfIsPCIBus.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PpvUtilFailDriver @ 0x1405A6408 (PpvUtilFailDriver.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1408B93F0 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PpIrpQueryCapabilities @ 0x1408B94D8 (PpIrpQueryCapabilities.c)
 *     PiGetDeviceRegProperty @ 0x1408BA9AC (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     PnpDetermineResourceListSize @ 0x140979290 (PnpDetermineResourceListSize.c)
 *     PnpBusTypeGuidGet @ 0x140A6A10C (PnpBusTypeGuidGet.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  __int16 v5; // si
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // esi
  unsigned __int16 *DeviceNode; // rdi
  int v14; // ecx
  int v15; // r8d
  NTSTATUS DeviceRegProperty; // ebx
  __int64 Pool2; // rax
  const void **v19; // rdi
  int NameStringMode; // eax
  int v21; // eax
  ULONG v22; // eax
  int v23; // eax
  int DeviceRegProp; // eax
  int v25; // ecx
  __int64 v26; // rcx
  ULONG v27; // eax
  ULONG *v28; // rdx
  ULONG v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rsi
  unsigned int v33; // r12d
  ULONG v34; // [rsp+40h] [rbp-A8h] BYREF
  int v35; // [rsp+44h] [rbp-A4h] BYREF
  int v36; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+50h] [rbp-98h] BYREF
  int v38; // [rsp+60h] [rbp-88h] BYREF
  int v39; // [rsp+68h] [rbp-80h]

  v5 = DeviceProperty;
  v37 = 0LL;
  memset_0(&v38, 0, 0x40uLL);
  v12 = v5 & 0xFFF;
  v36 = 0;
  v34 = 0;
  v35 = 0;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = (unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v12 != 18 && (v12 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v12 != 1 )
  {
    if ( v12 == 17 )
    {
      v14 = 17;
      v15 = 4;
      goto LABEL_7;
    }
    v9 = 0x140000000uLL;
    switch ( v12 )
    {
      case 0:
        v15 = 1;
        v14 = 1;
        goto LABEL_7;
      case 2:
        v14 = 3;
        goto LABEL_6;
      case 3:
        *ResultLength = BufferLength;
        return PiGetDeviceRegistryProperty(
                 (__int64)DeviceObject,
                 0x140000000LL,
                 v10,
                 v11,
                 (WCHAR *)PropertyBuffer,
                 ResultLength);
      case 4:
        v26 = *((_QWORD *)DeviceNode + 69);
        if ( !v26 )
          return 0;
        v27 = PnpDetermineResourceListSize(v26);
        *ResultLength = v27;
        if ( v27 > BufferLength )
          return -1073741789;
        memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v27);
        return 0;
      case 5:
        v14 = 8;
        v15 = 1;
        goto LABEL_7;
      case 6:
        v14 = 9;
        v15 = 1;
        goto LABEL_7;
      case 7:
        v14 = 10;
        v15 = 1;
        goto LABEL_7;
      case 8:
        v14 = 12;
        v15 = 1;
        goto LABEL_7;
      case 9:
        v14 = 13;
        v15 = 1;
        goto LABEL_7;
      case 10:
        v14 = 14;
        v15 = 1;
        goto LABEL_7;
      case 11:
        v34 = BufferLength + 16;
        Pool2 = ExAllocatePool2(0x100uLL, BufferLength + 16, 0x6F697050u);
        v19 = (const void **)Pool2;
        if ( !Pool2 )
          return -1073741670;
        NameStringMode = ObQueryNameStringMode((_DWORD)DeviceObject, Pool2, v34, (_DWORD)ResultLength, 0);
        DeviceRegProperty = NameStringMode;
        if ( NameStringMode == -1073741820 )
        {
          DeviceRegProperty = -1073741789;
        }
        else if ( NameStringMode >= 0 )
        {
          v21 = *(unsigned __int16 *)v19;
          if ( !(_WORD)v21 )
          {
            *ResultLength = 0;
            ExFreePoolWithTag(v19, 0);
            return DeviceRegProperty;
          }
          v22 = v21 + 2;
          *ResultLength = v22;
          if ( v22 > BufferLength )
          {
            DeviceRegProperty = -1073741789;
            ExFreePoolWithTag(v19, 0);
            return DeviceRegProperty;
          }
          memmove(PropertyBuffer, v19[1], *(unsigned __int16 *)v19);
          *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v19) = 0;
LABEL_22:
          ExFreePoolWithTag(v19, 0);
          return DeviceRegProperty;
        }
        *ResultLength -= 16;
        goto LABEL_22;
      case 12:
        DeviceRegProperty = PnpBusTypeGuidGet(DeviceNode[232], &v37);
        if ( DeviceRegProperty < 0 )
          return DeviceRegProperty;
        *ResultLength = 16;
        if ( BufferLength < 0x10 )
          return -1073741789;
        *(_OWORD *)PropertyBuffer = v37;
        return DeviceRegProperty;
      case 13:
        if ( *((_DWORD *)DeviceNode + 114) == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        *(_DWORD *)PropertyBuffer = *((_DWORD *)DeviceNode + 114);
        return 0;
      case 14:
        if ( *((int *)DeviceNode + 115) < 0 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        DeviceRegProperty = 0;
        *(_DWORD *)PropertyBuffer = *((_DWORD *)DeviceNode + 115);
        return DeviceRegProperty;
      case 15:
        v14 = 23;
        v15 = 1;
        goto LABEL_7;
      case 16:
        if ( (int)PpIrpQueryCapabilities((int)DeviceObject, &v38) < 0 )
          return -1073741772;
        v23 = v39;
        if ( v39 == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        *(_DWORD *)PropertyBuffer = v23;
        return 0;
      case 18:
        if ( DeviceNode == IopRootDeviceNode )
        {
          v25 = 0;
          DeviceRegProperty = 0;
          goto LABEL_52;
        }
        if ( !*((_QWORD *)DeviceNode + 6) )
          return -1073741808;
        while ( 2 )
        {
          v34 = 4;
          DeviceRegProp = CmGetDeviceRegProp(
                            PiPnpRtlCtx,
                            *((_QWORD *)DeviceNode + 6),
                            0,
                            11,
                            (__int64)&v35,
                            (__int64)&v36,
                            (__int64)&v34,
                            0);
          DeviceRegProperty = DeviceRegProp;
          if ( DeviceRegProp >= 0 && v35 == 4 && v34 == 4 )
          {
            if ( (v36 & 0x20) != 0 )
            {
              v25 = 1;
              break;
            }
            if ( (v36 & 0x40) == 0 )
            {
              if ( (v36 & 0x400) != 0 )
              {
                v25 = 3;
                break;
              }
              DeviceNode = (unsigned __int16 *)*((_QWORD *)DeviceNode + 2);
              v25 = 0;
              if ( DeviceNode == IopRootDeviceNode )
                break;
              continue;
            }
            v25 = 2;
          }
          else
          {
            v25 = 2;
            if ( DeviceRegProp < 0 )
            {
              if ( DeviceRegProp == -1073741275 || DeviceRegProp == -1073741810 )
                return -1073741772;
              return DeviceRegProperty;
            }
          }
          break;
        }
LABEL_52:
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        *(_DWORD *)PropertyBuffer = v25;
        return DeviceRegProperty;
      case 19:
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        PpHotSwapGetDevnodeRemovalPolicy((__int64)DeviceNode, 1, (unsigned int *)PropertyBuffer);
        return 0;
      case 20:
        ExAcquireFastMutex(&PiResourceListLock);
        v28 = (ULONG *)*((_QWORD *)DeviceNode + 55);
        if ( v28 )
        {
          v29 = *v28;
          *ResultLength = *v28;
          if ( v29 > BufferLength )
          {
            DeviceRegProperty = -1073741789;
            goto LABEL_89;
          }
          memmove(PropertyBuffer, v28, *v28);
        }
        else
        {
          *ResultLength = 0;
        }
        DeviceRegProperty = 0;
        goto LABEL_89;
      case 21:
        ExAcquireFastMutex(&PiResourceListLock);
        v30 = *((_QWORD *)DeviceNode + 52);
        if ( v30 && (v31 = *((_QWORD *)DeviceNode + 53)) != 0 )
        {
          v32 = (unsigned int)PnpDetermineResourceListSize(v30);
          v33 = PnpDetermineResourceListSize(v31);
          *ResultLength = v33 + v32;
          if ( v33 + (unsigned int)v32 > BufferLength )
          {
            DeviceRegProperty = -1073741789;
            goto LABEL_89;
          }
          memmove(PropertyBuffer, *((const void **)DeviceNode + 52), (unsigned int)v32);
          memmove((char *)PropertyBuffer + v32, *((const void **)DeviceNode + 53), v33);
        }
        else
        {
          *ResultLength = 0;
        }
        DeviceRegProperty = 0;
LABEL_89:
        KeReleaseGuardedMutex(&PiResourceListLock);
        return DeviceRegProperty;
      case 22:
        v14 = 37;
        v15 = 1;
        goto LABEL_7;
      default:
        return -1073741584;
    }
  }
  v14 = 2;
LABEL_6:
  v15 = 7;
LABEL_7:
  if ( !*((_QWORD *)DeviceNode + 6) )
    return -1073741808;
  *ResultLength = BufferLength;
  DeviceRegProperty = PiGetDeviceRegProperty(
                        *((_QWORD *)DeviceNode + 6),
                        v9,
                        v15,
                        v14,
                        (__int64)PropertyBuffer,
                        ResultLength);
  if ( DeviceRegProperty == -1073741275 )
    return -1073741772;
  return DeviceRegProperty;
}
