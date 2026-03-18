/*
 * XREFs of ?TrimCornerRect@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1802849C0
 * Callers:
 *     ?CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18027AC94 (-CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CheckOccludedAndOptimize@@YA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV1@@Z @ 0x1802367B0 (-CheckOccludedAndOptimize@@YA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 */

char __fastcall CArrayBasedCoverageSet::TrimCornerRect(__int64 a1, struct D2D_RECT_F *a2, int a3)
{
  unsigned int v3; // esi
  int v4; // edi
  __int64 i; // rbx
  __int64 v8; // rdx
  const struct D2D_RECT_F *v9; // rcx
  struct D2D_RECT_F v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v4 = 0;
  v11 = *a2;
  if ( !v3 )
    return 0;
  for ( i = 0LL; ; i += 48LL )
  {
    if ( *(_DWORD *)(i + *(_QWORD *)a1 + 16) == a3 || IsEmpty((const struct D2D_RECT_F *)(i + *(_QWORD *)a1)) )
      goto LABEL_16;
    if ( *(_DWORD *)(v8 + 16) >= a3 )
      break;
    if ( !*(_QWORD *)(v8 + 24) )
      goto LABEL_15;
LABEL_16:
    if ( ++v4 >= v3 )
      return 0;
  }
  if ( IsEmpty(v9)
    || IsEmpty(&v11)
    || *(float *)(v8 + 8) <= v11.left
    || v11.right <= *(float *)v8
    || *(float *)(v8 + 12) <= v11.top
    || v11.bottom <= *(float *)(v8 + 4) )
  {
    goto LABEL_16;
  }
  if ( *(_QWORD *)(v8 + 24) )
    return 0;
LABEL_15:
  if ( !CheckOccludedAndOptimize(&v11.left, (float *)v8) )
    goto LABEL_16;
  return 1;
}
