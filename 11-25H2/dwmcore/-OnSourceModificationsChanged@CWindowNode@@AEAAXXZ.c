/*
 * XREFs of ?OnSourceModificationsChanged@CWindowNode@@AEAAXXZ @ 0x180130A48
 * Callers:
 *     ?SetSourceModifications@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUDCOMPOSITION_WINDOWNODE_SOURCEMODIFICATIONS@@@Z @ 0x180130A24 (-SetSourceModifications@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJUDCOMPOSITION_WIN.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x180130BF4 (-SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z.c)
 */

void __fastcall CWindowNode::OnSourceModificationsChanged(CWindowNode *this)
{
  const struct CColorKey *v1; // rsi
  unsigned __int64 v2; // rdi
  unsigned __int64 *v4; // rax
  __int64 v5; // r8
  unsigned __int32 v6; // xmm1_4
  int v7; // [rsp+40h] [rbp-18h]

  v1 = (CWindowNode *)((char *)this + 840);
  v2 = 0LL;
  if ( (*((_DWORD *)this + 191) & 2) != 0 )
  {
    v5 = *(_QWORD *)((char *)this + 764);
    v6 = _mm_srli_si128(*(__m128i *)((char *)this + 764), 8).m128i_u32[0];
    *((float *)this + 213) = (float)HIBYTE(HIDWORD(v5)) / 255.0;
    *(float *)v1 = GammaLUT_sRGB_to_scRGB[BYTE4(v5)] / 255.0;
    *((float *)this + 211) = GammaLUT_sRGB_to_scRGB[BYTE5(v5)] / 255.0;
    *((float *)this + 212) = GammaLUT_sRGB_to_scRGB[BYTE6(v5)] / 255.0;
    *((float *)this + 217) = (float)HIBYTE(v6) / 255.0;
    *((float *)this + 214) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)v6] / 255.0;
    *((float *)this + 215) = GammaLUT_sRGB_to_scRGB[BYTE1(v6)] / 255.0;
    *((float *)this + 216) = GammaLUT_sRGB_to_scRGB[BYTE2(v6)] / 255.0;
    if ( (v5 & 4) != 0 )
      *((_BYTE *)this + 872) = 1;
  }
  else
  {
    *(_OWORD *)v1 = _xmm;
    LOBYTE(v7) = 0;
    *(_OWORD *)((char *)this + 856) = 0LL;
    *((_DWORD *)this + 218) = v7;
  }
  if ( CPtrArray<CVisual>::GetCount((_QWORD *)this + 103) )
  {
    do
    {
      v4 = __A__CPtrArray___CBX__QEBAPEBX_K_Z((__int64 *)this + 103, v2);
      CGdiSpriteBitmap::SetColorKey((CGdiSpriteBitmap *)v4, (*((_DWORD *)this + 191) & 2) != 0, v1);
      ++v2;
    }
    while ( v2 < CPtrArray<CVisual>::GetCount((_QWORD *)this + 103) );
  }
  CVisual::PropagateFlags((__int64)this, 4u);
}
