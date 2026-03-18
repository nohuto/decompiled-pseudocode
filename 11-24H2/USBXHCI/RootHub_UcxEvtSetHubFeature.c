/*
 * XREFs of RootHub_UcxEvtSetHubFeature @ 0x14004A5F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtSetHubFeature(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  if ( !WdfClientVersionHigherThanFramework )
  {
    v3 = 40;
    goto LABEL_6;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v3 = -1;
LABEL_6:
    LOWORD(v5[0]) = v3;
    goto LABEL_7;
  }
  LOWORD(v5[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(WdfDriverGlobals, a2, v5);
  *(_DWORD *)(*((_QWORD *)&v5[0] + 1) + 4LL) = -1073741820;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           3221225473LL);
}
