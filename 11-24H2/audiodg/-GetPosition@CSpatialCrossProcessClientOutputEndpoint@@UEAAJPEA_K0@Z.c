/*
 * XREFs of ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140090140
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x1400390F8 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140085720 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetPosition(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  signed __int64 v4; // r10
  signed __int64 v8; // rsi
  int v9; // r12d
  unsigned int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rax
  double LowPart; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm1_8
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rsi
  double v19; // xmm1_8
  unsigned __int64 v20; // rax
  double v21; // xmm1_8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  double v24; // xmm0_8
  double v25; // xmm0_8
  double v26; // xmm1_8
  char v27; // al
  float v28; // xmm0_4
  __int64 v29; // rdx
  float v30; // xmm1_4
  float v31; // xmm2_4
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  int v36; // [rsp+68h] [rbp-69h] BYREF
  int v37; // [rsp+6Ch] [rbp-65h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-59h] BYREF
  signed __int64 v40; // [rsp+80h] [rbp-51h] BYREF
  __int128 v41; // [rsp+88h] [rbp-49h] BYREF
  __int128 v42; // [rsp+98h] [rbp-39h]
  __int64 v43; // [rsp+A8h] [rbp-29h]
  __int128 v44; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-11h]
  __int64 v46; // [rsp+D0h] [rbp-1h]

  v4 = 0LL;
  PerformanceCount.QuadPart = 0LL;
  LOBYTE(v8) = 0;
  v46 = 0LL;
  v9 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v45 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( !*((_BYTE *)this - 1240) )
  {
    v10 = -2005139437;
LABEL_63:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetPosition", 488, v10, a4);
    return v10;
  }
  if ( !a2 )
  {
    v10 = -2147467261;
    goto LABEL_41;
  }
  if ( a3 )
    *a3 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 4) + 64LL), 0, 0) & 0xFFFFFF81) != 1 )
  {
    v10 = -2005139387;
    goto LABEL_41;
  }
  v11 = (*(__int64 (__fastcall **)(char *, __int128 *, __int128 *, unsigned __int64 *, signed __int64 *))(*((_QWORD *)this - 167) + 96LL))(
          (char *)this - 1336,
          &v44,
          &v41,
          &v39,
          &v40);
  v4 = 0LL;
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_41;
  v36 = 0;
  if ( !CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
          (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 1336),
          (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v36)
    || (v36 & 4) == 0 )
  {
    goto LABEL_39;
  }
  v37 = v4;
  if ( !CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
          (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 1336),
          (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v37)
    || (v37 & 8) == 0 )
  {
    v12 = v40;
    goto LABEL_40;
  }
  if ( HIDWORD(v43) == (_DWORD)v4 )
  {
    v12 = *((_QWORD *)this - 150);
    v10 = -2005139375;
LABEL_40:
    *a2 = v12;
    goto LABEL_41;
  }
  if ( (unsigned __int64)v41 < (_QWORD)v45 + (_QWORD)v44 )
  {
LABEL_39:
    v12 = v39;
    goto LABEL_40;
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart < 0 )
    LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
            + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
  else
    LowPart = (double)(int)PerformanceCount.LowPart;
  v14 = LowPart * 10000000.0;
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    v15 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
  else
    v15 = (double)(int)g_u64QPCFrequency;
  v4 = 0LL;
  v16 = (unsigned int)(int)(v14 / v15);
  if ( a3 )
    *a3 = v16;
  if ( v16 >= *((__int64 *)&v42 + 1) )
    v9 = v16 - DWORD2(v42);
  v17 = *((_DWORD *)this - 258);
  v18 = v41 + (unsigned int)(int)((double)v9 * *(float *)&v43 / 10000000.0 + 0.5) - (_QWORD)v45 - v44;
  if ( (float)v17 != *(float *)&v43 )
  {
    v19 = (double)v17;
    v20 = 0LL;
    v21 = v19 * (double)(int)v18 / *(float *)&v43 + 0.5;
    if ( v21 >= 9.223372036854776e18 )
    {
      v21 = v21 - 9.223372036854776e18;
      if ( v21 < 9.223372036854776e18 )
        v20 = 0x8000000000000000uLL;
    }
    v18 = v20 + (unsigned int)(int)v21;
  }
  v8 = v39 + v18;
  v22 = v40;
  if ( v8 < v40 )
    v22 = v8;
  *a2 = v22;
  v23 = *((_QWORD *)this - 150);
  if ( v22 < v23 )
  {
    if ( (byte_1400C4541 & 4) != 0 )
    {
      McTemplateU0pqxxxxffff_EventWriteTransfer(v22, v23, (__int64)this - 1336, 8, v22, v23, v23 - v22, 0, 0, 0, 0, 0);
      v4 = 0LL;
    }
    v12 = *((_QWORD *)this - 150);
    goto LABEL_40;
  }
LABEL_41:
  if ( a3 && *a3 == v4 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart < 0 )
      v24 = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
          + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
    else
      v24 = (double)(int)PerformanceCount.LowPart;
    v25 = v24 * 10000000.0;
    if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
      v26 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
          + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
    else
      v26 = (double)(int)g_u64QPCFrequency;
    v4 = 0LL;
    *a3 = (unsigned int)(int)(v25 / v26);
  }
  v27 = byte_1400C4541;
  if ( (byte_1400C4541 & 4) != 0 )
  {
    v28 = (float)*((int *)this - 258);
    LODWORD(v32) = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 4) + 32LL), v4, 0LL);
    v29 = *((unsigned __int16 *)this - 512);
    v30 = (float)(v32 * v29);
    LOBYTE(v32) = v4;
    if ( a3 )
      v32 = *a3;
    if ( a2 )
      v33 = *a2 * v29;
    else
      v33 = v4;
    v31 = (float)(int)(v40 * *((unsigned __int16 *)this - 512));
    McTemplateU0pqxxxxffff_EventWriteTransfer(
      v39 * *((unsigned __int16 *)this - 512),
      v33,
      (__int64)this - 1336,
      6,
      v33,
      v32,
      v8 * *((_BYTE *)this - 1024),
      v39 * *((_WORD *)this - 512),
      SLOBYTE(v31),
      SLOBYTE(v30),
      v43,
      SLOBYTE(v28));
    v27 = byte_1400C4541;
  }
  if ( a2 )
  {
    v34 = *((_QWORD *)this - 150);
    if ( *a2 < v34 && (v27 & 4) != 0 )
      McTemplateU0pqxxxxffff_EventWriteTransfer(
        *a2,
        v34,
        (__int64)this - 1336,
        8,
        *a2,
        v34,
        *((_WORD *)this - 512),
        0,
        0,
        0,
        0,
        0);
    *((_QWORD *)this - 150) = *a2;
    *a2 *= *((unsigned __int16 *)this - 512);
  }
  if ( (v10 & 0x80000000) != 0 )
    goto LABEL_63;
  return v10;
}
