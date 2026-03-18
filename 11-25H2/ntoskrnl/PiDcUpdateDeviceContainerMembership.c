/*
 * XREFs of PiDcUpdateDeviceContainerMembership @ 0x140950B3C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     wcscmp @ 0x1404FD6A0 (wcscmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PiDcResetChildDeviceContainers @ 0x14071BC50 (PiDcResetChildDeviceContainers.c)
 *     _CmRemoveDeviceFromContainer @ 0x14080A720 (_CmRemoveDeviceFromContainer.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     _CmAddDeviceToContainer @ 0x14094F2F0 (_CmAddDeviceToContainer.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140950D48 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmSetDeviceRegProp @ 0x140950F0C (_CmSetDeviceRegProp.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A9989C (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcUpdateDeviceContainerMembership(const WCHAR *a1, __int64 a2, const wchar_t *a3)
{
  int DeviceContainerIdFromBase; // ebx
  int DeviceRegProp; // eax
  __int64 v8; // rax
  _BYTE v10[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str2[40]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t v15[40]; // [rsp+B0h] [rbp-50h] BYREF
  int v16[20]; // [rsp+100h] [rbp+0h] BYREF

  v10[0] = 0;
  P[0] = 0LL;
  v12 = 0;
  v11 = 0;
  DeviceContainerIdFromBase = PiPnpRtlBeginOperation(P);
  if ( DeviceContainerIdFromBase >= 0 )
  {
    v11 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      a1,
                      a2,
                      0x25u,
                      (__int64)&v12,
                      (__int64)Str2,
                      (__int64)&v11,
                      0);
    DeviceContainerIdFromBase = DeviceRegProp;
    if ( DeviceRegProp >= 0 )
    {
      if ( wcsicmp(a3, Str2) )
      {
        DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, Str2, v15);
        if ( DeviceContainerIdFromBase < 0 )
          goto LABEL_8;
        DeviceContainerIdFromBase = CmRemoveDeviceFromContainer(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      (__int64)v15,
                                      (__int64)Str2,
                                      (__int64)a1);
        if ( DeviceContainerIdFromBase < 0 )
          goto LABEL_8;
        PiDcResetChildDeviceContainers((__int64)a1, v15);
      }
    }
    else if ( DeviceRegProp != -1073741275 )
    {
      goto LABEL_8;
    }
    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, a3, v16);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
      DeviceContainerIdFromBase = CmSetDeviceRegProp(
                                    PiPnpRtlCtx,
                                    (_DWORD)a1,
                                    a2,
                                    37,
                                    1,
                                    (__int64)a3,
                                    2 * (int)v8 + 2,
                                    0);
      if ( DeviceContainerIdFromBase >= 0 )
      {
        if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
        {
          DeviceContainerIdFromBase = CmAddDeviceToContainer(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (__int64)v16,
                                        (__int64)a3,
                                        (__int64)a1,
                                        v10);
          if ( DeviceContainerIdFromBase >= 0 && !v10[0] )
            PiDcContainerRequiresConfiguration((int)v16);
        }
      }
    }
  }
LABEL_8:
  if ( P[0] )
    PiPnpRtlEndOperation((PVOID **)P[0]);
  return (unsigned int)DeviceContainerIdFromBase;
}
