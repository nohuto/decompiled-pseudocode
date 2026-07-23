/*
 * XREFs of MiSectionDelete @ 0x140A186E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiDereferenceControlAreaBySection @ 0x1404468F8 (MiDereferenceControlAreaBySection.c)
 *     MiLogSectionObjectEvent @ 0x1407EC868 (MiLogSectionObjectEvent.c)
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rsi
  char *v9; // rax
  signed __int8 v10; // cf
  char *v11; // rbp
  bool v12; // zf

  v1 = *(_WORD *)(a1 + 58) & 1;
  v4 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v3 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = (char *)KeAbPreAcquire((__int64)&qword_140E2CD50, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CD50, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140E2CD50, v9, (__int64)&qword_140E2CD50);
    if ( v11 )
      v11[10] = 1;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2CD48, a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CD50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CD50);
    KeAbPostRelease((ULONG_PTR)&qword_140E2CD50);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    ObfDereferenceObjectWithTag((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL), 0x43536D4Du);
  v6 = *(_DWORD *)(v4 + 56);
  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 && (v6 & 0x20) == 0 && *(_QWORD *)(v4 + 64) )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  if ( (v6 & 0x8000000) != 0 )
    MiDereferencePerSessionProtos(v4);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 && !*(_QWORD *)(v4 + 64) )
    MiLogSectionObjectEvent(a1);
  return MiDereferenceControlAreaBySection(v4, v1);
}
