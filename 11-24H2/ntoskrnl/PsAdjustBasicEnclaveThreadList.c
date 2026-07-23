/*
 * XREFs of PsAdjustBasicEnclaveThreadList @ 0x1405E4010
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PspFindVsmEnclaveThread @ 0x140A2E7DC (PspFindVsmEnclaveThread.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsAdjustBasicEnclaveThreadList(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  __int64 Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v10; // rax
  _BOOL8 v11; // r8
  char *v12; // rbp
  _QWORD **v13; // r14
  _QWORD *v14; // rdi
  int VsmEnclaveThread; // eax
  _QWORD *v16; // rsi
  _QWORD *v17; // rax

  v3 = 0LL;
  if ( a3 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x74457350u);
    v3 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 32) = a3;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (char *)KeAbPreAcquire(a1 + 112, 0LL);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v10, a1 + 112);
  if ( v12 )
    v12[10] = 1;
  v13 = (_QWORD **)(a1 + 104);
  if ( !a3 )
  {
    v14 = *v13;
    while ( v14 )
    {
      VsmEnclaveThread = PspFindVsmEnclaveThread(a2, v14, v11);
      if ( VsmEnclaveThread >= 0 )
      {
        if ( VsmEnclaveThread <= 0 )
          break;
        v14 = (_QWORD *)v14[1];
      }
      else
      {
        v14 = (_QWORD *)*v14;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 104), (__int64)v14);
    goto LABEL_25;
  }
  v16 = *v13;
  LOBYTE(v11) = 0;
  if ( !*v13 )
    goto LABEL_24;
  while ( (int)PspFindVsmEnclaveThread(a2, v16, v11) >= 0 )
  {
    v17 = (_QWORD *)v16[1];
    if ( !v17 )
    {
      LOBYTE(v11) = 1;
      goto LABEL_24;
    }
LABEL_22:
    v16 = v17;
  }
  v17 = (_QWORD *)*v16;
  if ( *v16 )
    goto LABEL_22;
  LOBYTE(v11) = 0;
LABEL_24:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v16, v11, v3);
  v14 = 0LL;
LABEL_25:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  KeLeaveCriticalRegion();
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return 0LL;
}
