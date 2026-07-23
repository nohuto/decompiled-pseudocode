/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x14098FEE0
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall EtwpGetSidExtendedHeaderItem(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebp
  _KPROCESS *Process; // r14
  ULONG v5; // edx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  int v8; // r14d
  struct _KTHREAD *v9; // rax
  unsigned __int8 *v10; // rdx
  unsigned int v11; // ebp
  _KPROCESS *v12; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v14; // rtt
  struct _KTHREAD *v16; // r12
  char *v17; // rbx
  _OWORD Src[4]; // [rsp+30h] [rbp-88h] BYREF
  int v19; // [rsp+70h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  v19 = 0;
  v3 = 0;
  memset(Src, 0, sizeof(Src));
  Process = CurrentThread->ApcState.Process;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 )
    goto LABEL_2;
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v17 = (char *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CurrentThread[1].WaitBlockList,
      0,
      v17,
      (__int64)&CurrentThread[1].WaitBlockList);
  if ( v17 )
    v17[10] = 1;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v7 = *(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL;
    ObfReferenceObjectWithTag((PVOID)v7, 0x74726853u);
    v3 = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
  }
  else
  {
    v7 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
  KeLeaveCriticalRegionThread();
  if ( !v7 )
  {
LABEL_2:
    v5 = 1953654867;
    v6 = (__int64)Process;
LABEL_3:
    v7 = PsReferencePrimaryTokenWithTag(v6, v5);
    v8 = 1;
    goto LABEL_4;
  }
  v8 = 2;
  if ( v3 < 2 )
  {
    ObfDereferenceObjectWithTag((PVOID)v7, 0x746C6644u);
    v6 = (__int64)CurrentThread->Process;
    v5 = 1953261124;
    goto LABEL_3;
  }
LABEL_4:
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 48), 1u);
  v10 = **(unsigned __int8 ***)(v7 + 152);
  v11 = 4 * v10[1] + 8;
  if ( v11 <= 0x44 )
    memmove(Src, v10, v11);
  ExReleaseResourceLite(*(PERESOURCE *)(v7 + 48));
  KeLeaveCriticalRegionThread();
  if ( v8 == 1 )
  {
    v12 = CurrentThread->Process;
    _m_prefetchw(&v12[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v12[1].ActiveProcessors;
    while ( (v7 ^ ActiveProcessors) < 0xF )
    {
      v14 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v12[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
      if ( v14 == ActiveProcessors )
      {
        if ( ObpTraceFlags )
          ObpPushStackInfo(v7 - 48, 0, 1u, 0x74726853u);
        goto LABEL_12;
      }
    }
  }
  ObfDereferenceObjectWithTag((PVOID)v7, 0x74726853u);
LABEL_12:
  *(_DWORD *)(a1 + 2) = 2;
  *(_WORD *)(a1 + 6) = v11;
  *(_WORD *)a1 = (v11 + 15) & 0xFFF8;
  memmove((void *)(a1 + 8), Src, v11);
  return memset_0((void *)(a1 + v11 + 8), 0, ((v11 + 15) & 0xFFFFFFF8) - (v11 + 8));
}
