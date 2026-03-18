/*
 * XREFs of ?CalcDeviceTransformDelta@CResampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180214970
 * Callers:
 *     <none>
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C060 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 */

__int64 __fastcall CResampleLayer::CalcDeviceTransformDelta(
        CResampleLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  unsigned int v4; // eax
  __m128i v5; // xmm2
  int v6; // eax
  __int64 v7; // r11
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-10h]

  v17 = 10496;
  v4 = -*((_DWORD *)this + 5);
  v14 = _xmm;
  v16 = *(__int128 *)&_xmm.r;
  v13 = _xmm;
  v5 = _mm_cvtsi32_si128(v4);
  v6 = *((_DWORD *)this + 4);
  v15 = _xmm;
  LOBYTE(v17) = -86;
  CMILMatrix::Translate((CMILMatrix *)&v13, (float)-v6, _mm_cvtepi32_ps(v5).m128_f32[0]);
  CMILMatrix::Scale((CMILMatrix *)&v13, 1.0 / *(float *)(v7 + 136), 1.0 / *(float *)(v7 + 140), 1.0);
  v8 = v14;
  v9 = v17;
  *(_OWORD *)a3 = v13;
  v10 = v15;
  *((_OWORD *)a3 + 1) = v8;
  v11 = v16;
  *((_OWORD *)a3 + 2) = v10;
  *((_OWORD *)a3 + 3) = v11;
  *((_DWORD *)a3 + 16) = v9;
  return 0LL;
}
