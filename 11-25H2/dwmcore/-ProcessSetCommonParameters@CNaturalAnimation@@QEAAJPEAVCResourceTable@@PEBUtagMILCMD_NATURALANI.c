/*
 * XREFs of ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z @ 0x1802AA67C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x1802AAAD8 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetCommonParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS *a3)
{
  __m128 v3; // xmm2
  __m128i v5; // xmm0
  int v6; // ecx
  __m128 v7; // rt1
  float v9; // [rsp+38h] [rbp+10h]

  *((_DWORD *)this + 98) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 99) = *((_DWORD *)a3 + 3);
  v5 = (__m128i)*((unsigned int *)a3 + 2);
  *(float *)v5.m128i_i32 = *(float *)v5.m128i_i32 * 1000.0;
  if ( (_mm_cvtsi128_si32(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3.m128_f32[0] = (float)(int)*(float *)v5.m128i_i32 - *(float *)v5.m128i_i32;
    v7.m128_f32[0] = FLOAT_N0_5;
    v6 = (int)*(float *)v5.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v3, v7));
  }
  else
  {
    v9 = *(float *)v5.m128i_i32 + 6291456.25;
    v6 = (int)(LODWORD(v9) << 10) >> 11;
  }
  *((_DWORD *)this + 100) = v6;
  if ( !*((_BYTE *)a3 + 32) )
    CNaturalAnimation::SetStartTimeIfNecessary(this, *((_QWORD *)a3 + 3));
  return 0LL;
}
