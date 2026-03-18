/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x140267394
 * Callers:
 *     PointerInfoCopyOutHelperInternal @ 0x140240000 (PointerInfoCopyOutHelperInternal.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x14002622C (GetScreenRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140026674 (GetCurrentThreadCompositedDpi.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1400266E0 (VirtualizeMultiMonDigitizerSize.c)
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14002699C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __m128i v5; // xmm7
  __int64 UserSessionState; // rax
  INT v7; // r14d
  __int64 v8; // r10
  __m128i v9; // xmm6
  int v10; // r15d
  INT v11; // r12d
  INT v12; // eax
  INT v13; // ebx
  int v14; // edi
  INT v15; // esi
  INT v16; // eax
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  unsigned int CurrentThreadCompositedDpiContext; // eax
  unsigned __int16 v19; // ax
  __int32 v20; // ebx
  INT v21; // edi
  unsigned __int64 v22; // rsi
  INT v23; // r14d
  INT v24; // r15d
  INT v25; // r12d
  INT v26; // edi
  INT v27; // ebx
  INT v28; // eax
  INT v29; // ecx
  INT v30; // eax
  INT v31; // ecx
  __int64 result; // rax
  INT v33; // [rsp+28h] [rbp-49h]
  INT v34; // [rsp+2Ch] [rbp-45h]
  INT v35; // [rsp+30h] [rbp-41h]
  INT b[4]; // [rsp+38h] [rbp-39h] BYREF
  __m128i v37; // [rsp+48h] [rbp-29h] BYREF
  __m128i v38; // [rsp+58h] [rbp-19h] BYREF
  INT c; // [rsp+D8h] [rbp+67h]
  INT ca; // [rsp+D8h] [rbp+67h]

  v5 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_QWORD *)(UserSessionState + 57008);
  v9 = *(__m128i *)(*(_QWORD *)v8 + 24LL);
  v10 = _mm_cvtsi128_si32(v9);
  v11 = *(_DWORD *)(*(_QWORD *)v8 + 32LL) - v10;
  v12 = EngMulDiv(_mm_cvtsi128_si32(v5) - v10, v7, v11);
  v13 = *(_DWORD *)(a1 + 12);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v14;
  v33 = v12;
  v34 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v5, 4)) - v14, v13, v15);
  v35 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) - v10, v7, v11);
  v16 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v5, 12)) - v14, v13, v15);
  *(_OWORD *)b = *(_OWORD *)a1;
  c = v16;
  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  VirtualizeMultiMonDigitizerSize((__int64)b, CurrentThreadCompositedDpi);
  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorRectForDpi(&v37, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  v19 = GetCurrentThreadCompositedDpi();
  GetScreenRectForDpi(&v38, v19);
  v20 = v38.m128i_i32[0];
  v21 = v38.m128i_i32[2] - v38.m128i_i32[0];
  v22 = HIDWORD(v38.m128i_i64[0]);
  v23 = v38.m128i_i32[3] - v38.m128i_i32[1];
  v24 = EngMulDiv(v37.m128i_i32[0] - v38.m128i_i32[0], b[2], v38.m128i_i32[2] - v38.m128i_i32[0]);
  v25 = EngMulDiv(v37.m128i_i32[1] - v22, b[3], v23);
  v26 = EngMulDiv(v37.m128i_i32[2] - v20, b[2], v21) - v24;
  ca = c - v34;
  v27 = EngMulDiv(v37.m128i_i32[3] - v22, b[3], v23) - v25;
  v28 = EngMulDiv(*a3 - v33, v26, v35 - v33);
  v29 = a3[1] - v34;
  *a3 = v24 + v28;
  a3[1] = v25 + EngMulDiv(v29, v27, ca);
  v30 = EngMulDiv(*a4 - v33, v26, v35 - v33);
  v31 = a4[1] - v34;
  *a4 = v24 + v30;
  result = (unsigned int)(v25 + EngMulDiv(v31, v27, ca));
  a4[1] = result;
  return result;
}
