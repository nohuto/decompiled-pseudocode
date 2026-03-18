/*
 * XREFs of _lambda_771c0aaec53f6674fc2d137116610048_::operator() @ 0x140221E8C
 * Callers:
 *     _lambda_771c0aaec53f6674fc2d137116610048_::_lambda_invoker_cdecl_ @ 0x140221E70 (_lambda_771c0aaec53f6674fc2d137116610048_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1400F6BF4 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_771c0aaec53f6674fc2d137116610048_::operator()(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v6; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  if ( (((*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0xC0) + 0x80) & 0xBF) == 0
    && IsWindowActivateable(*(const struct tagWND **)(a2 + 120)) )
  {
    *(_QWORD *)&v6 = *(_QWORD *)(a2 + 120);
    *((_QWORD *)&v6 + 1) = 2LL;
    *a3 = v6;
  }
  return *(_QWORD *)a3 != 0LL;
}
