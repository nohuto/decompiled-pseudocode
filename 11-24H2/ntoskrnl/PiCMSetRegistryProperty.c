/*
 * XREFs of PiCMSetRegistryProperty @ 0x1409CD848
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140482278 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     _CmSetInstallerClassRegProp @ 0x1408198B0 (_CmSetInstallerClassRegProp.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1408BCA94 (PiCMReturnBasicResultData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C3160 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1409CDA20 (PiCMConvertRegistryProperty.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1409CDC98 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1409CDD3C (PiPnpRtlSetDeviceRegProperty.c)
 */

__int64 __fastcall PiCMSetRegistryProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  int v9; // ebx
  int v10; // ebx
  int v11; // edi
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  __int128 v14; // [rsp+58h] [rbp-9h] BYREF
  PCWSTR SourceString[2]; // [rsp+68h] [rbp+7h]
  __int128 v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+27h]

  v6 = a6;
  LODWORD(a6) = 0;
  v17 = 0LL;
  *v6 = 0;
  v14 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v16 = 0LL;
  v9 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, (__int64)&v14);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(HIDWORD(SourceString[1]) == 13 ? 64 : 2) )
    {
      if ( !SourceString[0] || DWORD1(v14) || !a3 || a4 < 8 )
        goto LABEL_20;
      v10 = PiCMConvertRegistryProperty(HIDWORD(SourceString[1]), &a6);
      if ( v10 >= 0 )
      {
        if ( DWORD2(v14) == 1 )
        {
          v11 = PiPnpRtlSetDeviceRegProperty(
                  *(_QWORD *)&PiPnpRtlCtx,
                  SourceString[0],
                  0LL,
                  (unsigned int)a6,
                  v16,
                  *((_QWORD *)&v16 + 1),
                  v17,
                  0);
          v10 = v11;
          if ( v11 >= 0 )
          {
            DestinationString = 0LL;
            if ( RtlInitUnicodeStringEx(&DestinationString, SourceString[0]) >= 0 )
            {
              PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
              goto LABEL_12;
            }
          }
LABEL_10:
          if ( v11 == -1073741790 )
            v10 = -1073741264;
          else
            v10 = v11;
          goto LABEL_12;
        }
        if ( DWORD2(v14) == 2 )
        {
          v11 = CmSetInstallerClassRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)SourceString[0],
                  0LL,
                  (int)a6,
                  v16,
                  *((__int64 *)&v16 + 1),
                  v17);
          goto LABEL_10;
        }
LABEL_20:
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
LABEL_12:
    v9 = PiCMReturnBasicResultData(v10, SHIDWORD(v17), a3, a4, v6);
  }
  PiCMReleaseRegistryPropertyInputData(&v14);
  return (unsigned int)v9;
}
