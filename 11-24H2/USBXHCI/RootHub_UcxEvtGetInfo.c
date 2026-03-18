/*
 * XREFs of RootHub_UcxEvtGetInfo @ 0x14004A060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtGetInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int16 v5; // ax
  _WORD *v6; // rcx
  int v7; // edx
  int v8; // edx
  int v9; // r8d
  _OWORD v11[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  v4 = 0;
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v11[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v5 = -1;
  }
  else
  {
    v5 = 40;
  }
  LOWORD(v11[0]) = v5;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v11);
  v6 = (_WORD *)*((_QWORD *)&v11[0] + 1);
  v7 = **((_DWORD **)&v11[0] + 1);
  if ( **((_DWORD **)&v11[0] + 1) >= 0x10u )
  {
    *(_DWORD *)(*((_QWORD *)&v11[0] + 1) + 4LL) = 0;
    v8 = *(unsigned __int16 *)(v3 + 20);
    v6[4] = v8;
    v9 = *(unsigned __int16 *)(v3 + 22);
    v6[5] = v9;
    v6[6] = *(_WORD *)(v3 + 24);
    v6[7] = *(_WORD *)(v3 + 26);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0xC4u,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v8,
        v9);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v7,
        11,
        195,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        **((_DWORD **)&v11[0] + 1));
    }
    v4 = -1073741811;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v4);
}
