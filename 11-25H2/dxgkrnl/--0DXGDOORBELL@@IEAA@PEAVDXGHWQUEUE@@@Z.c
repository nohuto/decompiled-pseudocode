/*
 * XREFs of ??0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z @ 0x140073048
 * Callers:
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D2C98 (-CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

DXGDOORBELL *__fastcall DXGDOORBELL::DXGDOORBELL(DXGDOORBELL *this, struct DXGHWQUEUE *a2)
{
  __m128i v3; // xmm1
  int v4; // r8d

  *((_QWORD *)this + 5) = 0LL;
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_WORD *)this + 76) = 0;
  v3 = *(__m128i *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL) + 16LL) + 3128LL)
                  + 1272LL);
  *((_QWORD *)this + 5) = HIDWORD(v3.m128i_i64[0]);
  v4 = _mm_cvtsi128_si32(v3) & 1;
  if ( v4 )
    *((_QWORD *)this + 6) = v3.m128i_u32[2];
  if ( !HIDWORD(v3.m128i_i64[0]) || v4 && !*((_QWORD *)this + 6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 326;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"_SizeInBytes > 0 && (!Caps.Flags.SecondaryDoorbellSupported || _SecondaryDoorbellSizeInBytes > 0)",
      326LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return this;
}
