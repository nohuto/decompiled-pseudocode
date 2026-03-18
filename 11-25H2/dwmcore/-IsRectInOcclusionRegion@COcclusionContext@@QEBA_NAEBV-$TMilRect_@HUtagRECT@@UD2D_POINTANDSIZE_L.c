/*
 * XREFs of ?IsRectInOcclusionRegion@COcclusionContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801DC1E0
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800815F4 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     <none>
 */

char __fastcall COcclusionContext::IsRectInOcclusionRegion(__int64 a1, int *a2)
{
  char v2; // r8
  __int64 v3; // rax
  int *v4; // rcx
  int v5; // esi
  int v6; // r10d
  int v7; // ebx
  int v8; // edi
  int *i; // rcx
  int v10; // r9d
  int *j; // rdx
  int v12; // eax

  v2 = 0;
  v3 = 0LL;
  if ( g_pComposition )
    v3 = *((_QWORD *)g_pComposition + 111);
  if ( *(_QWORD *)(a1 + 24) != v3 )
    return 0;
  v4 = *(int **)(a1 + 528);
  if ( *v4 )
  {
    v5 = *a2;
    if ( *a2 >= v4[1] )
    {
      v6 = a2[2];
      if ( v6 <= v4[2] )
      {
        v7 = a2[1];
        if ( v7 >= v4[3] )
        {
          v8 = a2[3];
          if ( v8 <= v4[2 * *v4 + 1] )
          {
            for ( i = v4 + 5; v8 > *(i - 2); i += 2 )
            {
              if ( v7 < *i )
              {
                v10 = v5;
                for ( j = (int *)((char *)i + *(i - 1) - 8); j < (int *)((char *)i + i[1]) && *j <= v10; j += 2 )
                {
                  v12 = j[1];
                  if ( v12 <= v10 )
                    v12 = v10;
                  v10 = v12;
                }
                if ( v10 < v6 )
                  return v2;
              }
            }
            return 1;
          }
        }
      }
    }
  }
  return v2;
}
