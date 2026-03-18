/*
 * XREFs of ?GetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x180281900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::GetProperty(
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
  int v9; // edx
  int v10; // xmm0_4

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
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return 2147942487LL;
              v10 = a1[46];
            }
            else
            {
              v10 = a1[45];
            }
          }
          else
          {
            v10 = a1[44];
          }
        }
        else
        {
          v10 = a1[43];
        }
      }
      else
      {
        v10 = a1[42];
      }
    }
    else
    {
      v10 = a1[41];
    }
  }
  else
  {
    v10 = a1[40];
  }
  *a3 = v10;
  a3[18] = 18;
  return result;
}
