/*
 * XREFs of RootHub_UcxEvtGetHubStatus @ 0x140033AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14004B494 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtGetHubStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  unsigned int v4; // ebx
  __int16 v5; // ax
  __int64 v6; // rbp
  int v7; // eax
  _OWORD v9[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v10; // [rsp+90h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  v4 = 0;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( !WdfClientVersionHigherThanFramework )
  {
    v5 = 40;
    goto LABEL_6;
  }
  if ( (unsigned int)WdfStructureCount <= 0x33 )
  {
    v5 = -1;
LABEL_6:
    LOWORD(v9[0]) = v5;
    goto LABEL_7;
  }
  LOWORD(v9[0]) = *(_WORD *)(WdfStructures + 408);
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(WdfDriverGlobals, a2, v9);
  v6 = *((_QWORD *)&v9[0] + 1);
  if ( *(_WORD *)(*((_QWORD *)&v9[0] + 1) + 128LL) == 160
    && !*(_DWORD *)(*((_QWORD *)&v9[0] + 1) + 130LL)
    && *(_WORD *)(*((_QWORD *)&v9[0] + 1) + 134LL) == 4 )
  {
    **(_DWORD **)(*((_QWORD *)&v9[0] + 1) + 40LL) = 0;
    v7 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        *(unsigned __int8 *)(*((_QWORD *)&v9[0] + 1) + 134LL),
        *(unsigned __int8 *)(*((_QWORD *)&v9[0] + 1) + 133LL),
        107);
    v4 = -1073741823;
    v7 = -1073741820;
  }
  *(_DWORD *)(v6 + 4) = v7;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v4);
}
