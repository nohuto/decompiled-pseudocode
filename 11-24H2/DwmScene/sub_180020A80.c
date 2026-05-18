/*
 * XREFs of sub_180020A80 @ 0x180020A80
 * Callers:
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180020A34 @ 0x180020A34 (sub_180020A34.c)
 *     sub_180020A58 @ 0x180020A58 (sub_180020A58.c)
 */

__int64 __fastcall sub_180020A80(__int64 a1)
{
  REGHANDLE v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  if ( _InterlockedExchangeAdd64(&qword_1801C4480, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v2 = qword_1801B91E0;
    qword_1801B91E0 = 0LL;
    CallbackContext = 0;
    EventUnregister(v2);
  }
  sub_180020A58((_QWORD *)(a1 + 112));
  sub_180011B5C(a1 + 80);
  sub_180011B5C(a1 + 48);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    sub_18001060C(v3);
  sub_180020A34((void **)(a1 + 24));
  sub_180020A34((void **)(a1 + 16));
  return sub_180020A34((void **)(a1 + 8));
}
