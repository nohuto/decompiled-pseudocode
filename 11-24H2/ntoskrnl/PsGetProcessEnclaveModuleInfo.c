/*
 * XREFs of PsGetProcessEnclaveModuleInfo @ 0x1404B9BD0
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140A41618 (DbgkpPostModuleMessages.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsFreeEnclaveModuleInfo @ 0x1404B9E10 (PsFreeEnclaveModuleInfo.c)
 *     MmGetEnclaveModuleList @ 0x140681DD8 (MmGetEnclaveModuleList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsGetProcessEnclaveModuleInfo(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned __int64 *v3; // rbp
  int EnclaveModuleList; // r12d
  unsigned int v5; // r14d
  char *Pool2; // r13
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rax
  char *v10; // rdi
  __int64 v11; // r8
  _QWORD **v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r15
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  int v18; // [rsp+60h] [rbp+8h]

  v3 = (unsigned __int64 *)(a1 + 1624);
  EnclaveModuleList = 0;
  v18 = 0;
  v5 = 0;
  Pool2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (char *)KeAbPreAcquire(a1 + 1624, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v9, (__int64)v3);
  if ( v10 )
    v10[10] = 1;
  v11 = *(_QWORD *)(a1 + 1608);
  if ( v11 )
  {
    v12 = *(_QWORD ***)(v11 + 8);
    v13 = v12;
    while ( v13 )
    {
      v13 = (_QWORD *)*v13;
      if ( ((unsigned __int8)v13 & 1) != 0 )
        break;
LABEL_13:
      if ( !v13 )
        goto LABEL_15;
      ++v5;
    }
    for ( ++v12;
          (unsigned __int64)v12 < *(_QWORD *)(v11 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v11 + 4) >> 5);
          ++v12 )
    {
      v13 = *v12;
      if ( ((unsigned __int8)*v12 & 1) == 0 )
        goto LABEL_13;
    }
LABEL_15:
    if ( v5 )
    {
      Pool2 = (char *)ExAllocatePool2(0x100uLL, 16LL * v5, 0x56455350u);
      if ( Pool2 )
      {
        v14 = *(_QWORD *)(a1 + 1608);
        v15 = *(_QWORD **)(v14 + 8);
        v16 = v15;
        while ( v16 )
        {
          v16 = (_QWORD *)*v16;
          if ( ((unsigned __int8)v16 & 1) != 0 )
            break;
LABEL_25:
          if ( v16 )
          {
            EnclaveModuleList = MmGetEnclaveModuleList(v16[4], &Pool2[16 * v18], &Pool2[16 * v18 + 8]);
            if ( EnclaveModuleList >= 0 && ++v18 < v5 )
              continue;
          }
          goto LABEL_28;
        }
        for ( ++v15;
              (unsigned __int64)v15 < *(_QWORD *)(v14 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v14 + 4) >> 5);
              ++v15 )
        {
          v16 = (_QWORD *)*v15;
          if ( (*v15 & 1) == 0 )
            goto LABEL_25;
        }
      }
      else
      {
        EnclaveModuleList = -1073741801;
      }
    }
  }
LABEL_28:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  if ( EnclaveModuleList < 0 )
  {
    PsFreeEnclaveModuleInfo(Pool2);
  }
  else
  {
    *a2 = Pool2;
    *a3 = v5;
  }
  return (unsigned int)EnclaveModuleList;
}
