/*
 * XREFs of ?GetProperty@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180276CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTranslateTransform3DGeneratedT<CTranslateTransform3D,CTransform3D>::GetProperty(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // xmm0_4

  result = 0LL;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 2147942487LL;
      v6 = a1[42];
    }
    else
    {
      v6 = a1[41];
    }
  }
  else
  {
    v6 = a1[40];
  }
  *a3 = v6;
  a3[18] = 18;
  return result;
}
