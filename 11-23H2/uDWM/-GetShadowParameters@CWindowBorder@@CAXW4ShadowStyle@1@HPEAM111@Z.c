/*
 * XREFs of ?GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z @ 0x180035900
 * Callers:
 *     ?GetShadowMargins@CWindowBorder@@QEAA?AU_MARGINS@@XZ @ 0x18003CE60 (-GetShadowMargins@CWindowBorder@@QEAA-AU_MARGINS@@XZ.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180043FC4 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowBorder::GetShadowParameters(int a1, int a2, float *a3, float *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 result; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  float v11; // xmm1_4

  result = 0LL;
  *a3 = 0.0;
  *a4 = 0.0;
  *a5 = 0;
  *a6 = 0;
  v7 = a1 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            *a3 = 64.0;
            result = 1052602532LL;
            *a4 = 21.333334;
            *a5 = 1052602532;
            *a6 = 1052602532;
          }
        }
        else
        {
          *a3 = 64.0;
          *a4 = 21.333334;
          *a5 = 1044549468;
          *a6 = 1041865114;
        }
      }
      else
      {
        *a3 = 64.0;
        *a4 = 42.666668;
        *a5 = 1057971241;
        *a6 = 1057803469;
      }
    }
    else
    {
      *a3 = 64.0;
      *a4 = 42.666668;
      *a5 = 1049582633;
      *a6 = 1046562734;
    }
  }
  else
  {
    *a3 = 16.0;
    *a5 = 1041194025;
  }
  v11 = (float)a2 / 96.0;
  *a3 = v11 * *a3;
  *a4 = v11 * *a4;
  return result;
}
