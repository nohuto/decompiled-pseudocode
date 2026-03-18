/*
 * XREFs of ?IsEqual@PlaneInfo@CBetterCheckMPOCache@@QEBA_NAEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1802BA6B4
 * Callers:
 *     ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802B8D4C (-CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800279C0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBetterCheckMPOCache::PlaneInfo::IsEqual(
        CBetterCheckMPOCache::PlaneInfo *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2)
{
  int v4; // edx
  __m128i v5; // xmm0
  int v6; // edx
  int v7; // ecx
  __int64 v8; // r11
  __int64 v9; // rcx
  __m128i v11; // [rsp+20h] [rbp-10h] BYREF

  if ( !*((_DWORD *)this + 2) )
    return 0;
  if ( !*((_DWORD *)this + 3) )
    return 0;
  if ( *(_DWORD *)this != *(_DWORD *)a2 )
    return 0;
  if ( *((_DWORD *)this + 1) != *((_DWORD *)a2 + 4) )
    return 0;
  if ( *((_DWORD *)this + 6) != *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 7) )
    return 0;
  if ( *((_DWORD *)this + 7) != *((_DWORD *)a2 + 10) - *((_DWORD *)a2 + 8) )
    return 0;
  v4 = *((_DWORD *)a2 + 11);
  if ( *((_DWORD *)this + 8) != *((_DWORD *)a2 + 13) - v4 )
    return 0;
  if ( *((_DWORD *)this + 9) != *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12) )
    return 0;
  v6 = -v4;
  v7 = -*((_DWORD *)a2 + 12);
  v11 = *(__m128i *)((char *)a2 + 60);
  v5 = v11;
  v11.m128i_i32[1] += v7;
  v11.m128i_i32[2] += v6;
  v11.m128i_i32[3] += v7;
  v11.m128i_i32[0] = v6 + _mm_cvtsi128_si32(v5);
  if ( !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEquivalentTo((_DWORD *)this + 10, &v11) )
    return 0;
  if ( *((_DWORD *)this + 14) == *(_DWORD *)(v8 + 76)
    && *((_DWORD *)this + 15) == *(_DWORD *)(v8 + 24)
    && *((_DWORD *)this + 16) == *(_DWORD *)(v8 + 80)
    && *((_DWORD *)this + 17) == *(_DWORD *)(v8 + 100)
    && *((_DWORD *)this + 18) == *(_DWORD *)(v8 + 128)
    && (v9 = *(_QWORD *)(v8 + 8),
        v11 = 0uLL,
        (*(int (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v9 + 32LL))(v9, &v11) >= 0)
    && *(_OWORD *)&v11 == *(_OWORD *)((char *)this + 8) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
