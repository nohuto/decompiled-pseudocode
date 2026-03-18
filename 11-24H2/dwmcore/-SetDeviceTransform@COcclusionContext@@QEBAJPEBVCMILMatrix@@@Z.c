/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x1800D11F0
 * Callers:
 *     ?UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z @ 0x18006FBE4 (-UpdateDeviceTransform@COcclusionContext@@QEBAJAEBVCMILMatrix@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800F7980 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800FACC0 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x18014BC20 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  char v2; // r9
  const struct CMILMatrix *v3; // rbp
  char v5; // al
  char v6; // al
  unsigned int i; // r14d
  __int64 v8; // rbx
  _DWORD *v9; // rdx
  float v10; // xmm8_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  CMILMatrix *v15; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v16; // r8
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  bool v21; // al
  char v22; // r9
  char *v23; // rcx
  __int128 v24; // xmm0
  int v25; // eax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  int v28; // eax
  __int128 v29; // xmm1
  __int128 v30; // [rsp+30h] [rbp-98h] BYREF
  __int128 v31; // [rsp+40h] [rbp-88h]
  __int128 v32; // [rsp+50h] [rbp-78h]
  __int128 v33; // [rsp+60h] [rbp-68h]
  int v34; // [rsp+70h] [rbp-58h]

  v2 = 0;
  v3 = a2;
  if ( !a2 || CMILMatrix::IsIdentity<0>((__int64)a2) )
  {
    if ( *((_BYTE *)this + 1564) != v2 )
    {
      *((_BYTE *)this + 1564) = v2;
      v2 = 1;
    }
    *((_QWORD *)this + 204) = 1065353216LL;
    v3 = 0LL;
    *(_QWORD *)((char *)this + 1572) = 1065353216LL;
    *(_QWORD *)((char *)this + 1580) = 0LL;
    *((_DWORD *)this + 397) = 0;
    *((_QWORD *)this + 199) = 1065353216LL;
    *((_QWORD *)this + 200) = 0LL;
    *((_DWORD *)this + 402) = 0;
    *(_QWORD *)((char *)this + 1612) = 1065353216LL;
    *(_QWORD *)((char *)this + 1620) = 0LL;
    *((_DWORD *)this + 407) = 0;
    v5 = *((_BYTE *)this + 1637);
    *((_BYTE *)this + 1636) = -86;
    *((_BYTE *)this + 1637) = v5 & 0xC0 | 0x29;
    *(_QWORD *)((char *)this + 1700) = 1065353216LL;
    *((_QWORD *)this + 205) = 1065353216LL;
    *((_QWORD *)this + 206) = 0LL;
    *((_DWORD *)this + 414) = 0;
    *(_QWORD *)((char *)this + 1660) = 1065353216LL;
    *(_QWORD *)((char *)this + 1668) = 0LL;
    *((_DWORD *)this + 419) = 0;
    *((_QWORD *)this + 210) = 1065353216LL;
    *((_QWORD *)this + 211) = 0LL;
    *((_DWORD *)this + 424) = 0;
    v6 = *((_BYTE *)this + 1705);
    *((_BYTE *)this + 1704) = -86;
    *((_BYTE *)this + 1705) = v6 & 0xC0 | 0x29;
  }
  else
  {
    if ( !CMILMatrix::Is2DAxisAlignedPreserving(v15) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0x67u, 0LL);
      return 2291662987LL;
    }
    v17 = *(_OWORD *)v3;
    v18 = *((_OWORD *)v3 + 1);
    v34 = *((_DWORD *)v3 + 16);
    v30 = v17;
    v19 = *((_OWORD *)v3 + 2);
    v31 = v18;
    v20 = *((_OWORD *)v3 + 3);
    v32 = v19;
    v33 = v20;
    v21 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)&v30,
            (const struct Windows::Foundation::Numerics::float4x4 *)&v30,
            v16);
    LOWORD(v34) = v34 & 0xC003;
    if ( !v21 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304441, 0x62u, 0LL);
      return 2291662855LL;
    }
    v23 = (char *)this + 1572;
    if ( *((_BYTE *)this + 1564) == v22 || (unsigned __int8)CMILMatrix::operator!=(v23, v3) )
      v2 = 1;
    *(_OWORD *)v23 = *(_OWORD *)v3;
    *((_OWORD *)v23 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)v23 + 2) = *((_OWORD *)v3 + 2);
    v24 = v30;
    *((_OWORD *)v23 + 3) = *((_OWORD *)v3 + 3);
    v25 = *((_DWORD *)v3 + 16);
    v26 = v31;
    *(_OWORD *)((char *)this + 1640) = v24;
    *((_DWORD *)v23 + 16) = v25;
    v27 = v32;
    v28 = v34;
    *(_OWORD *)((char *)this + 1656) = v26;
    *((_BYTE *)this + 1564) = 1;
    v29 = v33;
    *(_OWORD *)((char *)this + 1672) = v27;
    *(_OWORD *)((char *)this + 1688) = v29;
    *((_DWORD *)this + 426) = v28;
  }
  if ( !v2 )
    return 0LL;
  for ( i = 0; i < *((_DWORD *)this + 160); *(float *)(v8 + 12) = v10 )
  {
    v8 = *((_QWORD *)this + 77) + 48LL * i;
    v9 = (_DWORD *)(v8 + 32);
    if ( v3 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>(v3, v9, *((_QWORD *)this + 77) + 48LL * i);
      v10 = *(float *)(v8 + 12);
    }
    else
    {
      v10 = *(float *)(v8 + 44);
      *(_DWORD *)v8 = *v9;
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(v8 + 36);
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 40);
    }
    v11 = *(float *)v8;
    if ( COERCE_FLOAT(*(_DWORD *)v8 & _xmm) < 8388608.0 )
      v11 = (float)(int)ceilf_0(*(float *)v8);
    *(float *)v8 = v11;
    v12 = *(float *)(v8 + 4);
    if ( COERCE_FLOAT(LODWORD(v12) & _xmm) < 8388608.0 )
      v12 = (float)(int)ceilf_0(*(float *)(v8 + 4));
    *(float *)(v8 + 4) = v12;
    v13 = *(float *)(v8 + 8);
    if ( COERCE_FLOAT(LODWORD(v13) & _xmm) < 8388608.0 )
      v13 = (float)(int)floorf_0(*(float *)(v8 + 8));
    *(float *)(v8 + 8) = v13;
    if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 8388608.0 )
      v10 = (float)(int)floorf_0(v10);
    ++i;
  }
  return 0LL;
}
