/*
 * XREFs of ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800D5B30
 * Callers:
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x1800D59B4 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18001985C (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_AddRectInstruction(
        CProjectionBorderVisual *this,
        const struct tagRECT *a2,
        const struct _D3DCOLORVALUE *a3)
{
  __m128i v3; // xmm0
  __m128i v5; // xmm1
  __m128i v7; // xmm0
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  CBaseObject *v11; // rdi
  unsigned int v12; // ebx
  CBaseObject *v13; // rdx
  __int128 v14; // xmm1
  int v15; // eax
  CBaseObject *v17; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+38h] [rbp-20h]

  v3 = _mm_cvtsi32_si128(a2->left);
  v5 = _mm_cvtsi32_si128(a2->right);
  v17 = 0LL;
  LODWORD(v18) = _mm_cvtepi32_ps(v3).m128_u32[0];
  v7 = _mm_cvtsi32_si128(a2->top);
  DWORD2(v18) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)v5.m128i_i32 = (float)a2->bottom;
  DWORD1(v18) = _mm_cvtepi32_ps(v7).m128_u32[0];
  HIDWORD(v18) = v5.m128i_i32[0];
  v8 = CSolidRectangleInstruction::Create(&v17);
  v11 = v17;
  v12 = v8;
  if ( v8 >= 0 )
  {
    v13 = v17;
    v14 = *(_OWORD *)&a3->r;
    *((_OWORD *)v17 + 2) = v18;
    *((_OWORD *)v11 + 1) = v14;
    v15 = CRenderDataVisual::AddInstruction(this, v13, v9, v10);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x3Bu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x38u);
  }
  if ( v11 )
    CBaseObject::Release(v11);
  return v12;
}
