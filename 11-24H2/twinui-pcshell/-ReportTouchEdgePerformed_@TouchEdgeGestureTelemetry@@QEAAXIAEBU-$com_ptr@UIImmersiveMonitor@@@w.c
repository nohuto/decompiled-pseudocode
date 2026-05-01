/*
 * XREFs of ?ReportTouchEdgePerformed_@TouchEdgeGestureTelemetry@@QEAAXIAEBU?$com_ptr@UIImmersiveMonitor@@@winrt@@@Z @ 0x18059409C
 * Callers:
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x1805930D8 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 * Callees:
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18004EB7C (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D1850 (-Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TouchEdgeGestureTelemetry::ReportTouchEdgePerformed_(__int64 a1, int a2, _QWORD *a3)
{
  bool v5; // si
  __int64 v6; // r9
  const struct _tlgProvider_t *v7; // rax
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  __int64 v11; // r10
  char v12; // al
  int v14; // [rsp+20h] [rbp-C8h]
  char v15; // [rsp+30h] [rbp-B8h] BYREF
  char v16; // [rsp+31h] [rbp-B7h] BYREF
  bool v17; // [rsp+32h] [rbp-B6h] BYREF
  int v18; // [rsp+34h] [rbp-B4h] BYREF
  int v19; // [rsp+38h] [rbp-B0h] BYREF
  int v20; // [rsp+3Ch] [rbp-ACh] BYREF
  int v21; // [rsp+40h] [rbp-A8h] BYREF
  int v22; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v23; // [rsp+48h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+50h] [rbp-98h] BYREF
  int *v25; // [rsp+70h] [rbp-78h]
  __int64 v26; // [rsp+78h] [rbp-70h]
  bool *v27; // [rsp+80h] [rbp-68h]
  __int64 v28; // [rsp+88h] [rbp-60h]
  char *v29; // [rsp+90h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp-50h]
  int *v31; // [rsp+A0h] [rbp-48h]
  __int64 v32; // [rsp+A8h] [rbp-40h]
  int *v33; // [rsp+B0h] [rbp-38h]
  __int64 v34; // [rsp+B8h] [rbp-30h]
  __int64 *v35; // [rsp+C0h] [rbp-28h]
  __int64 v36; // [rsp+C8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  try
  {
    v5 = (unsigned int)Mirror_IsThreadRTL() != 0;
    v15 = 0;
    v16 = 0;
    LODWORD(v7) = wil::wnf_query_nothrow<bool>((__int64)&WNF_TMCN_ISTABLETPOSTURE, &v15, &v16, v6);
    if ( (int)v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB7,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        (const char *)(unsigned int)v7,
        v14);
    v19 = 0;
    if ( *a3 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a3 + 24LL))(*a3, &v19);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBB,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
          (const char *)(unsigned int)v9,
          v14);
      v18 = 0;
      v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a3 + 80LL))(*a3, &v18);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBD,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
          (const char *)(unsigned int)v10,
          v14);
      v7 = TouchGestureLogging::Provider((__int64)retaddr);
      if ( *(_DWORD *)v7 > 5u )
      {
        LOBYTE(v7) = tlgKeywordOn((__int64)v7, 0x400000000000LL);
        if ( (_BYTE)v7 )
        {
          v23 = 0x2000000LL;
          v20 = v18;
          v21 = v19;
          if ( !v15 || (v12 = 1, !v16) )
            v12 = 0;
          v15 = v12;
          v17 = v5;
          v22 = a2;
          v35 = &v23;
          v36 = 8LL;
          v33 = &v20;
          v34 = 4LL;
          v31 = &v21;
          v32 = 4LL;
          v29 = &v15;
          v30 = 1LL;
          v27 = &v17;
          v28 = 1LL;
          v25 = &v22;
          v26 = 4LL;
          LOBYTE(v7) = tlgWriteTransfer_EventWriteTransfer(v11, byte_1808125AE, 0LL, 0LL, 8u, &v24);
        }
      }
    }
  }
  catch ( ... )
  {
    LOBYTE(v7) = wil::details::in1diag3::Log_CaughtException(
                   retaddr,
                   (void *)0xC8,
                   (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
                   v8);
  }
  return (char)v7;
}
