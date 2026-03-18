/*
 * XREFs of UsbDevice_UcxEvtHubInfo @ 0x14004EA00
 * Callers:
 *     <none>
 * Callees:
 *     Etw_DeviceUpdate @ 0x140001110 (Etw_DeviceUpdate.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_UcxEvtHubInfo(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  if ( !WdfClientVersionHigherThanFramework )
  {
    v3 = 40;
    goto LABEL_6;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v3 = -1;
LABEL_6:
    LOWORD(v7[0]) = v3;
    goto LABEL_7;
  }
  LOWORD(v7[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(WdfDriverGlobals, a2, v7);
  v4 = (_DWORD *)*((_QWORD *)&v7[0] + 1);
  v5 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*((_QWORD *)&v7[0] + 1) + 16LL),
                   off_14006B128);
  v5[35] = v4[6];
  v5[36] = v4[7];
  v5[37] = v4[8];
  Etw_DeviceUpdate(0LL, (__int64)v5);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}
