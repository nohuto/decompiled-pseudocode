/*
 * XREFs of StringCbLengthW @ 0x1404478B0
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x140959760 (PfVerifyScenarioBuffer.c)
 *     sub_140AB32DC @ 0x140AB32DC (sub_140AB32DC.c)
 *     sub_140AB8F9C @ 0x140AB8F9C (sub_140AB8F9C.c)
 *     sub_140AB9580 @ 0x140AB9580 (sub_140AB9580.c)
 *     sub_140ABB360 @ 0x140ABB360 (sub_140ABB360.c)
 *     sub_140ABC324 @ 0x140ABC324 (sub_140ABC324.c)
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
