/*
 * XREFs of sub_180020920 @ 0x180020920
 * Callers:
 *     sub_180020A60 @ 0x180020A60 (sub_180020A60.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800208D4 @ 0x1800208D4 (sub_1800208D4.c)
 *     sub_1800208F8 @ 0x1800208F8 (sub_1800208F8.c)
 */

__int64 __fastcall sub_180020920(__int64 a1)
{
  REGHANDLE v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  if ( _InterlockedExchangeAdd64(&qword_1801C3470, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v2 = qword_1801B81E0;
    qword_1801B81E0 = 0LL;
    CallbackContext = 0;
    EventUnregister(v2);
  }
  sub_1800208F8((_QWORD *)(a1 + 112));
  sub_180011A5C(a1 + 80);
  sub_180011A5C(a1 + 48);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    sub_18001050C(v3);
  sub_1800208D4((void **)(a1 + 24));
  sub_1800208D4((void **)(a1 + 16));
  return sub_1800208D4((void **)(a1 + 8));
}
