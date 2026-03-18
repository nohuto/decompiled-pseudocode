/*
 * XREFs of memset @ 0x1C0023880
 * Callers:
 *     UsbhCreateDevice @ 0x1C0002364 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C0002778 (UsbhInitializeDevice.c)
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     UsbhPostInterrupt @ 0x1C001F320 (UsbhPostInterrupt.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0029AD0 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C002A378 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C002A4AC (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002C09C (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubPdoName @ 0x1C002C6F0 (UsbhGetHubPdoName.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0030E68 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C0031E3C (UsbhCreateConfigurationRequestEx.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C003223C (USBD_ValidateConfigurationDescriptorInternal.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C003E100 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003F448 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F72C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F9BC (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003FE6C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040194 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00404A8 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0040798 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040A78 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhInitGlobal @ 0x1C0043978 (UsbhInitGlobal.c)
 *     UsbhMakePdoName @ 0x1C0043BAC (UsbhMakePdoName.c)
 *     UsbhLogAlloc @ 0x1C0048920 (UsbhLogAlloc.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004910C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C00493A8 (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C0049618 (UsbhGetPerformanceInfo.c)
 *     RtlStringCchPrintfExW @ 0x1C004B8F0 (RtlStringCchPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004BAC0 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C00528D0 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C0052C20 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C00553A0 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0057418 (UsbhQueryD3ColdSupport.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0059D10 (UsbhDeleteUxdSubKeys.c)
 *     UsbhUpdateUxdSettings @ 0x1C005ACF0 (UsbhUpdateUxdSettings.c)
 *     WppTraceCallback @ 0x1C0073610 (WppTraceCallback.c)
 *     memset$thunk$772440563353939046 @ 0x1C0074010 (memset$thunk$772440563353939046.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
