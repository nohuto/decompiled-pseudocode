/*
 * XREFs of ?GetProperty@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180276D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::GetProperty(_DWORD *a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // xmm0_4

  result = 0LL;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 2147942487LL;
        v7 = a1[43];
      }
      else
      {
        v7 = a1[42];
      }
    }
    else
    {
      v7 = a1[41];
    }
  }
  else
  {
    v7 = a1[40];
  }
  *a3 = v7;
  a3[18] = 18;
  return result;
}
