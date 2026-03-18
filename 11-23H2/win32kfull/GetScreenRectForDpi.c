/*
 * XREFs of GetScreenRectForDpi @ 0x1C00AE544
 * Callers:
 *     GetScreenRect @ 0x1C008AFDC (GetScreenRect.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetScreenRectForWindow @ 0x1C01571C4 (GetScreenRectForWindow.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00AE4CC (GetMonitorRectForDpi.c)
 *     CalculateLogicalMonitorRect @ 0x1C00AF334 (CalculateLogicalMonitorRect.c)
 */

__m128i *__fastcall GetScreenRectForDpi(__m128i *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // si
  __int64 *DispInfo; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdi
  __m128i v13; // xmm0
  int v14; // ebp
  int v15; // r14d
  int v16; // r15d
  int v17; // r12d
  __int64 *MonitorRectForDpi; // rax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // xmm0_8
  unsigned __int64 v22; // rax
  __m128i v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF

  v3 = a2;
  DispInfo = (__int64 *)GetDispInfo(a1, a2, a3);
  v8 = *DispInfo;
  if ( !v3 )
  {
    v9 = *(__m128i *)(v8 + 24);
LABEL_3:
    *a1 = v9;
    return a1;
  }
  if ( *(_DWORD *)v8 == 1 )
  {
    v11 = GetDispInfo(v8, v6, v7);
    CalculateLogicalMonitorRect(
      (unsigned int)&v23,
      *(_QWORD *)(*(_QWORD *)(v11 + 96) + 40LL) + 28,
      *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 40LL) + 60LL),
      v3,
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 40LL) + 62LL));
    v9 = v23;
    goto LABEL_3;
  }
  v12 = DispInfo[13];
  v13 = 0LL;
  v23 = 0LL;
  if ( v12 )
  {
    v14 = v23.m128i_i32[3];
    v15 = v23.m128i_i32[2];
    v16 = v23.m128i_i32[1];
    v17 = v23.m128i_i32[0];
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 24LL) & 1) != 0 )
      {
        MonitorRectForDpi = GetMonitorRectForDpi(&v24, v12, v3);
        v19 = *(__m128i *)MonitorRectForDpi;
        v20 = *MonitorRectForDpi;
        v21 = _mm_srli_si128(v19, 8).m128i_u64[0];
        if ( v17 >= (int)v20 )
          v17 = v20;
        v22 = HIDWORD(v20);
        v23.m128i_i32[0] = v17;
        if ( v16 >= (int)v22 )
          v16 = v22;
        v23.m128i_i32[1] = v16;
        if ( v15 <= (int)v21 )
          v15 = v21;
        v23.m128i_i32[2] = v15;
        if ( v14 <= SHIDWORD(v21) )
          v14 = HIDWORD(v21);
        v23.m128i_i32[3] = v14;
        v13 = _mm_loadu_si128(&v23);
      }
      v12 = *(_QWORD *)(v12 + 56);
    }
    while ( v12 );
  }
  *a1 = v13;
  return a1;
}
