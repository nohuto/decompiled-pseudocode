/*
 * XREFs of MiComputeCacheAttributeSpeeds @ 0x1406942A8
 * Callers:
 *     MiInitializeZeroEngines @ 0x1407FFB34 (MiInitializeZeroEngines.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiFillMemory @ 0x140402AB0 (MiFillMemory.c)
 *     MiLockAndInsertPageInFreeList @ 0x14045BA98 (MiLockAndInsertPageInFreeList.c)
 *     MiFreeHardwareDescriptor @ 0x1404A6770 (MiFreeHardwareDescriptor.c)
 *     MiAllocateHardwareDescriptor @ 0x1404A8DD8 (MiAllocateHardwareDescriptor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char *__fastcall MiComputeCacheAttributeSpeeds(_QWORD *a1)
{
  char *result; // rax
  char v3; // di
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned __int32 v9; // eax
  __int64 Page; // rax
  __int64 v11; // rsi
  char v12; // di
  __int64 v13; // r15
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // r11
  unsigned __int64 v20; // r10
  _QWORD *v21; // r9
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  unsigned __int64 *v26; // rcx
  unsigned int v27; // edi
  int v28; // r15d
  unsigned __int64 v29; // r12
  int v30; // r13d
  LARGE_INTEGER v31; // rbx
  void *v32; // rdi
  LARGE_INTEGER v33; // rax
  LARGE_INTEGER v34; // r8
  LARGE_INTEGER v35; // r9
  LARGE_INTEGER v36; // rcx
  unsigned int v37; // r13d
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rdx
  unsigned __int64 *v40; // rcx
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // rbx
  KIRQL v44; // r11
  _BYTE *v45; // r8
  __int64 v46; // rdi
  int *v47; // r10
  int v48; // r9d
  __int64 v49; // rcx
  __int128 v50; // xmm1
  __int64 v51; // rdx
  signed __int32 v52[8]; // [rsp+8h] [rbp-100h] BYREF
  int v53; // [rsp+38h] [rbp-D0h] BYREF
  int v54; // [rsp+3Ch] [rbp-CCh]
  __int64 v55; // [rsp+40h] [rbp-C8h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER v57; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *HardwareDescriptor; // [rsp+58h] [rbp-B0h]
  unsigned __int64 *v59; // [rsp+60h] [rbp-A8h]
  __int64 v60; // [rsp+68h] [rbp-A0h]
  __int64 v61; // [rsp+70h] [rbp-98h]
  __int64 v62; // [rsp+78h] [rbp-90h]
  __int64 v63; // [rsp+80h] [rbp-88h]
  __int64 v64; // [rsp+88h] [rbp-80h]
  _QWORD *v65; // [rsp+90h] [rbp-78h]
  char *v66; // [rsp+98h] [rbp-70h]
  __int64 v67; // [rsp+A0h] [rbp-68h]
  __int128 v68; // [rsp+A8h] [rbp-60h] BYREF
  char v69[32]; // [rsp+B8h] [rbp-50h] BYREF
  char v70; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v71[56]; // [rsp+E0h] [rbp-28h] BYREF

  v65 = a1;
  LOBYTE(v53) = 0;
  v68 = 0LL;
  result = (char *)memset_0(v69, 0, 0x60uLL);
  if ( (byte_140E2DD18 & 1) == 0 )
  {
    v3 = byte_140E2DD18 & 4;
    v4 = a1[22];
    result = (char *)((__int64)*(int *)a1 << 6);
    v54 = *(_DWORD *)a1;
    v67 = v54;
    v5 = *(unsigned int *)(v4 + 56);
    v66 = result;
    v6 = qword_140E2DC38 + 384 * v5;
    v63 = v6;
    if ( !*(_QWORD *)&result[v6 + 200] )
    {
      v7 = *(_QWORD *)(v4 + 48);
      v8 = 168LL * v54;
      v61 = *(_QWORD *)(v6 + 376);
      MiInitializePageColorBase(0LL, 3, v5 + 1, (__int64)&v68);
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v68, 1u);
      Page = MiGetPage(
               v7,
               DWORD2(v68) ^ (unsigned int)(unsigned __int8)(BYTE8(v68) ^ (v9
                                                                         % dword_140E2DD00[(*((_QWORD *)&v68 + 1) >> 16) & 3LL])),
               0);
      v62 = Page;
      if ( Page == -1 )
        v11 = 0LL;
      else
        v11 = 48 * Page - 0x220000000000LL;
      v12 = -v3;
      v13 = 2LL - (v12 != 0);
      v64 = v13;
      if ( v11 )
      {
        if ( BYTE2(*(_DWORD *)(v11 + 32)) >= 0x40u )
          MiChangePageAttribute(v11, 0);
        v18 = &v70;
        v19 = 2LL;
        v20 = *(_QWORD *)(v8 + v61 + 80) * *(unsigned int *)(v8 + v61 + 72);
        v21 = *(_QWORD **)(v8 + v61 + 120);
        do
        {
          v22 = (unsigned __int64 *)v18;
          v23 = (*v21 << 21) / v20;
          v24 = 2LL - (v12 != 0);
          do
          {
            *v22 = v23;
            v22 += 4;
            --v24;
          }
          while ( v24 );
          ++v21;
          v18 += 16;
          --v19;
        }
        while ( v19 );
        if ( v54 )
          HardwareDescriptor = 0LL;
        else
          HardwareDescriptor = MiAllocateHardwareDescriptor(a1);
        v25 = (__int64)HardwareDescriptor;
        v26 = (unsigned __int64 *)v71;
        v27 = 1;
        v60 = v13;
        LODWORD(v55) = 1;
        do
        {
          v54 = 0;
          v59 = v26;
          do
          {
            v28 = v54;
            v29 = 0LL;
            v30 = 0;
            do
            {
              PerformanceFrequency.QuadPart = 0LL;
              v31 = KeQueryPerformanceCounter(&PerformanceFrequency);
              if ( PerformanceFrequency.QuadPart != 10000000 )
                v31.QuadPart = 10000000 * v31.QuadPart / PerformanceFrequency.QuadPart;
              _InterlockedOr(v52, 0);
              MiChangePageAttribute(v11, v27);
              v32 = (void *)MiMapPageInHyperSpaceWorker(v62, (unsigned __int8 *)&v53, 0x80000000);
              MiFillMemory(v25, v32, 0x1000uLL, 0LL, v28);
              MiUnmapPageInHyperSpaceWorker((unsigned __int64)v32, v53, 0x80000000);
              MiChangePageAttribute(v11, 0);
              _InterlockedOr(v52, 0);
              v57.QuadPart = 0LL;
              v33 = KeQueryPerformanceCounter(&v57);
              if ( v57.QuadPart != 10000000 )
                v33.QuadPart = 10000000 * v33.QuadPart / v57.QuadPart;
              v27 = v55;
              ++v30;
              v36 = v31;
              if ( v33.QuadPart >= (unsigned __int64)v31.QuadPart )
                v36 = v33;
              v29 += v36.QuadPart - v31.QuadPart;
            }
            while ( v29 < 0x1F4 );
            v37 = v30 << 12;
            v38 = v29 << 21;
            v39 = v38 % v37;
            v40 = v59;
            *v59 = v38 / v37;
            v26 = v40 + 2;
            v59 = v26;
            v54 = v28 + 1;
          }
          while ( v28 + 1 < 2 );
          ++v27;
          v41 = v60-- == 1;
          LODWORD(v55) = v27;
        }
        while ( !v41 );
        v13 = v64;
        v42 = v25;
        v6 = v63;
        if ( v42 )
          MiFreeHardwareDescriptor((__int64)v65, v42);
        MiLockAndInsertPageInFreeList(v11, v39, v34.QuadPart, v35.QuadPart);
      }
      else
      {
        v14 = 1LL;
        v15 = v71;
        do
        {
          v16 = MiUnmeasuredTimeToZeroOneLargePage[v14];
          v17 = 2LL;
          do
          {
            *v15 = -1LL;
            *(v15 - 1) = v16;
            v15 += 2;
            --v17;
          }
          while ( v17 );
          ++v14;
        }
        while ( v14 <= v13 );
      }
      v43 = v61;
      v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v61 + 64));
      if ( !*(_QWORD *)&v66[v6 + 200] )
      {
        v45 = v71;
        v46 = 2 * v67;
        v47 = (int *)(v6 + 124);
        v48 = 1;
        do
        {
          v49 = 2LL;
          v50 = *(_OWORD *)(v45 + 8);
          v51 = 32 * (v46 + (unsigned int)(v48 - 1));
          *(_OWORD *)(v51 + v6 + 184) = *(_OWORD *)(v45 - 8);
          *(_OWORD *)(v51 + v6 + 200) = v50;
          do
          {
            if ( *(_QWORD *)v45 < 9 * (*((_QWORD *)v45 - 1) / 0xAuLL) )
              *v47 = v48;
            v45 += 16;
            --v49;
          }
          while ( v49 );
          ++v48;
          ++v47;
          --v13;
        }
        while ( v13 );
      }
      return (char *)MiReleaseSpinLockExclusive((_DWORD *)(v43 + 64), v44);
    }
  }
  return result;
}
