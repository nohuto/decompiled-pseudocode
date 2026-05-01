/*
 * XREFs of ??1Completer@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ @ 0x18048561C
 * Callers:
 *     ?get@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAAPEAVTouchKeyboardTelemetry@@P6AXXZ@Z @ 0x180488390 (-get@-$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAAPEAVTouchKeyboardTelemetry@@P6AXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@P6AXXZ@Z @ 0x18048843C (-get@-$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOL __fastcall wil::details::static_lazy<TouchKeyboardTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  union _RTL_RUN_ONCE v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3.Ptr = *(PVOID *)(wil::details::static_lazy<TouchKeyboardTraceLogging>::get(
                          a1,
                          _lambda_1ac898bd3d40bc28a50fe4f0aa1b56f0_::_lambda_invoker_cdecl_)
                      + 8);
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = v3.Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
