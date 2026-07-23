/*
 * XREFs of PsCreateVsmEnclave @ 0x140A7F734
 * Callers:
 *     MiCreateVsmEnclave @ 0x1407F7CA0 (MiCreateVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PspVsmEnclaveHashAllocator @ 0x14077B80C (PspVsmEnclaveHashAllocator.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 *     VslCreateEnclave @ 0x140A7FBF4 (VslCreateEnclave.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsCreateVsmEnclave(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  int v10; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v13; // rsi
  char *v14; // rax
  char *v15; // rdi
  char *Pool2; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // r14
  int Enclave; // edi
  signed __int64 v23; // rax
  struct _KTHREAD *v24; // rax
  char *v25; // rax
  char *v26; // rdi
  __int64 v27; // r15
  int v28; // esi
  __int64 v29; // rsi
  char *v30; // r8
  char v31; // cl
  unsigned __int64 v32; // rcx
  unsigned int v33; // edx
  unsigned int v34; // edi
  __int64 v35; // r10
  __int64 v36; // r13
  _QWORD *v37; // r9
  __int64 v38; // rdx
  void *v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // edi
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // [rsp+50h] [rbp-38h]
  __int64 v45; // [rsp+50h] [rbp-38h]

  v10 = a2;
  if ( !a5 && !*(_QWORD *)(a1 + 1608) )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = (unsigned __int64 *)(a1 + 1624);
    --CurrentThread->KernelApcDisable;
    v14 = (char *)KeAbPreAcquire(a1 + 1624, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
    if ( v15 )
      v15[10] = 1;
    if ( !*(_QWORD *)(a1 + 1608) )
    {
      Pool2 = (char *)ExAllocatePool2(0x101uLL, 0x20uLL, 0x48457350u);
      if ( Pool2 )
      {
        v17 = ExAllocatePool2(0x101uLL, 0x10uLL, 0x48457350u);
        *(_QWORD *)(a1 + 1608) = v17;
        if ( v17 )
        {
          *(_DWORD *)v17 = 0;
          *(_QWORD *)(v17 + 8) = Pool2;
          *(_DWORD *)(v17 + 4) = 128;
          v18 = v17 | 1;
          if ( (Pool2 + 32 >= Pool2 ? 4 : 0) != 0 )
            memset64(Pool2, v18, Pool2 + 32 >= Pool2 ? 4 : 0);
        }
        else
        {
          ExFreePoolWithTag(Pool2, 0);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegion();
    if ( !*(_QWORD *)(a1 + 1608) )
      return 3221225626LL;
    v10 = a2;
  }
  v19 = ExAllocatePool2(0x41uLL, 0x88uLL, 0x65567350u);
  v20 = (char *)v19;
  if ( !v19 )
    return 3221225626LL;
  Enclave = VslCreateEnclave(v19, a1, v10, a3, a4, a6, a7, a5, v19 + 24);
  if ( Enclave >= 0 )
  {
    *((_QWORD *)v20 + 2) = 1LL;
    v20[76] = a5;
    *((_QWORD *)v20 + 4) = a3;
    *((_QWORD *)v20 + 14) = 0LL;
    *((_QWORD *)v20 + 13) = 0LL;
    *((_QWORD *)v20 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)(v20 + 80), NotificationEvent, 0);
    if ( !a5 )
    {
      if ( !*((_QWORD *)v20 + 1) )
      {
        do
        {
          v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1616), 1uLL);
          *((_QWORD *)v20 + 1) = v23 + 1;
        }
        while ( v23 == -1 );
      }
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      v25 = (char *)KeAbPreAcquire(a1 + 1624, 0LL);
      v26 = v25;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1624), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1624), v25, a1 + 1624);
      if ( v26 )
        v26[10] = 1;
      v27 = *(_QWORD *)(a1 + 1608);
      v28 = *(_DWORD *)(v27 + 4) >> 5;
      if ( *(_DWORD *)v27 >= (unsigned int)(4 * v28) )
      {
        v29 = (unsigned int)(2 * v28);
        if ( (unsigned int)v29 < 4 )
          v29 = 4LL;
        v30 = (char *)PspVsmEnclaveHashAllocator(8LL * (unsigned int)v29);
        if ( v30 )
        {
          if ( (((_DWORD)v29 - 1) & (unsigned int)v29) != 0 )
          {
            v31 = -1;
            do
            {
              ++v31;
              LODWORD(v29) = (unsigned int)v29 >> 1;
            }
            while ( (_DWORD)v29 );
            v29 = (unsigned int)(1 << v31);
          }
          if ( (unsigned int)v29 > 0x4000000 )
            v29 = 0x4000000LL;
          v32 = (unsigned int)v29;
          if ( v30 > &v30[8 * v29] )
            v32 = 0LL;
          if ( v32 )
            memset64(v30, v27 | 1, v32);
          v33 = *(_DWORD *)(v27 + 4);
          v34 = 0;
          v35 = -1LL << (*(_BYTE *)(v27 + 4) & 0x1F);
          if ( (v33 & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v36 = *(_QWORD *)(v27 + 8);
              while ( 1 )
              {
                v37 = *(_QWORD **)(v36 + 8LL * v34);
                if ( ((unsigned __int8)v37 & 1) != 0 )
                  break;
                *(_QWORD *)(v36 + 8LL * v34) = *v37;
                v44 = v35 & v37[1];
                v38 = (37
                     * (BYTE6(v44)
                      + 37
                      * (BYTE5(v44)
                       + 37
                       * (BYTE4(v44)
                        + 37
                        * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))
                     + HIBYTE(v44)) & (unsigned int)(v29 - 1);
                *v37 = *(_QWORD *)&v30[8 * v38];
                *(_QWORD *)&v30[8 * v38] = v37;
              }
              v33 = *(_DWORD *)(v27 + 4);
              ++v34;
            }
            while ( v34 < v33 >> 5 );
          }
          v39 = *(void **)(v27 + 8);
          *(_QWORD *)(v27 + 8) = v30;
          *(_DWORD *)(v27 + 4) = (32 * v29) | v33 & 0x1F;
          if ( v39 )
            PspUserApcKernelRoutine(v39);
        }
      }
      v40 = *(_QWORD *)(a1 + 1608);
      v41 = *(_DWORD *)(v40 + 4);
      v45 = *((_QWORD *)v20 + 1) & (-1LL << (v41 & 0x1F));
      v42 = *(_QWORD *)(v40 + 8);
      v43 = (37
           * (BYTE6(v45)
            + 37
            * (BYTE5(v45)
             + 37
             * (BYTE4(v45)
              + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v45 + 11623883)))))))
           + HIBYTE(v45)) & ((v41 >> 5) - 1);
      *(_QWORD *)v20 = *(_QWORD *)(v42 + 8 * v43);
      *(_QWORD *)(v42 + 8 * v43) = v20;
      ++*(_DWORD *)v40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1624), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1624));
      KeAbPostRelease(a1 + 1624);
      KeLeaveCriticalRegion();
    }
    *a8 = v20;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v20, 0);
    return (unsigned int)Enclave;
  }
}
