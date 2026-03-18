/*
 * XREFs of _GreGetRandomRgn_::_2_::_lambda_1_::operator() @ 0x14030D6AC
 * Callers:
 *     GreGetRandomRgn @ 0x140038FA0 (GreGetRandomRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetRandomRgn_::_2_::_lambda_1_::operator()(__int64 a1, RGNOBJAPI *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v4 = a3;
  if ( a3 )
    return RGNOBJAPI::bCopy(a2, (struct RGNOBJ *)&v4) != 0 ? 1 : -1;
  return result;
}
