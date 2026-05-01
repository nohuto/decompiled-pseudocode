/*
 * XREFs of _lambda_83af7046a684dcf21ae9fea69b28a5d1_::operator() @ 0x18064CC18
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18064D870 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$IsGamingOverlayFullscreenMode@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x18064C6CC (--$IsGamingOverlayFullscreenMode@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 */

bool __fastcall lambda_83af7046a684dcf21ae9fea69b28a5d1_::operator()(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( v2 )
  {
    v8 = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 440LL))(v2, &v8);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF8,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
        (const char *)(unsigned int)v3,
        v5);
    v1 = v8 == 2;
    v7 = v8 == 2;
    TouchEdgeGestureTelemetry::IsGamingOverlayFullscreenMode<bool &>((char *)&v7);
  }
  return v1;
}
