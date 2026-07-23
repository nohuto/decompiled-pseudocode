/*
 * XREFs of PipGetRegistrySecurityWithFallback @ 0x14097FB88
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14097F72C (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     RtlValidRelativeSecurityDescriptor @ 0x140833A70 (RtlValidRelativeSecurityDescriptor.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetRegistrySecurityWithFallback(__int64 a1, __int64 a2, __int64 a3, WCHAR *a4, __int64 a5)
{
  bool v8; // di
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  __int64 v11; // rsi
  int InstallerClassRegProp; // eax
  int v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF
  ULONG SecurityDescriptorLength; // [rsp+70h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0LL;
  SecurityDescriptorLength = 128;
  v8 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x80uLL, 0x6E657050u);
  if ( !Pool2 )
    return 0LL;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a2,
                    a3,
                    0x18u,
                    (__int64)&v14,
                    (__int64)Pool2,
                    (__int64)&SecurityDescriptorLength,
                    0);
  if ( DeviceRegProp == -1073741789 )
  {
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(0x100uLL, SecurityDescriptorLength, 0x6E657050u);
    if ( !Pool2 )
      return 0LL;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      a2,
                      a3,
                      0x18u,
                      (__int64)&v14,
                      (__int64)Pool2,
                      (__int64)&SecurityDescriptorLength,
                      0);
  }
  if ( DeviceRegProp >= 0
    && v14 == 3
    && RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0)
    && (int)SeCaptureSecurityDescriptor((__int64)Pool2, 0, 1, 1, &v15) >= 0 )
  {
    v8 = 1;
  }
  else
  {
    v11 = a5;
    if ( a5 )
    {
      InstallerClassRegProp = CmGetInstallerClassRegProp(
                                *(_QWORD **)&PiPnpRtlCtx,
                                a4,
                                a5,
                                24,
                                (__int64)&v14,
                                (__int64)Pool2,
                                (__int64)&SecurityDescriptorLength);
      if ( InstallerClassRegProp == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(0x100uLL, SecurityDescriptorLength, 0x6E657050u);
        if ( !Pool2 )
          return 0LL;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  *(_QWORD **)&PiPnpRtlCtx,
                                  a4,
                                  v11,
                                  24,
                                  (__int64)&v14,
                                  (__int64)Pool2,
                                  (__int64)&SecurityDescriptorLength);
      }
      if ( InstallerClassRegProp >= 0 && v14 == 3 )
      {
        if ( RtlValidRelativeSecurityDescriptor(Pool2, SecurityDescriptorLength, 0) )
          v8 = (int)SeCaptureSecurityDescriptor((__int64)Pool2, 0, 1, 1, &v15) >= 0;
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( !v8 )
    return 0LL;
  return v15;
}
