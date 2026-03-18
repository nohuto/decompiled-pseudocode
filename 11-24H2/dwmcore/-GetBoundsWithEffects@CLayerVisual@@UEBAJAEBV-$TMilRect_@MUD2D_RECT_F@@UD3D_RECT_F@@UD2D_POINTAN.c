/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A80D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180038220 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800A8CCC (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x18014EB58 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1801E25D0 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CVisual *this, _OWORD *a2, float *a3)
{
  int BoundsWithEffects; // eax
  unsigned int v6; // ebx
  CDropShadow *v7; // rcx
  CDropShadow *v9; // rcx
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64, float *, __int128 *); // rax
  int v12; // eax
  float v13[2]; // [rsp+30h] [rbp-50h] BYREF
  float v14; // [rsp+38h] [rbp-48h] BYREF
  float v15[4]; // [rsp+40h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects((float *)this, a2, a3);
  v6 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BoundsWithEffects, 0xCEu, 0LL);
    return v6;
  }
  v7 = (CDropShadow *)*((_QWORD *)this + 85);
  if ( v7 )
  {
    v16 = 0LL;
    CDropShadow::GetRadius(v7);
    *(_QWORD *)v15 = *((_QWORD *)v9 + 12);
    if ( CDropShadow::GetMaskForLayerVisualNoRef(v9) )
    {
      v13[0] = 0.0;
      v14 = 0.0;
      if ( !CVisual::GetEffectiveSize(this, v13, &v14) )
        return v6;
      v11 = *(__int64 (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v10 + 184LL);
      v13[1] = v14;
      v12 = v11(v10, v13, &v16);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xDEu, 0LL);
        return v6;
      }
    }
    else
    {
      v16 = *(_OWORD *)a3;
    }
    if ( *((float *)&v16 + 2) > *(float *)&v16 && *((float *)&v16 + 3) > *((float *)&v16 + 1) )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v16);
      *((float *)&v16 + 1) = *((float *)&v16 + 1) + v15[1];
      *(float *)&v16 = *(float *)&v16 + v15[0];
      *((float *)&v16 + 2) = *((float *)&v16 + 2) + v15[0];
      *((float *)&v16 + 3) = *((float *)&v16 + 3) + v15[1];
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)&v16);
    }
  }
  return v6;
}
