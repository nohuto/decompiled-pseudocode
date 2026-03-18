/*
 * XREFs of MiComputeCacheAttributeSpeeds @ 0x140687D78
 * Callers:
 *     MiInitializeZeroEngines @ 0x1407EF53C (MiInitializeZeroEngines.c)
 * Callees:
 *     MiLockAndInsertPageInFreeList @ 0x140223D04 (MiLockAndInsertPageInFreeList.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiFillMemory @ 0x1404067B0 (MiFillMemory.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiAllocateHardwareDescriptor @ 0x140683CB4 (MiAllocateHardwareDescriptor.c)
 *     MiFreeHardwareDescriptor @ 0x140684100 (MiFreeHardwareDescriptor.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  int v27; // edi
  int v28; // r15d
  unsigned __int64 v29; // r12
  int v30; // r13d
  LARGE_INTEGER v31; // rbx
  void *v32; // rdi
  LARGE_INTEGER v33; // rax
  LARGE_INTEGER v34; // rcx
  unsigned __int64 *v35; // rcx
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rbx
  KIRQL v39; // r11
  _BYTE *v40; // r8
  __int64 v41; // rdi
  int *v42; // r10
  int v43; // r9d
  __int64 v44; // rcx
  __int128 v45; // xmm1
  __int64 v46; // rdx
  signed __int32 v47[8]; // [rsp+8h] [rbp-100h] BYREF
  int v48; // [rsp+38h] [rbp-D0h] BYREF
  int v49; // [rsp+3Ch] [rbp-CCh]
  __int64 v50; // [rsp+40h] [rbp-C8h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER v52; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *HardwareDescriptor; // [rsp+58h] [rbp-B0h]
  unsigned __int64 *v54; // [rsp+60h] [rbp-A8h]
  __int64 v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-90h]
  __int64 v58; // [rsp+80h] [rbp-88h]
  __int64 v59; // [rsp+88h] [rbp-80h]
  _QWORD *v60; // [rsp+90h] [rbp-78h]
  char *v61; // [rsp+98h] [rbp-70h]
  __int64 v62; // [rsp+A0h] [rbp-68h]
  __int128 v63; // [rsp+A8h] [rbp-60h] BYREF
  char v64[32]; // [rsp+B8h] [rbp-50h] BYREF
  char v65; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v66[56]; // [rsp+E0h] [rbp-28h] BYREF

  v60 = a1;
  LOBYTE(v48) = 0;
  v63 = 0LL;
  result = (char *)memset_0(v64, 0, 0x60uLL);
  if ( (byte_140E2D998 & 1) == 0 )
  {
    v3 = byte_140E2D998 & 4;
    v4 = a1[22];
    result = (char *)((__int64)*(int *)a1 << 6);
    v49 = *(_DWORD *)a1;
    v62 = v49;
    v5 = *(unsigned int *)(v4 + 56);
    v61 = result;
    v6 = qword_140E2D8B8 + 384 * v5;
    v58 = v6;
    if ( !*(_QWORD *)&result[v6 + 200] )
    {
      v7 = *(_QWORD *)(v4 + 48);
      v8 = 168LL * v49;
      v56 = *(_QWORD *)(v6 + 376);
      MiInitializePageColorBase(0LL, 3, v5 + 1, (__int64)&v63);
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v63, 1u);
      Page = MiGetPage(
               v7,
               DWORD2(v63) ^ (unsigned int)(unsigned __int8)(BYTE8(v63) ^ (v9
                                                                         % dword_140E2D980[(*((_QWORD *)&v63 + 1) >> 16) & 3LL])),
               0);
      v57 = Page;
      if ( Page == -1 )
        v11 = 0LL;
      else
        v11 = 48 * Page - 0x220000000000LL;
      v12 = -v3;
      v13 = 2LL - (v12 != 0);
      v59 = v13;
      if ( v11 )
      {
        if ( BYTE2(*(_DWORD *)(v11 + 32)) >= 0x40u )
          MiChangePageAttribute(v11, 0);
        v18 = &v65;
        v19 = 2LL;
        v20 = *(_QWORD *)(v8 + v56 + 80) * *(unsigned int *)(v8 + v56 + 72);
        v21 = *(_QWORD **)(v8 + v56 + 120);
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
        if ( v49 )
          HardwareDescriptor = 0LL;
        else
          HardwareDescriptor = MiAllocateHardwareDescriptor(a1);
        v25 = (__int64)HardwareDescriptor;
        v26 = (unsigned __int64 *)v66;
        v27 = 1;
        v55 = v13;
        LODWORD(v50) = 1;
        do
        {
          v49 = 0;
          v54 = v26;
          do
          {
            v28 = v49;
            v29 = 0LL;
            v30 = 0;
            do
            {
              PerformanceFrequency.QuadPart = 0LL;
              v31 = KeQueryPerformanceCounter(&PerformanceFrequency);
              if ( PerformanceFrequency.QuadPart != 10000000 )
                v31.QuadPart = 10000000 * v31.QuadPart / PerformanceFrequency.QuadPart;
              _InterlockedOr(v47, 0);
              MiChangePageAttribute(v11, v27);
              v32 = (void *)MiMapPageInHyperSpaceWorker(v57, (unsigned __int8 *)&v48, 0x80000000);
              MiFillMemory(v25, v32, 0x1000uLL, 0LL, v28);
              MiUnmapPageInHyperSpaceWorker((unsigned __int64)v32, v48, 0x80000000);
              MiChangePageAttribute(v11, 0);
              _InterlockedOr(v47, 0);
              v52.QuadPart = 0LL;
              v33 = KeQueryPerformanceCounter(&v52);
              if ( v52.QuadPart != 10000000 )
                v33.QuadPart = 10000000 * v33.QuadPart / v52.QuadPart;
              v27 = v50;
              ++v30;
              v34 = v31;
              if ( v33.QuadPart >= (unsigned __int64)v31.QuadPart )
                v34 = v33;
              v29 += v34.QuadPart - v31.QuadPart;
            }
            while ( v29 < 0x1F4 );
            v35 = v54;
            *v54 = (v29 << 21) / (unsigned int)(v30 << 12);
            v26 = v35 + 2;
            v54 = v26;
            v49 = v28 + 1;
          }
          while ( v28 + 1 < 2 );
          ++v27;
          v36 = v55-- == 1;
          LODWORD(v50) = v27;
        }
        while ( !v36 );
        v13 = v59;
        v37 = v25;
        v6 = v58;
        if ( v37 )
          MiFreeHardwareDescriptor((__int64)v60, v37);
        MiLockAndInsertPageInFreeList(v11);
      }
      else
      {
        v14 = 1LL;
        v15 = v66;
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
      v38 = v56;
      v39 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v56 + 64));
      if ( !*(_QWORD *)&v61[v6 + 200] )
      {
        v40 = v66;
        v41 = 2 * v62;
        v42 = (int *)(v6 + 124);
        v43 = 1;
        do
        {
          v44 = 2LL;
          v45 = *(_OWORD *)(v40 + 8);
          v46 = 32 * (v41 + (unsigned int)(v43 - 1));
          *(_OWORD *)(v46 + v6 + 184) = *(_OWORD *)(v40 - 8);
          *(_OWORD *)(v46 + v6 + 200) = v45;
          do
          {
            if ( *(_QWORD *)v40 < 9 * (*((_QWORD *)v40 - 1) / 0xAuLL) )
              *v42 = v43;
            v40 += 16;
            --v44;
          }
          while ( v44 );
          ++v43;
          ++v42;
          --v13;
        }
        while ( v13 );
      }
      return (char *)MiReleaseSpinLockExclusive((_DWORD *)(v38 + 64), v39);
    }
  }
  return result;
}
