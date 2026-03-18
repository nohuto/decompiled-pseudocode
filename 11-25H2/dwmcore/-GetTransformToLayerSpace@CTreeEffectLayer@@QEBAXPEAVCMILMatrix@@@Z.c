/*
 * XREFs of ?GetTransformToLayerSpace@CTreeEffectLayer@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801F73A4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTreeEffectLayer::GetTransformToLayerSpace(CTreeEffectLayer *this, struct CMILMatrix *a2)
{
  int v2; // xmm0_4
  __m128i v3; // xmm2
  int v4; // eax
  float v5; // xmm1_4

  v2 = *((_DWORD *)this + 70);
  v3 = _mm_cvtsi32_si128(-*((_DWORD *)this + 5));
  v4 = -*((_DWORD *)this + 4);
  *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v5 = (float)v4;
  LOBYTE(v4) = *((_BYTE *)a2 + 65) & 0xE9;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_BYTE *)a2 + 64) = -120;
  *((_BYTE *)a2 + 65) = v4 | 0x29;
  *(_DWORD *)a2 = v2;
  *((float *)a2 + 12) = v5;
  *((_DWORD *)a2 + 5) = v2;
  *((_DWORD *)a2 + 13) = _mm_cvtepi32_ps(v3).m128_u32[0];
}
