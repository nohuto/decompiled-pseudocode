/*
 * XREFs of Endpoint_EndpointStaticStreamsDisableCompletion @ 0x140047380
 * Callers:
 *     <none>
 * Callees:
 *     TR_Disable_Internal @ 0x140004708 (TR_Disable_Internal.c)
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044934 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x140046CE4 (XilEndpoint_FreeStreamContextArray.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_EndpointStaticStreamsDisableCompletion(__int64 a1, int a2)
{
  __int16 v4; // ax
  __int64 v5; // r15
  __int64 **v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rbx
  unsigned int i; // esi
  int v10; // eax
  _QWORD *v11; // rcx
  _OWORD v13[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v14; // [rsp+70h] [rbp-38h]

  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v13[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v13[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a1,
    v13);
  v5 = *((_QWORD *)&v13[0] + 1);
  v6 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006AE88);
  v7 = *v6;
  v8 = **v6;
  if ( a2 < 0 )
  {
    v11 = *(_QWORD **)(v8 + 136);
    *(_QWORD *)(v8 + 144) = v7;
    XilEndpoint_FreeStreamContextArray(v11);
    ExFreePoolWithTag(*(PVOID *)(v8 + 136), 0x49434858u);
    *(_QWORD *)(v8 + 136) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v8 + 80),
        2u,
        0xDu,
        0x77u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 143LL),
        *(_DWORD *)(v8 + 152),
        *((_DWORD *)v7 + 2),
        a2);
    v10 = -2147481600;
  }
  else
  {
    for ( i = 1; i <= *((_DWORD *)v7 + 2); ++i )
      TR_Disable_Internal(v7[13 * i - 7], 1);
    XilEndpoint_FreeStreamContextArray(v7);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1232))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v8 + 80),
        4u,
        0xDu,
        0x76u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 143LL),
        *(_DWORD *)(v8 + 152),
        *((_DWORD *)v7 + 2));
    v10 = 0;
  }
  *(_DWORD *)(v5 + 4) = v10;
  if ( a2 >= 0 )
    ESM_AddEsmEvent(v8);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a1,
           (unsigned int)a2);
}
