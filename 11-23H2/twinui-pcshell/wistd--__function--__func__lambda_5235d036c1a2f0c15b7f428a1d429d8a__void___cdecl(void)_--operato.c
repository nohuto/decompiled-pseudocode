/*
 * XREFs of wistd::__function::__func__lambda_5235d036c1a2f0c15b7f428a1d429d8a__void___cdecl(void)_::operator() @ 0x180505460
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1800A3298 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 */

char __fastcall wistd::__function::__func__lambda_5235d036c1a2f0c15b7f428a1d429d8a__void___cdecl_void__::operator()(
        DisableSearchPolicy *a1,
        __int64 a2)
{
  char IsSearchDisabled; // al
  __int64 v4; // rcx
  char result; // al
  char v6; // t0

  IsSearchDisabled = DisableSearchPolicy::IsSearchDisabled(a1, a2);
  v4 = *((_QWORD *)a1 + 1);
  v6 = IsSearchDisabled;
  result = *(_BYTE *)(v4 + 1049);
  *(_BYTE *)(v4 + 1049) = v6;
  return result;
}
