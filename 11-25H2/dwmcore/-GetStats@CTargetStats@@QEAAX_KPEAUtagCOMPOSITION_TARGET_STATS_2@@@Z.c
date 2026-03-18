/*
 * XREFs of ?GetStats@CTargetStats@@QEAAX_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x180140B30
 * Callers:
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x18013F210 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 * Callees:
 *     ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x180141630 (-UpdatePresentStats@CTargetStats@@IEAA_NXZ.c)
 */

void __fastcall CTargetStats::GetStats(DWORD *this, LARGE_INTEGER a2, struct tagCOMPOSITION_TARGET_STATS_2 *a3)
{
  LARGE_INTEGER v4; // rsi
  __int64 v6; // xmm1_8
  unsigned int v7; // ecx
  __int64 v8; // rax
  LARGE_INTEGER v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  LONGLONG v12; // rax
  CGlobalComposition *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  DWORD v16; // r8d
  LARGE_INTEGER v17; // rax
  DWORD LowPart; // r9d
  unsigned __int64 v19; // rbp
  __int64 v20; // r12
  DWORD v21; // r13d
  unsigned __int64 v22; // r14
  __int64 v23; // r15
  LONGLONG v24; // rax
  __int64 v25; // r14
  DWORD v26; // r12d
  unsigned __int64 v27; // rsi
  DWORD v28; // eax
  LARGE_INTEGER v29; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  v4 = a2;
  if ( a2.QuadPart > *((_QWORD *)this + 16) )
    CTargetStats::UpdatePresentStats((CTargetStats *)this);
  if ( *((_QWORD *)this + 16) )
  {
    v6 = *((_QWORD *)this + 20);
    v7 = this[63] + 1;
    *((_OWORD *)this + 12) = *((_OWORD *)this + 9);
    *((_QWORD *)this + 26) = v6;
    v8 = *((_QWORD *)this + 25) * v7;
    this[52] += v7;
    *((_QWORD *)this + 24) += v8;
    v9 = v4;
    v29 = v4;
    if ( !v4.QuadPart )
    {
      QueryPerformanceCounter(&v29);
      v9 = v29;
    }
    v10 = *((_QWORD *)this + 25);
    v11 = *((_QWORD *)this + 24);
    if ( v11 + v10 < v9.QuadPart )
    {
      v12 = (v9.QuadPart - v11) / v10;
      this[52] += v12;
      *((_QWORD *)this + 24) = v11 + v12 * v10;
    }
  }
  v13 = g_pComposition;
  *(_DWORD *)a3 = this[63];
  v14 = 0LL;
  if ( v13 )
    v14 = *((_QWORD *)v13 + 111);
  if ( *((_QWORD *)this + 33) == v14 )
    v15 = *((_QWORD *)this + 32);
  else
    v15 = 0LL;
  *((_QWORD *)a3 + 1) = v15;
  *((_QWORD *)a3 + 2) = *((_QWORD *)this + 17);
  if ( *((_QWORD *)this + 16) )
  {
    v16 = this[63];
    v17 = v4;
    LowPart = this[46];
    v19 = *((_QWORD *)this + 22);
    v20 = *((_QWORD *)this + 21);
    v21 = v16 + this[40];
    v22 = *((_QWORD *)this + 19);
    v29.LowPart = LowPart;
    v23 = *((_QWORD *)this + 18) + v22 * v16;
    PerformanceCount = v4;
    if ( !v4.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v16 = this[63];
      v17 = PerformanceCount;
      LowPart = v29.LowPart;
    }
    if ( v22 + v23 < v17.QuadPart )
    {
      v24 = (v17.QuadPart - v23) / v22;
      v23 += v24 * v22;
      v21 += v24;
    }
    v29 = v4;
    v25 = v20 + v19 * (v16 / this[30]);
    v26 = v16 / this[30] + LowPart;
    if ( !v4.QuadPart )
    {
      QueryPerformanceCounter(&v29);
      v4 = v29;
    }
    if ( v25 + v19 < v4.QuadPart )
    {
      v27 = v4.QuadPart - v25;
      v25 += v27 / v19 * v19;
      v26 += v27 / v19;
    }
    v28 = this[62];
    *((_DWORD *)a3 + 7) = v21;
    *((_DWORD *)a3 + 8) = v26;
    *((_QWORD *)a3 + 5) = v23;
    *((_QWORD *)a3 + 6) = v25;
    *((_DWORD *)a3 + 6) = v28;
    *((_DWORD *)a3 + 14) = this[12];
    *((_DWORD *)a3 + 15) = this[13];
    *((_DWORD *)a3 + 16) = this[24];
    *((_QWORD *)a3 + 9) = *((_QWORD *)this + 7);
    *((_QWORD *)a3 + 10) = *((_QWORD *)this + 13);
  }
  else
  {
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 8) = 0;
    *((_QWORD *)a3 + 5) = 0LL;
    *((_QWORD *)a3 + 6) = 0LL;
    *((_QWORD *)a3 + 7) = 0LL;
    *((_DWORD *)a3 + 16) = 0;
    *((_QWORD *)a3 + 9) = 0LL;
    *((_QWORD *)a3 + 10) = 0LL;
  }
}
