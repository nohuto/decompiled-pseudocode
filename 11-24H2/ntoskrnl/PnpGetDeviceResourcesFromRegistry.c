/*
 * XREFs of PnpGetDeviceResourcesFromRegistry @ 0x1409792B8
 * Callers:
 *     IopQueryDeviceResources @ 0x140978EDC (IopQueryDeviceResources.c)
 *     IopPnPDispatch @ 0x140A55010 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpReadDeviceConfiguration @ 0x1406F78F4 (PnpReadDeviceConfiguration.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceResourcesFromRegistry(__int64 a1, int a2, char a3, void **a4, _DWORD *a5)
{
  _DWORD *v5; // r12
  int RegistryValue; // ebx
  __int64 v10; // rdx
  __int64 result; // rax
  HANDLE v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int DeviceConfiguration; // eax
  __int64 v17; // rdx
  __int64 Pool2; // rax
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF

  v5 = a5;
  *a4 = 0LL;
  Handle = 0LL;
  *v5 = 0;
  RegistryValue = 0;
  if ( a2 )
  {
    if ( a1 )
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v10 = 0LL;
    RegistryValue = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v10 + 48),
                      20,
                      0,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL);
    if ( RegistryValue < 0 )
      return (unsigned int)RegistryValue;
    if ( (a3 & 1) != 0 || (a3 & 2) != 0 )
    {
      RegistryValue = IopGetRegistryValue(Handle);
      if ( RegistryValue >= 0 )
      {
        if ( MEMORY[4] == 10 && MEMORY[0xC] )
        {
          Pool2 = ExAllocatePool2(0x100uLL, MEMORY[0xC], 0x36706E50u);
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
    v12 = Handle;
    goto LABEL_22;
  }
  if ( (a3 & 1) != 0 )
  {
    v17 = a1 ? *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) : 0LL;
    RegistryValue = CmOpenDeviceRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v17 + 48),
                      19,
                      0,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL);
    if ( RegistryValue >= 0 )
    {
      RegistryValue = PnpReadDeviceConfiguration(Handle, 1, a4, v5);
      ZwClose(Handle);
      if ( RegistryValue >= 0 )
        return (unsigned int)RegistryValue;
    }
  }
  v12 = 0LL;
  Handle = 0LL;
  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    else
      v15 = 0LL;
    result = CmOpenDeviceRegKey(
               *(__int64 *)&PiPnpRtlCtx,
               *(_QWORD *)(v15 + 48),
               20,
               0,
               131097,
               0,
               (__int64)&Handle,
               0LL);
    if ( (int)result < 0 )
      return result;
    DeviceConfiguration = PnpReadDeviceConfiguration(Handle, 2, a4, v5);
    v12 = Handle;
    RegistryValue = DeviceConfiguration;
    if ( DeviceConfiguration >= 0 )
      goto LABEL_22;
  }
  if ( (a3 & 4) == 0 )
    goto LABEL_16;
  if ( v12 )
  {
LABEL_15:
    v14 = PnpReadDeviceConfiguration(v12, 4, a4, v5);
    v12 = Handle;
    RegistryValue = v14;
LABEL_16:
    if ( !v12 )
      return (unsigned int)RegistryValue;
LABEL_22:
    ZwClose(v12);
    return (unsigned int)RegistryValue;
  }
  if ( a1 )
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v13 = 0LL;
  result = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v13 + 48), 20, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)result >= 0 )
  {
    v12 = Handle;
    goto LABEL_15;
  }
  return result;
}
