/*
 * XREFs of Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1400472D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     TR_Disable_Internal @ 0x140010848 (TR_Disable_Internal.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044E38 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1400469D4 (XilEndpoint_FreeStreamContextArray.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_EndpointStaticStreamsEnableCompletion(__int64 a1, int a2)
{
  __int16 v4; // ax
  __int64 v5; // r14
  __int64 **v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rbx
  unsigned int i; // esi
  _OWORD v11[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v12; // [rsp+70h] [rbp-38h]

  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v11[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v11[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a1,
    v11);
  v5 = *((_QWORD *)&v11[0] + 1);
  v6 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006AE88);
  v7 = *v6;
  v8 = **v6;
  if ( a2 < 0 )
  {
    for ( i = 1; i <= *((_DWORD *)v7 + 2); ++i )
      TR_Disable_Internal(v7[13 * i - 7], 1);
    XilEndpoint_FreeStreamContextArray(v7);
    *(_QWORD *)(v8 + 136) = *(_QWORD *)(v8 + 128);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v8 + 80),
        2u,
        0xDu,
        0x70u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL),
        *(_DWORD *)(v8 + 144),
        *((_DWORD *)v7 + 2),
        a2);
    *(_DWORD *)(v5 + 4) = -2147481600;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1232))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
  }
  else
  {
    TR_Disable_Internal(*(_QWORD *)(v8 + 88), 1);
    XilEndpoint_FreeStreamContextArray(*(_QWORD **)(v8 + 128));
    ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
    *(_QWORD *)(v8 + 128) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v8 + 80),
        4u,
        0xDu,
        0x6Fu,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL),
        *(_DWORD *)(v8 + 144),
        *((_DWORD *)v7 + 2));
    *(_DWORD *)(v5 + 4) = 0;
    ESM_AddEsmEvent(v8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a1,
           (unsigned int)a2);
}
