/*
 * XREFs of IoGetDeviceProperty @ 0x140834450
 * Callers:
 *     PoStoreRequester @ 0x140425FC4 (PoStoreRequester.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E274 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     PiRebalanceOptOut @ 0x1405A5CD4 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x1405C6360 (KseDsCallbackHookAddDevice.c)
 *     ArbQueryConflict @ 0x1406F9E30 (ArbQueryConflict.c)
 *     ArbShareDriverExclusive @ 0x1406FA53C (ArbShareDriverExclusive.c)
 *     IoGetDmaAdapter @ 0x140713ED0 (IoGetDmaAdapter.c)
 *     IopIsPciRootBus @ 0x140719B60 (IopIsPciRootBus.c)
 *     PopRegisterTargetDeviceProtection @ 0x14073FB74 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140740404 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1407457F8 (PopWakeSourceGetDeviceProperty.c)
 *     IoWMISuggestInstanceName @ 0x140794980 (IoWMISuggestInstanceName.c)
 *     PiControlGetPropertyData @ 0x140834060 (PiControlGetPropertyData.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     IopQueryDeviceHardwareIdForPdcTask @ 0x14096BCBC (IopQueryDeviceHardwareIdForPdcTask.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A1A304 (SshpGenerateDeviceFriendlyName.c)
 *     SshpGenerateDeviceVerboseDescription @ 0x140A1A5C8 (SshpGenerateDeviceVerboseDescription.c)
 *     PopGenerateDeviceFriendlyName @ 0x140A7E4AC (PopGenerateDeviceFriendlyName.c)
 *     PopDiagQueryDevicePropertyString @ 0x140A85374 (PopDiagQueryDevicePropertyString.c)
 *     VfIsPCIBus @ 0x140B772A4 (VfIsPCIBus.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PpvUtilFailDriver @ 0x1405A5B0C (PpvUtilFailDriver.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiGetDeviceRegistryProperty @ 0x140712B28 (PiGetDeviceRegistryProperty.c)
 *     PnpDetermineResourceListSize @ 0x140832EFC (PnpDetermineResourceListSize.c)
 *     PiGetDeviceRegProperty @ 0x140834998 (PiGetDeviceRegProperty.c)
 *     PpIrpQueryCapabilities @ 0x140834CB8 (PpIrpQueryCapabilities.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140834EE0 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     PnpBusTypeGuidGet @ 0x140A6F92C (PnpBusTypeGuidGet.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  __int16 v5; // bx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned __int16 *DeviceNode; // rsi
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // r15d
  NTSTATUS DeviceRegProperty; // ebx
  bool v17; // zf
  __int64 Pool2; // rax
  const void **v20; // rdi
  int NameStringMode; // eax
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  ULONG v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  _DWORD *v39; // rcx
  ULONG v40; // eax
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  _DWORD *v43; // rcx
  _DWORD *v44; // rbx
  __int64 v45; // rdi
  unsigned int v46; // r15d
  ULONG *v47; // rdx
  ULONG v48; // eax
  ULONG v49; // [rsp+40h] [rbp-61h] BYREF
  int v50; // [rsp+44h] [rbp-5Dh] BYREF
  int v51; // [rsp+48h] [rbp-59h] BYREF
  PDEVICE_OBJECT v52; // [rsp+50h] [rbp-51h]
  __int128 v53; // [rsp+58h] [rbp-49h] BYREF
  char v54[8]; // [rsp+70h] [rbp-31h] BYREF
  int v55; // [rsp+78h] [rbp-29h]

  v5 = DeviceProperty;
  v52 = DeviceObject;
  v53 = 0LL;
  memset_0(v54, 0, 0x40uLL);
  v11 = v5 & 0xFFF;
  v51 = 0;
  v50 = 0;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = (unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v11 != 18 && (v11 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v11 <= 0xB )
  {
    if ( v11 != 11 )
    {
      if ( v11 == 5 )
      {
        v15 = 8;
      }
      else
      {
        if ( v11 <= 5 )
        {
          if ( !v11 )
          {
            v14 = 1;
            v15 = 1;
            goto LABEL_11;
          }
          v13 = v11 - 1;
          if ( !v13 )
          {
            v14 = 7;
            v15 = 2;
            goto LABEL_11;
          }
          v37 = v13 - 1;
          if ( !v37 )
          {
            v14 = 7;
            v15 = 3;
LABEL_11:
            if ( *((_QWORD *)DeviceNode + 6) )
            {
              *ResultLength = BufferLength;
              DeviceRegProperty = PiGetDeviceRegProperty(
                                    *((_QWORD *)DeviceNode + 6),
                                    0,
                                    v14,
                                    v15,
                                    (__int64)PropertyBuffer,
                                    ResultLength);
              v17 = DeviceRegProperty == -1073741275;
              goto LABEL_13;
            }
            return -1073741808;
          }
          v38 = v37 - 1;
          if ( !v38 )
          {
            *ResultLength = BufferLength;
            return PiGetDeviceRegistryProperty(
                     (__int64)DeviceObject,
                     0LL,
                     v9,
                     v10,
                     (WCHAR *)PropertyBuffer,
                     ResultLength);
          }
          if ( v38 == 1 )
          {
            v39 = (_DWORD *)*((_QWORD *)DeviceNode + 69);
            if ( v39 )
            {
              v40 = PnpDetermineResourceListSize(v39);
              *ResultLength = v40;
              if ( v40 <= BufferLength )
              {
                memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v40);
                return 0;
              }
              return -1073741789;
            }
            return 0;
          }
          return -1073741584;
        }
        v26 = v11 - 6;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v35 = v27 - 1;
            if ( v35 )
            {
              v36 = v35 - 1;
              if ( v36 )
              {
                if ( v36 != 1 )
                  return -1073741584;
                v15 = 14;
              }
              else
              {
                v15 = 13;
              }
            }
            else
            {
              v15 = 12;
            }
          }
          else
          {
            v15 = 10;
          }
        }
        else
        {
          v15 = 9;
        }
      }
LABEL_21:
      v14 = 1;
      goto LABEL_11;
    }
    v49 = BufferLength + 16;
    Pool2 = ExAllocatePool2(0x100uLL);
    v20 = (const void **)Pool2;
    if ( !Pool2 )
      return -1073741670;
    NameStringMode = ObQueryNameStringMode((_DWORD)v52, Pool2, v49, (_DWORD)ResultLength, 0);
    DeviceRegProperty = NameStringMode;
    if ( NameStringMode == -1073741820 )
    {
      DeviceRegProperty = -1073741789;
    }
    else if ( NameStringMode >= 0 )
    {
      v33 = *(unsigned __int16 *)v20;
      if ( (_WORD)v33 )
      {
        v34 = v33 + 2;
        *ResultLength = v34;
        if ( v34 > BufferLength )
        {
          DeviceRegProperty = -1073741789;
        }
        else
        {
          memmove(PropertyBuffer, v20[1], *(unsigned __int16 *)v20);
          *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v20) = 0;
        }
      }
      else
      {
        *ResultLength = 0;
      }
      goto LABEL_26;
    }
    *ResultLength -= 16;
LABEL_26:
    ExFreePoolWithTag(v20, 0);
    return DeviceRegProperty;
  }
  v15 = 17;
  if ( v11 <= 0x11 )
  {
    if ( v11 == 17 )
    {
      v14 = 4;
      goto LABEL_11;
    }
    v22 = v11 - 12;
    if ( !v22 )
    {
      DeviceRegProperty = PnpBusTypeGuidGet(DeviceNode[232], &v53);
      if ( DeviceRegProperty < 0 )
        return DeviceRegProperty;
      *ResultLength = 16;
      if ( BufferLength >= 0x10 )
      {
        *(_OWORD *)PropertyBuffer = v53;
        return DeviceRegProperty;
      }
      return -1073741789;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      if ( *((_DWORD *)DeviceNode + 114) == -1 )
        return -1073741772;
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      v25 = *((_DWORD *)DeviceNode + 114);
LABEL_33:
      *(_DWORD *)PropertyBuffer = v25;
      return 0;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      if ( *((int *)DeviceNode + 115) < 0 )
        return -1073741772;
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      v25 = *((_DWORD *)DeviceNode + 115);
      goto LABEL_33;
    }
    v30 = v24 - 1;
    if ( !v30 )
    {
      v15 = 23;
      goto LABEL_21;
    }
    if ( v30 != 1 )
      return -1073741584;
    if ( (int)PpIrpQueryCapabilities(DeviceObject, v54) < 0 )
      return -1073741772;
    v31 = v55;
    if ( v55 == -1 )
      return -1073741772;
    *ResultLength = 4;
    if ( BufferLength < 4 )
      return -1073741789;
    *(_DWORD *)PropertyBuffer = v31;
    return 0;
  }
  v28 = v11 - 18;
  if ( v28 )
  {
    v29 = v28 - 1;
    if ( !v29 )
    {
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 1LL, PropertyBuffer);
      return 0;
    }
    v41 = v29 - 1;
    if ( v41 )
    {
      v42 = v41 - 1;
      if ( v42 )
      {
        if ( v42 != 1 )
          return -1073741584;
        v15 = 37;
        goto LABEL_21;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v43 = (_DWORD *)*((_QWORD *)DeviceNode + 52);
      if ( !v43 || (v44 = (_DWORD *)*((_QWORD *)DeviceNode + 53)) == 0LL )
      {
        *ResultLength = 0;
        DeviceRegProperty = 0;
LABEL_119:
        KeReleaseGuardedMutex(&PiResourceListLock);
        return DeviceRegProperty;
      }
      v45 = (unsigned int)PnpDetermineResourceListSize(v43);
      v46 = PnpDetermineResourceListSize(v44);
      *ResultLength = v46 + v45;
      if ( v46 + (unsigned int)v45 <= BufferLength )
      {
        memmove(PropertyBuffer, *((const void **)DeviceNode + 52), (unsigned int)v45);
        memmove((char *)PropertyBuffer + v45, *((const void **)DeviceNode + 53), v46);
LABEL_118:
        DeviceRegProperty = 0;
        goto LABEL_119;
      }
    }
    else
    {
      ExAcquireFastMutex(&PiResourceListLock);
      v47 = (ULONG *)*((_QWORD *)DeviceNode + 55);
      if ( !v47 )
      {
        *ResultLength = 0;
        goto LABEL_118;
      }
      v48 = *v47;
      *ResultLength = *v47;
      if ( v48 <= BufferLength )
      {
        memmove(PropertyBuffer, v47, *v47);
        goto LABEL_118;
      }
    }
    DeviceRegProperty = -1073741789;
    goto LABEL_119;
  }
  if ( DeviceNode == IopRootDeviceNode )
  {
    v32 = 0;
    DeviceRegProperty = 0;
LABEL_67:
    *ResultLength = 4;
    if ( BufferLength >= 4 )
    {
      *(_DWORD *)PropertyBuffer = v32;
      return DeviceRegProperty;
    }
    return -1073741789;
  }
  if ( !*((_QWORD *)DeviceNode + 6) )
    return -1073741808;
  while ( 1 )
  {
    v49 = 4;
    DeviceRegProperty = CmGetDeviceRegProp(
                          PiPnpRtlCtx,
                          *((_QWORD *)DeviceNode + 6),
                          0,
                          11,
                          (__int64)&v50,
                          (__int64)&v51,
                          (__int64)&v49,
                          0);
    if ( DeviceRegProperty < 0 || v50 != 4 || v49 != 4 )
      break;
    if ( (v51 & 0x20) != 0 )
    {
      v32 = 1;
    }
    else if ( (v51 & 0x40) != 0 )
    {
      v32 = 2;
    }
    else
    {
      v32 = (v51 & 0x400) != 0 ? 3 : 0;
    }
    DeviceNode = (unsigned __int16 *)*((_QWORD *)DeviceNode + 2);
    if ( v32 || DeviceNode == IopRootDeviceNode )
      goto LABEL_67;
  }
  v32 = 2;
  if ( DeviceRegProperty >= 0 )
    goto LABEL_67;
  if ( DeviceRegProperty == -1073741275 )
    return -1073741772;
  v17 = DeviceRegProperty == -1073741810;
LABEL_13:
  if ( v17 )
    return -1073741772;
  return DeviceRegProperty;
}
