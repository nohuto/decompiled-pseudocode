/*
 * XREFs of ?GetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180276EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::GetProperty(
        __int64 a1,
        int a2,
        _DWORD *a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // xmm0_4

  result = 0LL;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return 2147942487LL;
    v5 = *(_DWORD *)(a1 + 164);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 160);
  }
  *a3 = v5;
  a3[18] = 18;
  return result;
}
