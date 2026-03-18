/*
 * XREFs of ?GetStats@CDDisplayRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1801D5980
 * Callers:
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180103700 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 * Callees:
 *     ?Update@CTargetStats@@IEAAX_K@Z @ 0x180105FB0 (-Update@CTargetStats@@IEAAX_K@Z.c)
 */

char __fastcall CDDisplayRenderTarget::GetStats(
        CDDisplayRenderTarget *this,
        LARGE_INTEGER a2,
        struct tagCOMPOSITION_TARGET_STATS_2 *a3)
{
  char *v3; // rsi
  LARGE_INTEGER v5; // rbp
  __int64 v6; // rdi
  CGlobalComposition *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r8d
  LARGE_INTEGER v11; // rcx
  unsigned __int64 v12; // r15
  DWORD LowPart; // r10d
  unsigned int v14; // r9d
  __int64 v15; // r13
  unsigned __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int64 v18; // rcx
  __int64 v19; // r15
  DWORD v20; // r13d
  unsigned __int64 v21; // rbp
  unsigned int v23; // [rsp+60h] [rbp+8h]
  LARGE_INTEGER v24; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp+20h] BYREF

  v3 = (char *)this + 32984;
  v5 = a2;
  CTargetStats::Update((CDDisplayRenderTarget *)((char *)this + 32984), a2);
  v6 = 0LL;
  v7 = g_pComposition;
  *(_DWORD *)a3 = *((_DWORD *)v3 + 63);
  v8 = 0LL;
  if ( v7 )
    v8 = *((_QWORD *)v7 + 111);
  if ( *((_QWORD *)v3 + 33) == v8 )
    v9 = *((_QWORD *)v3 + 32);
  else
    v9 = 0LL;
  *((_QWORD *)a3 + 1) = v9;
  *((_QWORD *)a3 + 2) = *((_QWORD *)v3 + 17);
  if ( *((_QWORD *)v3 + 16) )
  {
    v10 = *((_DWORD *)v3 + 63);
    v11 = v5;
    v12 = *((_QWORD *)v3 + 19);
    LowPart = *((_DWORD *)v3 + 46);
    v14 = v10 + *((_DWORD *)v3 + 40);
    v15 = *((_QWORD *)v3 + 21);
    v16 = *((_QWORD *)v3 + 22);
    v24.LowPart = LowPart;
    v17 = *((_QWORD *)v3 + 18) + v12 * v10;
    v23 = v14;
    PerformanceCount = v5;
    if ( !v5.QuadPart )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v10 = *((_DWORD *)v3 + 63);
      v11 = PerformanceCount;
      v14 = v23;
      LowPart = v24.LowPart;
    }
    if ( v17 + v12 < v11.QuadPart )
    {
      v18 = v11.QuadPart - v17;
      v17 += v18 / v12 * v12;
      v23 = v18 / v12 + v14;
    }
    v24 = v5;
    v19 = v15 + v16 * (v10 / *((_DWORD *)v3 + 30));
    v20 = v10 / *((_DWORD *)v3 + 30) + LowPart;
    if ( !v5.QuadPart )
    {
      QueryPerformanceCounter(&v24);
      v5 = v24;
    }
    if ( v19 + v16 < v5.QuadPart )
    {
      v21 = v5.QuadPart - v19;
      v19 += v21 / v16 * v16;
      v20 += v21 / v16;
    }
    *((_DWORD *)a3 + 6) = *((_DWORD *)v3 + 62);
    *((_DWORD *)a3 + 7) = v23;
    *((_DWORD *)a3 + 8) = v20;
    *((_QWORD *)a3 + 5) = v17;
    *((_QWORD *)a3 + 6) = v19;
    *((_DWORD *)a3 + 14) = *((_DWORD *)v3 + 12);
    *((_DWORD *)a3 + 15) = *((_DWORD *)v3 + 13);
    *((_DWORD *)a3 + 16) = *((_DWORD *)v3 + 24);
    *((_QWORD *)a3 + 9) = *((_QWORD *)v3 + 7);
    v6 = *((_QWORD *)v3 + 13);
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
  }
  *((_QWORD *)a3 + 10) = v6;
  return 1;
}
