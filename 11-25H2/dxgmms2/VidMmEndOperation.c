/*
 * XREFs of VidMmEndOperation @ 0x1400F5FFC
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1400E3528 (GetBucketIdForAllocationSizePow2.c)
 */

void __fastcall VidMmEndOperation(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v4; // r15d
  int v5; // r14d
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // ecx
  unsigned int v24; // edx
  int v25; // ecx
  int v26; // ecx
  int v27; // [rsp+20h] [rbp-98h]
  int v28; // [rsp+24h] [rbp-94h]
  int v29; // [rsp+28h] [rbp-90h]
  int v30; // [rsp+2Ch] [rbp-8Ch]
  int v31; // [rsp+30h] [rbp-88h]
  int v32; // [rsp+34h] [rbp-84h]
  unsigned __int64 v33; // [rsp+38h] [rbp-80h]
  unsigned __int64 v34; // [rsp+40h] [rbp-78h]
  unsigned __int64 v35; // [rsp+48h] [rbp-70h]
  unsigned __int64 v36; // [rsp+50h] [rbp-68h]
  unsigned __int64 v37; // [rsp+58h] [rbp-60h]
  unsigned __int64 v38; // [rsp+60h] [rbp-58h]
  __int64 v39; // [rsp+68h] [rbp-50h] BYREF
  char v40; // [rsp+70h] [rbp-48h]
  int v41; // [rsp+C0h] [rbp+8h]
  unsigned int BucketIdForAllocationSizePow2; // [rsp+C8h] [rbp+10h]
  int v43; // [rsp+D8h] [rbp+20h]

  if ( a2 )
  {
    v4 = a3;
    v5 = a2;
    if ( *(_QWORD *)(a1 + 248) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v7 = *(_QWORD *)(a1 + 312);
      v8 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 288);
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL);
      v31 = *(_DWORD *)(a1 + 364);
      v30 = *(_DWORD *)(a1 + 360);
      v38 = *(_QWORD *)(a1 + 304);
      v29 = *(_DWORD *)(a1 + 356);
      v37 = *(_QWORD *)(a1 + 296);
      v28 = *(_DWORD *)(a1 + 380);
      v36 = *(_QWORD *)(a1 + 344);
      v27 = *(_DWORD *)(a1 + 376);
      v35 = *(_QWORD *)(a1 + 336);
      v43 = *(_DWORD *)(a1 + 372);
      v34 = *(_QWORD *)(a1 + 328);
      v41 = *(_DWORD *)(a1 + 368);
      v33 = *(_QWORD *)(a1 + 320);
      v32 = *(_DWORD *)(a1 + 352);
      BucketIdForAllocationSizePow2 = GetBucketIdForAllocationSizePow2(*(_QWORD *)(a1 + 280));
      v39 = a1 + 4024;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(a1 + 4024, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(a1 + 4032) = KeGetCurrentThread();
      v40 = 1;
      ++*(_DWORD *)(a1 + 4LL * BucketIdForAllocationSizePow2 + 416);
      v10 = *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 504);
      if ( v10 <= v8 )
        v10 = v8;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 680) += v8;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 504) = v10;
      *(_DWORD *)(a1 + 4LL * BucketIdForAllocationSizePow2 + 856) += v41;
      v11 = *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 944);
      if ( v11 <= v33 )
        v11 = v33;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 1120) += v33;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 944) = v11;
      *(_DWORD *)(a1 + 4LL * BucketIdForAllocationSizePow2 + 1296) += v43;
      v12 = *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 1384);
      if ( v12 <= v34 )
        v12 = v34;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 1560) += v34;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 1384) = v12;
      *(_DWORD *)(a1 + 4LL * BucketIdForAllocationSizePow2 + 1736) += v27;
      v13 = *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 1824);
      if ( v13 <= v35 )
        v13 = v35;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 2000) += v35;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 1824) = v13;
      *(_DWORD *)(a1 + 4LL * BucketIdForAllocationSizePow2 + 2176) += v28;
      v14 = *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 2264);
      if ( v14 <= v36 )
        v14 = v36;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 2440) += v36;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 2264) = v14;
      *(_DWORD *)(a1 + 4LL * BucketIdForAllocationSizePow2 + 2616) += v29;
      v15 = *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 2704);
      if ( v15 <= v37 )
        v15 = v37;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 2880) += v37;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 2704) = v15;
      *(_DWORD *)(a1 + 4LL * BucketIdForAllocationSizePow2 + 3056) += v30;
      v16 = *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 3144);
      if ( v16 <= v38 )
        v16 = v38;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 3320) += v38;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 3144) = v16;
      *(_DWORD *)(a1 + 4LL * BucketIdForAllocationSizePow2 + 3496) += v31;
      v17 = *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 3584);
      if ( v17 <= v7 )
        v17 = v7;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 3760) += v7;
      *(_QWORD *)(a1 + 8LL * BucketIdForAllocationSizePow2 + 3584) = v17;
      *(_DWORD *)(a1 + 4LL * BucketIdForAllocationSizePow2 + 3936) += v32;
      DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v39);
      if ( v9 )
      {
        v18 = *(_DWORD *)(a1 + 384);
        v19 = *(_DWORD *)(a1 + 380);
        v20 = *(_DWORD *)(a1 + 392);
        v21 = *(_DWORD *)(a1 + 388);
        *(_DWORD *)(v9 + 896) += v18;
        *(_DWORD *)(v9 + 900) += v21;
        *(_DWORD *)(v9 + 904) += v20;
        *(_DWORD *)(v9 + 908) += v19;
        *(_DWORD *)(v9 + 912) += v4;
        if ( v18 || v21 || v20 || v19 || (_BYTE)v4 )
          *(_BYTE *)(v9 + 916) = 1;
      }
      v22 = 5LL * *(unsigned int *)(a1 + 5328);
      v23 = *(_DWORD *)(a1 + 40LL * *(unsigned int *)(a1 + 5328) + 4080) & 0xFFFFFFFE;
      *(_QWORD *)(a1 + 8 * v22 + 4048) = *(_QWORD *)(a1 + 288);
      *(LARGE_INTEGER *)(a1 + 8 * v22 + 4056) = PerformanceCounter;
      *(_QWORD *)(a1 + 8 * v22 + 4064) = *(_QWORD *)(a1 + 248);
      v24 = (v5 | v23) & 0xFFFFFFFD | (2 * v4);
      v25 = 0xFFFF;
      *(_QWORD *)(a1 + 8 * v22 + 4072) = *(_QWORD *)(a1 + 264);
      *(_DWORD *)(a1 + 8 * v22 + 4080) = v24;
      if ( *(_DWORD *)(a1 + 352) < 0xFFFFu )
        v25 = *(_DWORD *)(a1 + 352);
      v26 = v24 ^ (v24 ^ (4 * v25)) & 0x3FFFC;
      *(_DWORD *)(a1 + 8 * v22 + 4080) = v26;
      *(_DWORD *)(a1 + 8 * v22 + 4080) = v26 & 0x3FFFF | (*(_DWORD *)(a1 + 272) << 18);
      *(_DWORD *)(a1 + 5328) = ((unsigned __int8)*(_DWORD *)(a1 + 5328) + 1) & 0x1F;
      *(_QWORD *)(a1 + 248) = 0LL;
    }
  }
}
