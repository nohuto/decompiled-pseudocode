/*
 * XREFs of MiSectionDelete @ 0x140A24310
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiDereferenceControlAreaBySection @ 0x140451548 (MiDereferenceControlAreaBySection.c)
 *     MiLogSectionObjectEvent @ 0x1407EC298 (MiLogSectionObjectEvent.c)
 *     MiDereferencePerSessionProtos @ 0x140A24458 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v9; // rax
  signed __int8 v10; // cf
  _QWORD *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf

  v1 = *(_WORD *)(a1 + 58) & 1;
  v4 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v3 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire((__int64)&qword_140E2CC10, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CC10, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140E2CC10, (__int64)v9, (__int64)&qword_140E2CC10);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2CC08, a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CC10);
    KeAbPostRelease((ULONG_PTR)&qword_140E2CC10);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12);
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
