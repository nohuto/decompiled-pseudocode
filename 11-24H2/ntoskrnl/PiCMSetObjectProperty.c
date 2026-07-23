/*
 * XREFs of PiCMSetObjectProperty @ 0x1409EFF1C
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140482278 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1408BCA94 (PiCMReturnBasicResultData.c)
 *     PiCMCapturePropertyInputData @ 0x1408C2BE0 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1409F0260 (PiCMReleasePropertyInputData.c)
 */

__int64 __fastcall PiCMSetObjectProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // esi
  const WCHAR *v14; // r14
  const wchar_t *v15; // r13
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // ebx
  int v21; // ebx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // [rsp+50h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v37[4]; // [rsp+70h] [rbp-59h] BYREF
  int v38; // [rsp+74h] [rbp-55h]
  int v39; // [rsp+78h] [rbp-51h]
  PCWSTR SourceString; // [rsp+80h] [rbp-49h]
  __int64 v41; // [rsp+8Ch] [rbp-3Dh] BYREF
  __int64 v42; // [rsp+94h] [rbp-35h]
  int v43; // [rsp+9Ch] [rbp-2Dh]
  int v44; // [rsp+A0h] [rbp-29h]
  const wchar_t *v45; // [rsp+A8h] [rbp-21h]
  unsigned int v46; // [rsp+B0h] [rbp-19h]
  int v47; // [rsp+B4h] [rbp-15h]

  memset_0(v37, 0, 0x48uLL);
  *a6 = 0;
  v10 = PiCMCapturePropertyInputData(a1, a2, a5, (__int64)v37);
  if ( v10 >= 0 )
  {
    v11 = 5;
    v12 = v39;
    v13 = v44;
    v14 = SourceString;
    v15 = v45;
    v35 = v46;
    if ( v43 == 14 )
    {
      v29 = v41 - *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1;
      if ( v41 == *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1 )
        v29 = v42 - *(_QWORD *)DEVPKEY_Device_FriendlyName.fmtid.Data4;
      if ( !v29 )
        goto LABEL_33;
    }
    if ( v43 == 3 )
    {
      v31 = v41 - *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1;
      if ( v41 == *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1 )
        v31 = v42 - *(_QWORD *)DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data4;
      if ( !v31 )
        goto LABEL_33;
    }
    if ( v43 == 4 )
    {
      v23 = v41 - DEVPKEY_DriverPackage_SourceMediaPath;
      if ( v41 == DEVPKEY_DriverPackage_SourceMediaPath )
        v23 = v42 + 0x4524B8338B5D1E6CLL;
      if ( !v23 )
        goto LABEL_33;
    }
    if ( v43 == 2 )
    {
      v32 = v41 - DEVPKEY_WIA_DeviceType;
      if ( v41 == DEVPKEY_WIA_DeviceType )
        v32 = v42 - 0x2F09E22B0008C7BELL;
      if ( !v32 )
        goto LABEL_33;
      v34 = v41 - DEVPKEY_Printer_PortName;
      if ( v41 == DEVPKEY_Printer_PortName )
        v34 = v42 + 0x7366DA9BBBD83958LL;
      if ( !v34 )
        goto LABEL_33;
    }
    if ( v43 != 5 )
      goto LABEL_7;
    v24 = v41 - DEVPKEY_IPPFaxOut_PortName;
    if ( v41 == DEVPKEY_IPPFaxOut_PortName )
      v24 = v42 - 0x64E5A1DCBF39E6BDLL;
    if ( v24 )
LABEL_7:
      v16 = 0;
    else
LABEL_33:
      v16 = 1;
    if ( !PiAuDoesClientHaveAccess(v16 != 0 ? 64 : 2) )
    {
      v19 = -1073741790;
      goto LABEL_23;
    }
    if ( v14 && !v38 && a3 && a4 >= 8 )
    {
      if ( v12 <= 6 )
      {
        if ( v12 == 6 )
        {
          v11 = 6;
        }
        else
        {
          v17 = v12 - 1;
          if ( !v17 )
          {
            v11 = 1;
            goto LABEL_17;
          }
          v25 = v17 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( !v27 )
              {
                v11 = 3;
                goto LABEL_17;
              }
              if ( v27 != 1 )
                goto LABEL_22;
            }
            else
            {
              v11 = 4;
            }
          }
          else
          {
            v11 = 2;
          }
        }
LABEL_17:
        v18 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v14, v11, 0LL, 0LL, (__int64)&v41, v13, v15, v35, 0);
        v19 = v18;
        if ( v18 == -1073741790 )
        {
          if ( v43 == 38 )
          {
            v33 = v41 - *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1;
            if ( v41 == *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1 )
              v33 = v42 - *(_QWORD *)DEVPKEY_Device_BaseContainerId.fmtid.Data4;
            if ( !v33 )
              v19 = -1073741264;
          }
        }
        else if ( v18 >= 0 && v11 == 1 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, v14) >= 0 )
            PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
        }
        goto LABEL_23;
      }
      v21 = v12 - 65537;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v28 = v22 - 1;
          if ( v28 )
          {
            v30 = v28 - 1;
            if ( v30 )
            {
              if ( v30 != 1 )
                goto LABEL_22;
              v11 = 11;
            }
            else
            {
              v11 = 10;
            }
          }
          else
          {
            v11 = 9;
          }
        }
        else
        {
          v11 = 8;
        }
      }
      else
      {
        v11 = 7;
      }
      if ( PiDrvDbCtx )
        goto LABEL_17;
    }
LABEL_22:
    v19 = -1073741811;
LABEL_23:
    v10 = PiCMReturnBasicResultData(v19, v47, a3, a4, a6);
  }
  PiCMReleasePropertyInputData(v37);
  return (unsigned int)v10;
}
