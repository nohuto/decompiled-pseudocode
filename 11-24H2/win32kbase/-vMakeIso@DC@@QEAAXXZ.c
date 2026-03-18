/*
 * XREFs of ?vMakeIso@DC@@QEAAXXZ @ 0x1400114EC
 * Callers:
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x140010910 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14003A050 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 */

void __fastcall DC::vMakeIso(DC *this)
{
  _DWORD *v2; // rcx
  int v3; // esi
  INT v4; // r8d
  _DWORD *v5; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v7; // eax
  float v8; // xmm6_4
  unsigned int v9; // eax
  unsigned int v10; // eax
  __m128i v11; // xmm0
  float v12; // xmm6_4
  int *v13; // rdx
  float v14; // xmm2_4
  __m128i v15; // xmm0
  float v16; // xmm1_4
  int v17; // r10d
  unsigned int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // r9d
  int v23; // ecx
  __m128i v24; // xmm0
  int v25; // r10d
  unsigned int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  INT v31; // edx
  unsigned int v32; // ebx

  v2 = (_DWORD *)*((_QWORD *)this + 122);
  v3 = 0;
  v4 = v2[102];
  if ( v4 )
  {
    v31 = v2[106];
    if ( !v31 || (v32 = v2[107]) == 0 )
    {
      v12 = (float)((float)(v2[103] * v2[104]) / (float)v4) / (float)(int)v2[105];
      goto LABEL_10;
    }
    v11 = _mm_cvtsi32_si128(v32);
    v8 = (float)EngMulDiv(v2[103], v31, v4);
  }
  else
  {
    v5 = (_DWORD *)*((_QWORD *)this + 6);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (v5[10] & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
      v7 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    else
      v7 = v5[541];
    v8 = (float)v7;
    v9 = W32GetCurrentThreadDpiAwarenessContext();
    if ( (v5[10] & 1) != 0 && (v9 & 0xF) - 1 > 1 )
      v10 = (v9 >> 8) & 0x1FF;
    else
      v10 = v5[540];
    v11 = _mm_cvtsi32_si128(v10);
  }
  v12 = v8 / _mm_cvtepi32_ps(v11).m128_f32[0];
LABEL_10:
  v13 = (int *)*((_QWORD *)this + 122);
  v14 = (float)v13[80];
  v15 = (__m128i)COERCE_UNSIGNED_INT((float)v13[83]);
  v16 = (float)v13[79];
  *(float *)v15.m128i_i32 = (float)((float)(*(float *)v15.m128i_i32 * v14) / v16) * v12;
  v17 = _mm_cvtsi128_si32(v15);
  v18 = (unsigned __int8)(v17 >> 23);
  if ( v18 <= 0x9E )
  {
    v19 = v17 & 0x7FFFFFLL | 0x800000;
    v20 = v18 < 0x76 ? v19 >> (118 - (unsigned __int8)v18) : v19 << ((unsigned __int8)v18 - 118);
    v21 = (v20 + 0x80000000LL) >> 32;
    v3 = -(int)v21;
    if ( v17 >= 0 )
      v3 = v21;
  }
  v22 = v13[84];
  v23 = -v3;
  if ( v3 > 0 )
    v23 = v3;
  if ( v22 <= 0 )
  {
    if ( -v22 >= v23 )
    {
      v23 = -v23;
      goto LABEL_19;
    }
  }
  else if ( v22 >= v23 )
  {
LABEL_19:
    v13[84] = v23;
    return;
  }
  v24 = (__m128i)COERCE_UNSIGNED_INT((float)v22);
  *(float *)v24.m128i_i32 = (float)((float)(*(float *)v24.m128i_i32 * v16) / v14) / v12;
  v25 = _mm_cvtsi128_si32(v24);
  v26 = (unsigned __int8)(v25 >> 23);
  if ( v26 <= 0x9E )
  {
    v27 = v25 & 0x7FFFFFLL | 0x800000;
    v28 = v26 < 0x76 ? v27 >> (118 - (unsigned __int8)v26) : v27 << ((unsigned __int8)v26 - 118);
    v29 = (v28 + 0x80000000LL) >> 32;
    v23 = -(int)v29;
    if ( v25 >= 0 )
      v23 = v29;
  }
  v30 = -v23;
  if ( v23 > 0 )
    v30 = v23;
  if ( v13[83] <= 0 )
    v30 = -v30;
  v13[83] = v30;
}
