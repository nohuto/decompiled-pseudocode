/*
 * XREFs of ?GetProperty@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180276D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::GetProperty(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // xmm0_4

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
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 != 1 )
              return 2147942487LL;
            v9 = a1[45];
          }
          else
          {
            v9 = a1[44];
          }
        }
        else
        {
          v9 = a1[43];
        }
      }
      else
      {
        v9 = a1[42];
      }
    }
    else
    {
      v9 = a1[41];
    }
  }
  else
  {
    v9 = a1[40];
  }
  *a3 = v9;
  a3[18] = 18;
  return result;
}
