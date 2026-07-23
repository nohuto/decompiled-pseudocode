/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x14020DF80
 * Callers:
 *     SmpKeyedStoreReference @ 0x14020D9B4 (SmpKeyedStoreReference.c)
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x14020DD3C (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     SmStoreExistsForProcess @ 0x14020DF24 (SmStoreExistsForProcess.c)
 *     SmGetStoreOwnerProcessId @ 0x14060D3FC (SmGetStoreOwnerProcessId.c)
 *     SmpKeyedStoreCreate @ 0x140A383F4 (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStop @ 0x140A4375C (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A438B0 (SmStoreCompressionStart.c)
 *     SmSwapStore @ 0x140A43AF4 (SmSwapStore.c)
 *     SmProcessDeleteNotification @ 0x140A4863C (SmProcessDeleteNotification.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A57F94 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3, int a4)
{
  __int64 v8; // rsi
  int v10; // r8d
  unsigned __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *i; // rdx
  ULONG_PTR v16; // r9
  __int64 v17; // rdi
  unsigned int v18; // r8d
  __int64 *v19; // rcx
  char *Pool2; // r9
  ULONG_PTR v21; // r8
  unsigned int v22; // r10d
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  _QWORD **v25; // r10
  _QWORD *v26; // r11
  unsigned __int64 v27; // rcx
  void *v28; // rcx
  char v29; // cl
  unsigned int v30; // [rsp+20h] [rbp-88h]
  __int64 v31; // [rsp+30h] [rbp-78h]
  unsigned __int64 v32; // [rsp+48h] [rbp-60h]
  unsigned __int64 v33; // [rsp+58h] [rbp-50h]
  int v34; // [rsp+C8h] [rbp+20h]

  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    v14 = v13;
    if ( a3 > 0 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v13, BugCheckParameter2);
      if ( v14 )
        *(_BYTE *)(v14 + 10) = 1;
      goto LABEL_13;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, 0LL, v13, BugCheckParameter2);
    if ( v14 )
      *(_BYTE *)(v14 + 10) = 1;
  }
  if ( !a3 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v8 && *(_QWORD *)(v8 + 8) == *a2 )
      goto LABEL_5;
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
      v8 = 0LL;
      goto LABEL_5;
    }
  }
LABEL_13:
  v10 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
  v11 = *a2 & (-1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F));
  if ( v10 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 16)
       + 8
       * ((HIBYTE(v11)
         + 37
         * (BYTE6(v11)
          + 37
          * (BYTE5(v11)
           + 37
           * (BYTE4(v11)
            + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))) & (unsigned int)(v10 - 1));
    while ( 1 )
    {
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( v11 == ((-1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F)) & *(_QWORD *)(v8 + 8)) )
      {
        if ( a3 == 2 )
        {
          v32 = *(_QWORD *)(v8 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
          for ( i = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                             + 8
                             * ((HIBYTE(v32)
                               + 37
                               * (BYTE6(v32)
                                + 37
                                * (BYTE5(v32)
                                 + 37
                                 * (BYTE4(v32)
                                  + 37
                                  * (BYTE3(v32)
                                   + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
                (*i & 1) == 0;
                i = (_QWORD *)*i )
          {
            if ( *i == v8 )
            {
              *i = *(_QWORD *)v8;
              --*(_DWORD *)(BugCheckParameter2 + 8);
              *(_QWORD *)v8 |= 0x8000000000000002uLL;
              break;
            }
          }
          if ( *(_QWORD *)(BugCheckParameter2 + 24) == v8 )
            *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter2 + 24) = v8;
        }
        goto LABEL_5;
      }
    }
  }
  if ( a3 != 1 )
  {
    *(_QWORD *)(BugCheckParameter2 + 32) = *a2;
    v8 = 0LL;
    goto LABEL_5;
  }
  v16 = BugCheckParameter2 + 8;
  v8 = (__int64)(a2 - 1);
  v17 = (unsigned int)(2 * (*(_DWORD *)(BugCheckParameter2 + 12) >> 5));
  if ( *(_DWORD *)(BugCheckParameter2 + 8) >= (unsigned int)v17 )
  {
    if ( (unsigned int)v17 < 4 )
      v17 = 4LL;
    Pool2 = (char *)ExAllocatePool2(0x40uLL, 8LL * (unsigned int)v17, 0x54486D73u);
    if ( Pool2 )
    {
      if ( (((_DWORD)v17 - 1) & (unsigned int)v17) != 0 )
      {
        v29 = -1;
        do
        {
          ++v29;
          LODWORD(v17) = (unsigned int)v17 >> 1;
        }
        while ( (_DWORD)v17 );
        v17 = (unsigned int)(1 << v29);
      }
      v21 = BugCheckParameter2 + 8;
      if ( (unsigned int)v17 > 0x4000000 )
        v17 = 0x4000000LL;
      v22 = 0;
      v23 = (unsigned int)v17;
      v34 = v17;
      if ( Pool2 > &Pool2[8 * v17] )
        v23 = 0LL;
      if ( v23 )
        memset64(Pool2, v21 | 1, v23);
      v24 = *(_DWORD *)(BugCheckParameter2 + 12);
      v30 = 0;
      v31 = -1LL << (v24 & 0x1F);
      if ( (v24 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v25 = (_QWORD **)(*(_QWORD *)(v21 + 8) + 8LL * v22);
          while ( 1 )
          {
            v26 = *v25;
            if ( ((unsigned __int8)*v25 & 1) != 0 )
              break;
            *v25 = (_QWORD *)*v26;
            LODWORD(v17) = v34;
            v27 = (((v26[1] & (unsigned __int64)v31) >> 56)
                 + 37
                 * ((unsigned __int8)((v26[1] & (unsigned __int64)v31) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)((v26[1] & (unsigned __int64)v31) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)((v26[1] & (unsigned __int64)v31) >> 32)
                    + 37
                    * ((((_DWORD)v26[1] & (unsigned int)v31) >> 24)
                     + 37
                     * ((unsigned __int8)(((_DWORD)v26[1] & (unsigned int)v31) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v26[1] & v31) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v26[1] & v31) >> 8)))))))) & (unsigned int)(v34 - 1);
            *v26 = *(_QWORD *)&Pool2[8 * v27];
            *(_QWORD *)&Pool2[8 * v27] = v26;
          }
          v21 = BugCheckParameter2 + 8;
          v24 = *(_DWORD *)(BugCheckParameter2 + 12);
          v22 = v30 + 1;
          v30 = v22;
        }
        while ( v22 < v24 >> 5 );
      }
      v28 = *(void **)(v21 + 8);
      *(_QWORD *)(v21 + 8) = Pool2;
      *(_DWORD *)(v21 + 4) = (32 * v17) | v24 & 0x1F;
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      v16 = BugCheckParameter2 + 8;
    }
    else
    {
      v16 = BugCheckParameter2 + 8;
      if ( *(_DWORD *)(BugCheckParameter2 + 12) < 0x20u )
      {
        v8 = 0LL;
        goto LABEL_5;
      }
    }
  }
  v18 = *(_DWORD *)(v16 + 4);
  v33 = *a2 & (-1LL << (v18 & 0x1F));
  v19 = (__int64 *)(*(_QWORD *)(v16 + 8)
                  + 8
                  * ((HIBYTE(v33)
                    + 37
                    * (BYTE6(v33)
                     + 37
                     * (BYTE5(v33)
                      + 37
                      * (BYTE4(v33)
                       + 37
                       * (BYTE3(v33)
                        + 37
                        * (BYTE2(v33)
                         + 37
                         * (37 * ((unsigned __int8)v33 + 11623883)
                          + (unsigned __int8)((unsigned __int16)(*(_WORD *)a2 & (-1 << (v18 & 0x1F))) >> 8)))))))) & ((v18 >> 5) - 1)));
  *(_QWORD *)v8 = *v19;
  *v19 = v8;
  ++*(_DWORD *)v16;
  if ( *(_QWORD *)(BugCheckParameter2 + 32) == *a2 )
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
LABEL_5:
  if ( !a4 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
    }
    else if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(BugCheckParameter2);
    }
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return v8;
}
