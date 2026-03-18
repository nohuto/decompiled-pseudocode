/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x140956D90
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x14042361C (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x140424454 (McTemplateK0jzt_EtwWriteTransfer.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PiCMReturnBufferResultData @ 0x1408C7B70 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140956F94 (PiCMCaptureInterfaceListInputData.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  void *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  int v14; // edi
  const WCHAR *v15; // r15
  NTSTATUS inited; // ecx
  int v17; // eax
  __int64 v19; // r9
  int DeviceInterfaces; // eax
  unsigned int v21; // [rsp+50h] [rbp-59h] BYREF
  void *v22; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v23; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  __int128 v25; // [rsp+78h] [rbp-31h] BYREF
  PCWSTR SourceString[2]; // [rsp+88h] [rbp-21h]
  __int64 v27; // [rsp+98h] [rbp-11h]

  v23 = a6;
  v27 = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v9 = 0;
  v22 = 0LL;
  DestinationString = 0LL;
  v21 = 0;
  v25 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v12 = PiCMCaptureInterfaceListInputData(a1, a2, a5, &v25);
  if ( v12 < 0 )
    goto LABEL_13;
  v14 = DWORD1(v25);
  v15 = SourceString[1];
  if ( (byte_140EEFA6B & 4) != 0 )
    McTemplateK0jzt_EtwWriteTransfer(v11, v10, v13, (__int64)&v25 + 8, SourceString[1], BYTE6(v25) & 1);
  if ( !a3 || a4 < 0x14 || (v14 & 0xFFFE0000) != 0 || (_WORD)v14 )
  {
    inited = -1073741811;
    goto LABEL_10;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v15);
  if ( inited < 0 )
    goto LABEL_10;
  LOBYTE(v19) = 1;
  DeviceInterfaces = IopGetDeviceInterfaces(
                       (char *)&v25 + 8,
                       (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0),
                       (v14 & 0x10000) == 0,
                       v19,
                       &v22,
                       &v21);
  v9 = v21;
  inited = DeviceInterfaces;
  v8 = v22;
  if ( a4 - 20 < v21 )
  {
    inited = -1073741789;
    goto LABEL_10;
  }
  if ( DeviceInterfaces < 0 )
  {
LABEL_10:
    v17 = PiCMReturnBufferResultData(inited, v9, 0, 0LL, 0, SHIDWORD(v27), a3, a4, v23);
    goto LABEL_11;
  }
  v17 = PiCMReturnBufferResultData(DeviceInterfaces, v21, 0, v22, v21, SHIDWORD(v27), a3, a4, v23);
LABEL_11:
  v12 = v17;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_13:
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[1]);
  if ( (byte_140EEFA6B & 4) != 0 )
    McTemplateK0d_EtwWriteTransfer(v11, (__int64)KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v13, v12);
  return (unsigned int)v12;
}
