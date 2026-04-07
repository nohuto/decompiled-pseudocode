/*
 * XREFs of ?_UpdateInstructions@CSolidRectangleVisual@@IEAAJXZ @ 0x1800D0EB4
 * Callers:
 *     ?ValidateVisual@CSolidRectangleVisual@@UEAAJXZ @ 0x1800D0E30 (-ValidateVisual@CSolidRectangleVisual@@UEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800250EC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003450C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180066354 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180066440 (-SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CSolidRectangleVisual::_UpdateInstructions(CSolidRectangleVisual *this)
{
  CBaseObject *v1; // rdi
  __m128i v2; // xmm1
  float v4; // xmm0_4
  __m128i v5; // xmm0
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct _D3DCOLORVALUE *v9; // rcx
  int v10; // eax
  int v11; // eax
  float v13[6]; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 62));
  v4 = (float)*((int *)this + 60);
  v14 = 0LL;
  v13[0] = v4;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 61));
  LODWORD(v13[2]) = _mm_cvtepi32_ps(v2).m128_u32[0];
  *(float *)v2.m128i_i32 = (float)*((int *)this + 63);
  LODWORD(v13[1]) = _mm_cvtepi32_ps(v5).m128_u32[0];
  v13[3] = *(float *)v2.m128i_i32;
  v6 = CRenderDataVisual::ClearInstructions(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3Cu, 0LL);
  }
  else
  {
    v8 = CSolidRectangleInstruction::Create(&v14);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3Du, 0LL);
      v1 = v14;
    }
    else
    {
      v1 = v14;
      CSolidRectangleInstruction::SetRect((__int64)v14, v13);
      v10 = CSolidRectangleInstruction::SetSolidFill(v9, (const struct _D3DCOLORVALUE *)this + 16);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x3Fu, 0LL);
      }
      else
      {
        v11 = CRenderDataVisual::AddInstruction(this, v1);
        v7 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x40u, 0LL);
      }
    }
  }
  if ( v1 )
    CBaseObject::Release(v1);
  return v7;
}
