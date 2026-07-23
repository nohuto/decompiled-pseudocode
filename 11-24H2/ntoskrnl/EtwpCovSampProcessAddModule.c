/*
 * XREFs of EtwpCovSampProcessAddModule @ 0x14092489C
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1409228E0 (EtwpCovSampImageNotify.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpCovSampProcessRemoveModule @ 0x140922348 (EtwpCovSampProcessRemoveModule.c)
 *     EtwpCovSampModuleReference @ 0x140A42F4C (EtwpCovSampModuleReference.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampProcessAddModule(__int64 a1, void **a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  void *Pool2; // rbp
  char *v11; // rax
  char *v12; // r14
  int v13; // r12d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // r15d
  struct _KTHREAD *v18; // rax
  char *v19; // rax
  char *v20; // r14
  const void *v21; // rdx
  void *v22; // rax
  unsigned int v23; // esi
  _QWORD *v24; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  Pool2 = 0LL;
  v11 = (char *)KeAbPreAcquire(a1 + 8, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v11, (__int64)v5);
  if ( v12 )
    v12[10] = 1;
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( !*(_QWORD *)a1 )
  {
    PsReferenceSiloContext(*a2);
    *(_QWORD *)a1 = a2;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x110000) != 0 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
      v15 = *(_DWORD *)(a1 + 32);
      v16 = *(_DWORD *)(a1 + 36);
      if ( v15 < v16 )
        break;
      v17 = 2 * v16;
      if ( !v16 )
        v17 = 16;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KeLeaveCriticalRegion();
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x56777445u);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, 16LL * v17, 0x56777445u);
      if ( !Pool2 )
      {
        v23 = -1073741670;
        goto LABEL_33;
      }
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      v19 = (char *)KeAbPreAcquire((__int64)v5, 0LL);
      v20 = v19;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v19, (__int64)v5);
      if ( v20 )
        v20[10] = 1;
      *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
      if ( v17 > *(_DWORD *)(a1 + 36) )
      {
        v21 = *(const void **)(a1 + 24);
        if ( v21 )
          memmove(Pool2, v21, 16LL * *(unsigned int *)(a1 + 32));
        v22 = *(void **)(a1 + 24);
        *(_QWORD *)(a1 + 24) = Pool2;
        Pool2 = v22;
        *(_DWORD *)(a1 + 36) = v17;
      }
      if ( (unsigned int)++v13 >= 0x14 )
      {
        v23 = -1073741823;
        goto LABEL_33;
      }
    }
    v24 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v14);
    if ( v15 > v14 )
      memmove(v24 + 2, (const void *)(*(_QWORD *)(a1 + 24) + 16LL * v14), 16LL * (v15 - v14));
    ++*(_DWORD *)(a1 + 32);
    *v24 = a4 + *(_QWORD *)(a3 + 40);
    EtwpCovSampModuleReference(*(_QWORD *)a1, a3);
    v24[1] = a3;
  }
  else
  {
    EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
  }
  v23 = 0;
LABEL_33:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
    KeAbPostRelease(a1 + 8);
    KeLeaveCriticalRegion();
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x56777445u);
  return v23;
}
