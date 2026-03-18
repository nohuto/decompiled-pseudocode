/*
 * XREFs of ?GetGeometryBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x180214B90
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry2DGroup::GetGeometryBounds(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 **v5; // rbp
  __int64 **i; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
    {
      v11 = 0uLL;
      v5 = *(__int64 ***)(a1 + 96);
      for ( i = *(__int64 ***)(a1 + 88); i != v5; ++i )
      {
        v7 = *i;
        if ( *i )
        {
          v8 = *v7;
          v12 = 0LL;
          (*(void (__fastcall **)(__int64 *, __int128 *))(v8 + 200))(v7, &v12);
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v11, (float *)&v12);
        }
      }
      v9 = v11;
      *(_DWORD *)(a1 + 160) &= ~1u;
      *(_OWORD *)(a1 + 144) = v9;
    }
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 144);
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
  }
  result = (*(_DWORD *)(a1 + 40) ^ (2 * (*(_DWORD *)(a1 + 40) >> 1) - 2)) & 6;
  *(_DWORD *)(a1 + 40) ^= result;
  return result;
}
