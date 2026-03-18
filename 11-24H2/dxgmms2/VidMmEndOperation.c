/*
 * XREFs of VidMmEndOperation @ 0x1400F137C
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1400D5958 (GetBucketIdForAllocationSizePow2.c)
 */

void __fastcall VidMmEndOperation(__int64 a1, char a2, unsigned __int8 a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  int v5; // r12d
  LARGE_INTEGER v6; // rbx
  unsigned __int64 v7; // r13
  int v8; // r14d
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  __int64 BucketIdForAllocationSizePow2; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // r9d
  int v22; // r8d
  int v23; // edx
  unsigned __int8 v24; // r11
  __int64 v25; // r8
  int v26; // ecx
  unsigned int v27; // edx
  int v28; // ecx
  int v29; // ecx
  int v30; // [rsp+20h] [rbp-A8h]
  int v31; // [rsp+24h] [rbp-A4h]
  int v32; // [rsp+28h] [rbp-A0h]
  int v33; // [rsp+2Ch] [rbp-9Ch]
  int v34; // [rsp+30h] [rbp-98h]
  unsigned __int64 v35; // [rsp+38h] [rbp-90h]
  unsigned __int64 v36; // [rsp+40h] [rbp-88h]
  unsigned __int64 v37; // [rsp+48h] [rbp-80h]
  unsigned __int64 v38; // [rsp+50h] [rbp-78h]
  unsigned __int64 v39; // [rsp+58h] [rbp-70h]
  __int64 v40; // [rsp+60h] [rbp-68h]
  __int64 v41; // [rsp+68h] [rbp-60h] BYREF
  char v42; // [rsp+70h] [rbp-58h]
  int v46; // [rsp+E8h] [rbp+20h]

  if ( a2 && *(_QWORD *)(a1 + 248) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v5 = *(_DWORD *)(a1 + 372);
    v6 = PerformanceCounter;
    v7 = *(_QWORD *)(a1 + 328);
    v8 = *(_DWORD *)(a1 + 368);
    v9 = *(_QWORD *)(a1 + 320);
    v10 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 288);
    v40 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL);
    v39 = *(_QWORD *)(a1 + 312);
    v33 = *(_DWORD *)(a1 + 364);
    v38 = *(_QWORD *)(a1 + 304);
    v32 = *(_DWORD *)(a1 + 360);
    v37 = *(_QWORD *)(a1 + 296);
    v31 = *(_DWORD *)(a1 + 356);
    v36 = *(_QWORD *)(a1 + 344);
    v30 = *(_DWORD *)(a1 + 380);
    v35 = *(_QWORD *)(a1 + 336);
    v46 = *(_DWORD *)(a1 + 376);
    v34 = *(_DWORD *)(a1 + 352);
    BucketIdForAllocationSizePow2 = (unsigned int)GetBucketIdForAllocationSizePow2(*(_QWORD *)(a1 + 280));
    v41 = a1 + 4024;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1 + 4024, 0LL);
    *(_QWORD *)(a1 + 4032) = KeGetCurrentThread();
    v42 = 1;
    ++*(_DWORD *)(a1 + 4 * BucketIdForAllocationSizePow2 + 416);
    v12 = *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 504);
    if ( v12 <= v10 )
      v12 = v10;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 680) += v10;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 504) = v12;
    *(_DWORD *)(a1 + 4 * BucketIdForAllocationSizePow2 + 856) += v8;
    v13 = *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 944);
    if ( v13 <= v9 )
      v13 = v9;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 1120) += v9;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 944) = v13;
    *(_DWORD *)(a1 + 4 * BucketIdForAllocationSizePow2 + 1296) += v5;
    v14 = *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 1384);
    if ( v14 <= v7 )
      v14 = v7;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 1560) += v7;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 1384) = v14;
    *(_DWORD *)(a1 + 4 * BucketIdForAllocationSizePow2 + 1736) += v46;
    v15 = *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 1824);
    if ( v15 <= v35 )
      v15 = v35;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 2000) += v35;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 1824) = v15;
    *(_DWORD *)(a1 + 4 * BucketIdForAllocationSizePow2 + 2176) += v30;
    v16 = *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 2264);
    if ( v16 <= v36 )
      v16 = v36;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 2440) += v36;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 2264) = v16;
    *(_DWORD *)(a1 + 4 * BucketIdForAllocationSizePow2 + 2616) += v31;
    v17 = *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 2704);
    if ( v17 <= v37 )
      v17 = v37;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 2880) += v37;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 2704) = v17;
    *(_DWORD *)(a1 + 4 * BucketIdForAllocationSizePow2 + 3056) += v32;
    v18 = *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 3144);
    if ( v18 <= v38 )
      v18 = v38;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 3320) += v38;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 3144) = v18;
    *(_DWORD *)(a1 + 4 * BucketIdForAllocationSizePow2 + 3496) += v33;
    v19 = *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 3584);
    if ( v19 <= v39 )
      v19 = v39;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 3760) += v39;
    *(_QWORD *)(a1 + 8 * BucketIdForAllocationSizePow2 + 3584) = v19;
    *(_DWORD *)(a1 + 4 * BucketIdForAllocationSizePow2 + 3936) += v34;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v41);
    if ( v40 )
    {
      v20 = *(_DWORD *)(a1 + 384);
      v21 = *(_DWORD *)(a1 + 380);
      v22 = *(_DWORD *)(a1 + 392);
      v23 = *(_DWORD *)(a1 + 388);
      v24 = a3;
      *(_DWORD *)(v40 + 912) += a3;
      *(_DWORD *)(v40 + 896) += v20;
      *(_DWORD *)(v40 + 900) += v23;
      *(_DWORD *)(v40 + 904) += v22;
      *(_DWORD *)(v40 + 908) += v21;
      if ( v20 || v23 || v22 || v21 || a3 )
        *(_BYTE *)(v40 + 916) = 1;
    }
    else
    {
      v24 = a3;
    }
    v25 = 5LL * *(unsigned int *)(a1 + 5328);
    v26 = *(_DWORD *)(a1 + 40LL * *(unsigned int *)(a1 + 5328) + 4080);
    *(_QWORD *)(a1 + 8 * v25 + 4048) = *(_QWORD *)(a1 + 288);
    *(LARGE_INTEGER *)(a1 + 8 * v25 + 4056) = v6;
    *(_QWORD *)(a1 + 8 * v25 + 4064) = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 8 * v25 + 4072) = *(_QWORD *)(a1 + 264);
    v27 = a2 & 0xFD | v26 & 0xFFFFFFFC | (2 * v24);
    v28 = 0xFFFF;
    *(_DWORD *)(a1 + 8 * v25 + 4080) = v27;
    if ( *(_DWORD *)(a1 + 352) < 0xFFFFu )
      v28 = *(_DWORD *)(a1 + 352);
    v29 = v27 ^ (v27 ^ (4 * v28)) & 0x3FFFC;
    *(_DWORD *)(a1 + 8 * v25 + 4080) = v29;
    *(_DWORD *)(a1 + 8 * v25 + 4080) = v29 & 0x3FFFF | (*(_DWORD *)(a1 + 272) << 18);
    *(_DWORD *)(a1 + 5328) = ((unsigned __int8)*(_DWORD *)(a1 + 5328) + 1) & 0x1F;
    *(_QWORD *)(a1 + 248) = 0LL;
  }
}
