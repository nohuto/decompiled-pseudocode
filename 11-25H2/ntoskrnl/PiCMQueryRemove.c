/*
 * XREFs of PiCMQueryRemove @ 0x140AB73CC
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x1403117E0 (RtlGetActiveConsoleId.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x140423408 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404D5600 (McTemplateK0z_EtwWriteTransfer.c)
 *     PnpGetCallerSessionId @ 0x140717228 (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x14071BEA4 (PiAuCheckClientInteractive.c)
 *     PiCMReturnBufferResultData @ 0x1408C7B70 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _CmIsRootDevice @ 0x140932574 (_CmIsRootDevice.c)
 *     PiCMCaptureObjectInputData @ 0x140934730 (PiCMCaptureObjectInputData.c)
 *     _CmValidateDeviceName @ 0x14095AE80 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x14095D51C (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095EC5C (PiAuDoesClientHavePrivilege.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096B044 (PnpQueueQueryAndRemoveEvent.c)
 *     _CmGetDeviceStatus @ 0x1409A9004 (_CmGetDeviceStatus.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMQueryRemove(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  const wchar_t *v7; // rdi
  char v8; // r14
  unsigned int v9; // r15d
  _WORD *v10; // r12
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  WCHAR *v14; // r13
  unsigned int v15; // ebx
  int v16; // edi
  int DeviceRegProp; // ebx
  unsigned int v18; // eax
  unsigned int v19; // esi
  _WORD *Pool2; // rax
  int v21; // edi
  int v22; // edi
  unsigned int v23; // r8d
  unsigned int v24; // eax
  unsigned int v26; // [rsp+38h] [rbp-79h]
  char v27[4]; // [rsp+58h] [rbp-59h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-55h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-51h] BYREF
  int v30; // [rsp+64h] [rbp-4Dh] BYREF
  int v31; // [rsp+68h] [rbp-49h] BYREF
  int v32; // [rsp+6Ch] [rbp-45h] BYREF
  ULONG SessionId; // [rsp+70h] [rbp-41h] BYREF
  int v34; // [rsp+74h] [rbp-3Dh] BYREF
  int v35; // [rsp+78h] [rbp-39h] BYREF
  int v36[3]; // [rsp+7Ch] [rbp-35h] BYREF
  __int128 v37; // [rsp+88h] [rbp-29h] BYREF
  PCWSTR SourceString[2]; // [rsp+98h] [rbp-19h]
  __int64 v39; // [rsp+A8h] [rbp-9h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-1h] BYREF

  v30 = 0;
  v39 = 0LL;
  v35 = 0;
  v7 = 0LL;
  v34 = 0;
  v8 = 0;
  v32 = 0;
  v9 = 0;
  *a6 = 0;
  v10 = 0LL;
  v31 = 0;
  v36[0] = 0;
  v27[0] = 0;
  SessionId = 0;
  v28 = 0;
  v29 = 0;
  DestinationString = 0LL;
  v37 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v37);
  v14 = (WCHAR *)SourceString[0];
  v15 = v11;
  if ( v11 < 0 )
    goto LABEL_59;
  v16 = HIDWORD(SourceString[1]);
  if ( (byte_140EEFA6B & 8) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      v12,
      (__int64)KMPnPEvt_CfgMgr_QueryRemove_Start,
      v13,
      SHIDWORD(SourceString[1]),
      SourceString[0]);
  if ( !v14 || DWORD2(v37) != 1 || !a3 || a4 < 0x14 )
    goto LABEL_23;
  DeviceRegProp = CmValidateDeviceName(v12, v14);
  if ( DeviceRegProp < 0 )
    goto LABEL_43;
  if ( CmIsRootDevice(v14) )
  {
    DeviceRegProp = -1073741773;
LABEL_55:
    v24 = PiCMReturnBufferResultData(DeviceRegProp, v28, v29, 0LL, 0, v39, a3, a4, a6);
    goto LABEL_56;
  }
  v18 = a4 - 20;
  v19 = 0;
  if ( v18 >= 2 )
    v19 = v18;
  if ( v19 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v10 = Pool2;
    if ( !Pool2 )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_55;
    }
    *Pool2 = 0;
  }
  v21 = v16 - 1;
  if ( !v21 )
  {
    if ( PiAuDoesClientHaveAccess(0x20u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( (DWORD1(v37) & 0xFFFFFFFE) != 0 )
        goto LABEL_23;
      v8 = BYTE4(v37) & 1;
      goto LABEL_51;
    }
    goto LABEL_32;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v31 = 4;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v14,
                      0LL,
                      0x10u,
                      (__int64)v36,
                      (__int64)&v32,
                      (__int64)&v31,
                      0);
    if ( DeviceRegProp >= 0 )
    {
      if ( (v32 & 8) != 0 )
      {
        if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0x19u) )
          goto LABEL_32;
      }
      else
      {
        DeviceRegProp = PnpGetCallerSessionId(&SessionId);
        if ( DeviceRegProp < 0 || SessionId != RtlGetActiveConsoleId() )
        {
          DeviceRegProp = PiAuCheckClientInteractive(v27);
          if ( DeviceRegProp < 0 || !v27[0] )
          {
            if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
              goto LABEL_32;
            DeviceRegProp = 0;
          }
        }
      }
      if ( DWORD1(v37) )
        goto LABEL_23;
      v8 = 8;
    }
    v9 = v19;
    if ( DeviceRegProp < 0 )
      goto LABEL_43;
    goto LABEL_51;
  }
  if ( v22 != 1 )
  {
LABEL_23:
    DeviceRegProp = -1073741811;
    goto LABEL_55;
  }
  if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
  {
LABEL_32:
    DeviceRegProp = -1073741790;
    goto LABEL_55;
  }
  if ( DWORD1(v37) )
    goto LABEL_23;
  v8 = 2;
  if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v14, 0LL, &v30, &v35, &v34, v26) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_55;
  }
  if ( (v30 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_55;
  }
LABEL_51:
  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v14);
  v9 = v19;
  if ( DeviceRegProp >= 0 )
  {
    v28 = v19;
    DeviceRegProp = PnpQueueQueryAndRemoveEvent(&DestinationString.Length, (char *)&v29, v10, &v28, v8, 0);
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_55;
    v23 = v28;
    v9 = v19;
    if ( v10 )
      v10[((unsigned __int64)v19 >> 1) - 1] = 0;
    goto LABEL_45;
  }
LABEL_43:
  if ( DeviceRegProp != -2147483608 )
    goto LABEL_55;
  v23 = v28;
LABEL_45:
  if ( v23 > v9 )
    goto LABEL_55;
  v24 = PiCMReturnBufferResultData(-2147483608, v28, v29, v10, v23, v39, a3, a4, a6);
LABEL_56:
  v15 = v24;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
  v7 = v14;
LABEL_59:
  if ( (byte_140EEFA6B & 8) != 0 )
    McTemplateK0z_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v7);
  if ( v14 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return v15;
}
