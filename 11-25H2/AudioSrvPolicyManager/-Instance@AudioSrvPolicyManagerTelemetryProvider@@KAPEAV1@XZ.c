/*
 * XREFs of ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18001691C
 * Callers:
 *     ?FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180028A20 (-FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     atexit @ 0x1800205AC (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800285A4 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

struct AudioSrvPolicyManagerTelemetryProvider *AudioSrvPolicyManagerTelemetryProvider::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper, 0, &v3, (LPVOID *)&v4)
    && v3 )
  {
    qword_180067A18 = 0LL;
    dword_180067A24 = 0;
    v4 = &qword_180067A10;
    qword_180067A10 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
    v1 = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
    byte_180067A20 = 0;
    qword_180067A28 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&v1);
  }
  return (struct AudioSrvPolicyManagerTelemetryProvider *)v4;
}
