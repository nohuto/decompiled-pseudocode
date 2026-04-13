/*
 * XREFs of ?get@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarContentDeliveryPinningTelemetry@@P6AXXZ@Z @ 0x18003E50C
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002BA80 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 * Callees:
 *     atexit @ 0x180022620 (atexit.c)
 *     ??1Completer@?$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x18002A5E8 (--1Completer@-$static_lazy@VTaskbarContentDeliveryPinningTelemetry@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<TaskbarContentDeliveryPinningTelemetry>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8)
    && v6 )
  {
    qword_180179498 = 0LL;
    dword_1801794A4 = 0;
    v8 = &qword_180179490;
    qword_180179490 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    v4 = &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper;
    byte_1801794A0 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TaskbarContentDeliveryPinningTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
