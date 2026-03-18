/*
 * XREFs of ?GetProperty@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180276C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::GetProperty(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 1 )
    return 2147942487LL;
  *a3 = *(_DWORD *)(a1 + 80);
  a3[18] = 18;
  return result;
}
