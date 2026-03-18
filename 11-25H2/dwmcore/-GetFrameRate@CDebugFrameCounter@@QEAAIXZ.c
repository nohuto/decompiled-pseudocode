/*
 * XREFs of ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x180269A70
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___ @ 0x1800C59E8 (CDebugFrameCounter--RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___.c)
 * Callees:
 *     ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x180269A3C (-GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDebugFrameCounter::GetFrameRate(CDebugFrameCounter *this, __int64 a2, double a3)
{
  int FrameCountInternal; // eax
  __int64 v4; // r10
  __m128i v5; // xmm1
  unsigned int v6; // r9d
  __int64 v7; // rcx
  unsigned int v8; // r11d
  int v9; // ebx
  float v10; // xmm0_4
  __int64 v11; // rax
  unsigned int v12; // edx
  __m128i v13; // xmm1
  float v15; // [rsp+30h] [rbp+8h]
  float v16; // [rsp+30h] [rbp+8h]

  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  v5 = 0LL;
  v6 = *(_DWORD *)(v4 + 4144);
  v7 = *(_QWORD *)(v4 + 4136);
  v8 = *(_DWORD *)(v4 + 4148) - v6;
  v9 = FrameCountInternal;
  if ( v6 > *(_DWORD *)(v4 + 4148) )
    v8 += 60;
  if ( v7 < 0 )
  {
    v11 = *(_QWORD *)(v4 + 4136) & 1LL | (*(_QWORD *)(v4 + 4136) >> 1);
    v10 = (float)(int)v11 + (float)(int)v11;
  }
  else
  {
    v10 = (float)(int)v7;
  }
  *(float *)v5.m128i_i32 = (float)(int)g_qpcFrequency.LowPart / v10;
  if ( (_mm_cvtsi128_si32(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v5.m128i_i32 - *(float *)v5.m128i_i32;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v12 = (int)*(float *)v5.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
  }
  else
  {
    v15 = *(float *)v5.m128i_i32 + 6291456.25;
    v12 = (int)(LODWORD(v15) << 10) >> 11;
  }
  if ( v8 )
  {
    v13 = 0LL;
    *(float *)v13.m128i_i32 = (float)(int)(v9 * v12) / (float)(int)(v8 + v9);
    if ( (_mm_cvtsi128_si32(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)v13.m128i_i32 - *(float *)v13.m128i_i32;
      return (unsigned int)((int)*(float *)v13.m128i_i32
                          - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5))));
    }
    else
    {
      v16 = *(float *)v13.m128i_i32 + 6291456.25;
      return (unsigned int)((int)(LODWORD(v16) << 10) >> 11);
    }
  }
  return v12;
}
