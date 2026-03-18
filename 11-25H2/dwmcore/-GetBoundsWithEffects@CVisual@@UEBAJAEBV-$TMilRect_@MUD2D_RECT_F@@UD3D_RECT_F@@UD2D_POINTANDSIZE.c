/*
 * XREFs of ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180026050
 * Callers:
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800264C0 (-GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026030 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x180026BF4 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UN.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002723C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetBoundsWithEffects(float *a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int Bounds; // edi
  _DWORD *v7; // r9
  __int64 v8; // rax
  _BYTE *v9; // rdx
  unsigned int i; // ecx
  __int64 *v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 result; // rax
  __int64 (__fastcall *v15)(); // rax
  unsigned int v16; // ebx
  float v17; // xmm2_4
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // [rsp+50h] [rbp+8h] BYREF
  float v22; // [rsp+54h] [rbp+Ch]

  Bounds = 0;
  *a3 = *a2;
  v7 = (_DWORD *)*((_QWORD *)a1 + 29);
  if ( (*v7 & 0x800000) != 0 )
  {
    v8 = (unsigned int)v7[1];
    v9 = v7 + 2;
    for ( i = 0; i < (unsigned int)v8; ++v9 )
    {
      if ( *v9 == 9 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v8 )
      v11 = 0LL;
    else
      v11 = (__int64 *)((char *)v7 + 8LL * i - (((_BYTE)v8 + 15) & 7) + v8 + 15);
    v12 = *v11;
    v13 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 224LL))(a1);
    if ( v12 )
    {
      v15 = *(__int64 (__fastcall **)())(*(_QWORD *)v12 + 64LL);
      if ( v15 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
      {
        if ( !CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(v12, 60) )
          return Bounds;
      }
      else if ( !((unsigned __int8 (__fastcall *)(__int64, __int64))v15)(v12, 60LL) )
      {
        return Bounds;
      }
      result = CFilterEffect::GetBounds(v12, a2, a3);
      v16 = result;
      if ( (int)result < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x186Au, 0LL);
        return v16;
      }
      return result;
    }
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 224LL))(a1);
  }
  if ( !v13 )
    return Bounds;
  v17 = a1[37];
  if ( a1[36] != 0.0 && v17 != 0.0 || *((_BYTE *)a1 + 696) )
  {
    v19 = *(_QWORD *)a1;
    v21 = *((_DWORD *)a1 + 36);
    v22 = v17;
    v20 = *(_QWORD *)(*(__int64 (__fastcall **)(float *))(v19 + 224))(a1);
    if ( v20 )
      Bounds = CEffectBrush::GetBounds(v20, a2, &v21, a3);
    if ( (Bounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x187Eu, 0LL);
      return Bounds;
    }
  }
  v18 = (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a3) == 0;
  result = Bounds;
  if ( !v18 )
    *a3 = *a2;
  return result;
}
