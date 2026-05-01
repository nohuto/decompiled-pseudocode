/*
 * XREFs of ?StartTouchEdgeGestureCompleted_@TouchEdgeGestureTelemetry@@QEAAXAEBU?$com_ptr@UIImmersiveMonitor@@@winrt@@_N@Z @ 0x18058D410
 * Callers:
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18058D2A8 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D1850 (-Provider@TouchGestureLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchEdgeGestureTelemetry::StartTouchEdgeGestureCompleted_(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  const struct _tlgProvider_t *v8; // rax
  const char *v9; // r9
  int v10; // [rsp+20h] [rbp-D8h]
  char v11; // [rsp+30h] [rbp-C8h] BYREF
  int v12; // [rsp+34h] [rbp-C4h]
  int v13; // [rsp+38h] [rbp-C0h] BYREF
  int v14; // [rsp+3Ch] [rbp-BCh] BYREF
  int v15; // [rsp+40h] [rbp-B8h] BYREF
  int v16; // [rsp+44h] [rbp-B4h] BYREF
  int v17; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+50h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+60h] [rbp-98h] BYREF
  char *v20; // [rsp+80h] [rbp-78h]
  int v21; // [rsp+88h] [rbp-70h]
  int v22; // [rsp+8Ch] [rbp-6Ch]
  int *v23; // [rsp+90h] [rbp-68h]
  int v24; // [rsp+98h] [rbp-60h]
  int v25; // [rsp+9Ch] [rbp-5Ch]
  int *v26; // [rsp+A0h] [rbp-58h]
  int v27; // [rsp+A8h] [rbp-50h]
  int v28; // [rsp+ACh] [rbp-4Ch]
  int *v29; // [rsp+B0h] [rbp-48h]
  int v30; // [rsp+B8h] [rbp-40h]
  int v31; // [rsp+BCh] [rbp-3Ch]
  int *v32; // [rsp+C0h] [rbp-38h]
  int v33; // [rsp+C8h] [rbp-30h]
  int v34; // [rsp+CCh] [rbp-2Ch]
  int *v35; // [rsp+D0h] [rbp-28h]
  int v36; // [rsp+D8h] [rbp-20h]
  int v37; // [rsp+DCh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v5 = *a2;
  if ( *a2 )
  {
    v12 = 0;
    try
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x63,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
          (const char *)(unsigned int)v6,
          v10);
      v18 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v18);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x65,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
          (const char *)(unsigned int)v7,
          v10);
      v8 = TouchGestureLogging::Provider((__int64)retaddr);
      if ( *(_DWORD *)v8 > 5u )
      {
        v13 = HIDWORD(v18);
        v14 = DWORD2(v18);
        v15 = DWORD1(v18);
        v16 = v18;
        v17 = v12;
        v11 = a3;
        v35 = &v13;
        v36 = 4;
        v37 = 0;
        v32 = &v14;
        v33 = 4;
        v34 = 0;
        v29 = &v15;
        v30 = 4;
        v31 = 0;
        v26 = &v16;
        v27 = 4;
        v28 = 0;
        v23 = &v17;
        v24 = 4;
        v25 = 0;
        v20 = &v11;
        v21 = 1;
        v22 = 0;
        tlgWriteTransfer_EventWriteTransfer((__int64)v8, byte_1808122BD, 0LL, 0LL, 8u, &v19);
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        v9);
    }
  }
}
