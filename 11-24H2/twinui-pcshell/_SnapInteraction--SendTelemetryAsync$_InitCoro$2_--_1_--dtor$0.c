/*
 * XREFs of _SnapInteraction::SendTelemetryAsync$_InitCoro$2_::_1_::dtor$0 @ 0x1806F6F02
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SnapInteraction::SendTelemetryAsync__InitCoro_2_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 80) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 32LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 80);
    operator delete(*(void **)(a2 + 40), *(const struct std::nothrow_t **)(a2 + 32));
  }
}
