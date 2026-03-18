/*
 * XREFs of StringCbLengthW @ 0x140452800
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x140970F50 (PfVerifyScenarioBuffer.c)
 *     sub_140AB8E18 @ 0x140AB8E18 (sub_140AB8E18.c)
 *     sub_140ABDF2C @ 0x140ABDF2C (sub_140ABDF2C.c)
 *     sub_140ABE510 @ 0x140ABE510 (sub_140ABE510.c)
 *     sub_140AC0280 @ 0x140AC0280 (sub_140AC0280.c)
 *     sub_140AC11C4 @ 0x140AC11C4 (sub_140AC11C4.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  __int64 v5; // rax
  size_t i; // r8
  HRESULT v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -2147024809;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
