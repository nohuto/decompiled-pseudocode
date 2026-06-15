/*
 * XREFs of ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x180016B3C
 * Callers:
 *     ?FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180028B30 (-FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     atexit @ 0x18002065C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180028744 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
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
    qword_180064998 = 0LL;
    dword_1800649A4 = 0;
    v4 = &qword_180064990;
    qword_180064990 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
    v1 = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
    byte_1800649A0 = 0;
    qword_1800649A8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&v1);
  }
  return (struct AudioSrvPolicyManagerTelemetryProvider *)v4;
}
