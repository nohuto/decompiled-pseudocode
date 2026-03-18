/*
 * XREFs of PnpGetDeviceResourcesFromRegistry @ 0x1408317BC
 * Callers:
 *     IopQueryDeviceResources @ 0x140832B48 (IopQueryDeviceResources.c)
 *     IopPnPDispatch @ 0x140A5AF70 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PnpReadDeviceConfiguration @ 0x1406EDEF0 (PnpReadDeviceConfiguration.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceResourcesFromRegistry(__int64 a1, int a2, char a3, void **a4, _DWORD *a5)
{
  _DWORD *v5; // r12
  int RegistryValue; // ebx
  __int64 result; // rax
  HANDLE v10; // rcx
  int v11; // eax
  int DeviceConfiguration; // eax
  __int64 Pool2; // rax
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF

  v5 = a5;
  *a4 = 0LL;
  Handle = 0LL;
  *v5 = 0;
  RegistryValue = 0;
  if ( a2 )
  {
    RegistryValue = CmOpenDeviceRegKey(PiPnpRtlCtx, 131097, 0, (__int64)&Handle, 0LL);
    if ( RegistryValue < 0 )
      return (unsigned int)RegistryValue;
    if ( (a3 & 1) != 0 || (a3 & 2) != 0 )
    {
      RegistryValue = IopGetRegistryValue(Handle);
      if ( RegistryValue >= 0 )
      {
        if ( MEMORY[4] == 10 && MEMORY[0xC] )
        {
          Pool2 = ExAllocatePool2(0x100uLL);
          *a4 = (void *)Pool2;
          if ( Pool2 )
          {
            *v5 = MEMORY[0xC];
            memmove(*a4, (const void *)MEMORY[8], MEMORY[0xC]);
            if ( *((_DWORD *)*a4 + 1) == -1 )
              *(_QWORD *)((char *)*a4 + 4) = 1LL;
          }
          else
          {
            RegistryValue = -1073741584;
          }
        }
        ExFreePoolWithTag(0LL, 0);
      }
    }
    v10 = Handle;
LABEL_16:
    ZwClose(v10);
    return (unsigned int)RegistryValue;
  }
  if ( (a3 & 1) != 0 )
  {
    RegistryValue = CmOpenDeviceRegKey(PiPnpRtlCtx, 131097, 0, (__int64)&Handle, 0LL);
    if ( RegistryValue >= 0 )
    {
      RegistryValue = PnpReadDeviceConfiguration(Handle, 1, a4, v5);
      ZwClose(Handle);
      if ( RegistryValue >= 0 )
        return (unsigned int)RegistryValue;
    }
  }
  v10 = 0LL;
  Handle = 0LL;
  if ( (a3 & 2) != 0 )
  {
    result = CmOpenDeviceRegKey(PiPnpRtlCtx, 131097, 0, (__int64)&Handle, 0LL);
    if ( (int)result < 0 )
      return result;
    DeviceConfiguration = PnpReadDeviceConfiguration(Handle, 2, a4, v5);
    v10 = Handle;
    RegistryValue = DeviceConfiguration;
    if ( DeviceConfiguration >= 0 )
      goto LABEL_16;
  }
  if ( (a3 & 4) == 0 )
    goto LABEL_12;
  if ( v10 )
  {
LABEL_11:
    v11 = PnpReadDeviceConfiguration(v10, 4, a4, v5);
    v10 = Handle;
    RegistryValue = v11;
LABEL_12:
    if ( !v10 )
      return (unsigned int)RegistryValue;
    goto LABEL_16;
  }
  result = CmOpenDeviceRegKey(PiPnpRtlCtx, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = Handle;
    goto LABEL_11;
  }
  return result;
}
