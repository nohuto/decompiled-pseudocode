/*
 * XREFs of ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1401CEFCC
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402D71F8 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x140012B90 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

const struct DXGK_GAMMA_RAMP *__fastcall DXGGLOBAL::GetDefaultColorSpaceTransform(
        DXGGLOBAL *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  signed int v4; // edi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 v10; // rdx
  __m128i v11; // xmm0

  v4 = 0;
  if ( !*((_QWORD *)this + 38139) )
  {
    v6 = operator new(0x30uLL, 0x4B677844u, 256LL, a4);
    if ( !v6 )
    {
LABEL_5:
      *((_QWORD *)this + 38139) = 0LL;
      return (const struct DXGK_GAMMA_RAMP *)*((_QWORD *)this + 38139);
    }
    *(_WORD *)(v6 + 40) = 0;
    *(_QWORD *)v6 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v6 + 16) = 1;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *((_QWORD *)this + 38139) = v6;
    v7 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v6, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
    if ( v7 < 0 )
    {
      v8 = v7;
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 7247;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to initialize the 3X4 type of gamma ramp (Status = 0x%I64x).",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
      ReferenceCounted::Release(*((ReferenceCounted **)this + 38139));
      goto LABEL_5;
    }
    memset(*(void **)(*((_QWORD *)this + 38139) + 32LL), 0, 0xC034uLL);
    **(_DWORD **)(*((_QWORD *)this + 38139) + 32LL) = 1065353216;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38139) + 32LL) + 20LL) = 1065353216;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38139) + 32LL) + 40LL) = 1065353216;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38139) + 32LL) + 48LL) = 1065353216;
    v10 = 0LL;
    do
    {
      v10 += 12LL;
      v11 = _mm_cvtsi32_si128(v4++);
      *(float *)v11.m128i_i32 = _mm_cvtepi32_ps(v11).m128_f32[0] / 4095.0;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38139) + 32LL) + v10 + 40) = v11.m128i_i32[0];
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38139) + 32LL) + v10 + 44) = v11.m128i_i32[0];
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38139) + 32LL) + v10 + 48) = v11.m128i_i32[0];
    }
    while ( v4 < 4096 );
  }
  return (const struct DXGK_GAMMA_RAMP *)*((_QWORD *)this + 38139);
}
