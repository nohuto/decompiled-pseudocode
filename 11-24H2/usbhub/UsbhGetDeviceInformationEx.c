/*
 * XREFs of UsbhGetDeviceInformationEx @ 0x140032310
 * Callers:
 *     UsbhGetDeviceNodeInfo @ 0x1400547A8 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x140054A44 (UsbhGetHubNodeInfo.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

_DWORD *__fastcall UsbhGetDeviceInformationEx(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v6; // edi
  _DWORD *result; // rax
  _DWORD *v8; // rbx
  _DWORD *v9; // rax
  __int64 (__fastcall *v10)(_QWORD, __int64, _DWORD *, _QWORD, _QWORD *); // r10
  int v11; // eax
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF

  LODWORD(v15[0]) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      40,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v6 = 64;
  do
  {
    result = (_DWORD *)ExAllocatePool2(256LL, v6, 1112885333LL);
    v8 = result;
    if ( !result )
    {
      *a2 = -1073741670;
      return result;
    }
    *result = 0;
    v9 = FdoExt(a1);
    v10 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _QWORD, _QWORD *))*((_QWORD *)v9 + 538);
    if ( v10 )
    {
      v11 = v10(*((_QWORD *)v9 + 529), a3, v8, v6, v15);
      v12 = v11;
      if ( (v11 & 0xC0000000) != 0xC0000000 )
        continue;
      if ( v11 == -1073741789 )
        v6 = v8[1];
    }
    else
    {
      v12 = -1073741822;
    }
    ExFreePoolWithTag(v8, 0);
    v8 = 0LL;
  }
  while ( v12 == -1073741789 );
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 2020172903;
        *(_QWORD *)(v14 + 24) = v12;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = a3;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        2,
        41,
        (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
        v12,
        v15[0]);
  }
  *a2 = v12;
  return v8;
}
