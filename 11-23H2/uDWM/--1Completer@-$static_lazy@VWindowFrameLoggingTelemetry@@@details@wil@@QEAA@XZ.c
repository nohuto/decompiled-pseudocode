/*
 * XREFs of ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x1800CC88C
 * Callers:
 *     ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800CC910 (-FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180010F30 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  __int64 v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3 = wil::details::static_lazy<WindowFrameLogging>::get(
           a1,
           (void (__cdecl *)())_lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = (PVOID)v3;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
