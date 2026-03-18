/*
 * XREFs of Endpoint_EvaluateContextCompletion @ 0x140001B00
 * Callers:
 *     <none>
 * Callees:
 *     XilEndpoint_ReleaseBuffer @ 0x140001CBC (XilEndpoint_ReleaseBuffer.c)
 *     Etw_EndpointUpdate @ 0x140001CD8 (Etw_EndpointUpdate.c)
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dddL @ 0x14002BC30 (WPP_RECORDER_SF_dddL.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_EvaluateContextCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // rdx
  int v11; // edx

  v2 = *(_QWORD **)(a1 + 48);
  XilEndpoint_ReleaseBuffer(*v2, v2[1]);
  v5 = 0;
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *v2;
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
        v10,
        13,
        28,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(_BYTE *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
        *(_DWORD *)(*v2 + 144LL));
    }
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(a1 + 60);
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_dddL(
        *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
        v11,
        *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
        30);
    }
LABEL_9:
    v5 = -1073741823;
    goto LABEL_6;
  }
  v6 = *v2;
  *(_WORD *)(*v2 + 100LL) = *((_WORD *)v2 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *v2;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
      v7,
      13,
      29,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      *(_BYTE *)(*(_QWORD *)(*v2 + 16LL) + 135LL),
      *(_DWORD *)(*v2 + 144LL),
      *((_DWORD *)v2 + 4));
  }
  Etw_EndpointUpdate(v6, *v2);
LABEL_6:
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01033 + 1632))(WdfDriverGlobals, v2);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           v8,
           v5);
}
