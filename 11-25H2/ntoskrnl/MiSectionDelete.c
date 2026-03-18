/*
 * XREFs of MiSectionDelete @ 0x140A1D090
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiDereferenceControlAreaBySection @ 0x14044FC78 (MiDereferenceControlAreaBySection.c)
 *     MiLogSectionObjectEvent @ 0x1407DC3F8 (MiLogSectionObjectEvent.c)
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v10; // rax
  signed __int8 v11; // cf
  __int64 *v12; // rbp
  bool v13; // zf

  v1 = *(_WORD *)(a1 + 58) & 1;
  v4 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v3 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((__int64)&qword_140E2C9D0, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2C9D0, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&qword_140E2C9D0, v10, (__int64)&qword_140E2C9D0);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2C9C8, a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2C9D0);
    KeAbPostRelease((ULONG_PTR)&qword_140E2C9D0);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    ObfDereferenceObjectWithTag((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL), 0x43536D4Du);
  v6 = *(_DWORD *)(v4 + 56);
  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 && (v6 & 0x20) == 0 && *(_QWORD *)(v4 + 64) )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  if ( (v6 & 0x8000000) != 0 )
  {
    v8 = (*(_DWORD *)(a1 + 60) >> 12) & 0x7FFFF;
    if ( (_DWORD)v8 == 0x7FFFF )
      v8 = 0xFFFFFFFFLL;
    MiDereferencePerSessionProtos(v4, v8);
  }
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 && !*(_QWORD *)(v4 + 64) )
    MiLogSectionObjectEvent(a1);
  return MiDereferenceControlAreaBySection(v4, v1);
}
