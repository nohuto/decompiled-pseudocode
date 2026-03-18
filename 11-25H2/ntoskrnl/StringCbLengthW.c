/*
 * XREFs of StringCbLengthW @ 0x1404508A4
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x140988A00 (PfVerifyScenarioBuffer.c)
 *     sub_140AB4A2C @ 0x140AB4A2C (sub_140AB4A2C.c)
 *     sub_140AB9F74 @ 0x140AB9F74 (sub_140AB9F74.c)
 *     sub_140ABA558 @ 0x140ABA558 (sub_140ABA558.c)
 *     sub_140ABBF04 @ 0x140ABBF04 (sub_140ABBF04.c)
 *     sub_140ABD3B0 @ 0x140ABD3B0 (sub_140ABD3B0.c)
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
