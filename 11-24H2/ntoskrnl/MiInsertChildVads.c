/*
 * XREFs of MiInsertChildVads @ 0x14091A854
 * Callers:
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiCommitPageTableRangesForVad @ 0x1403C7634 (MiCommitPageTableRangesForVad.c)
 *     MiUpControlAreaRefs @ 0x1404B355C (MiUpControlAreaRefs.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, __int64 a2)
{
  int inserted; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // r9
  int v9; // eax
  void *v10; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  char *v12; // rax
  signed __int8 v13; // cf
  char *v14; // r14
  bool v15; // zf
  __int64 v17; // rcx
  _OWORD v18[3]; // [rsp+20h] [rbp-78h] BYREF

  inserted = 0;
  memset(v18, 0, sizeof(v18));
  KiStackAttachProcess(a1, 0, (__int64)v18);
  while ( 1 )
  {
    v7 = a2;
    if ( !a2 )
      break;
    if ( (*(_DWORD *)(a2 + 48) & 0x200000) == 0 )
    {
      inserted = MiUpControlAreaRefs(a2, 1);
      if ( inserted < 0 )
        goto LABEL_19;
    }
    inserted = MiCommitPageTableRangesForVad(a2);
    if ( inserted < 0 )
    {
      v15 = (*(_DWORD *)(a2 + 48) & 0x200000) == 0;
LABEL_17:
      if ( v15 )
        MiUpControlAreaRefs(a2, 0);
LABEL_19:
      MiDeletePartialCloneVads((_QWORD *)a2);
      break;
    }
    inserted = MiInsertVadCharges(a2, (__int64)a1);
    v9 = *(_DWORD *)(a2 + 48) & 0x200000;
    if ( inserted < 0 )
    {
      v15 = v9 == 0;
      goto LABEL_17;
    }
    a2 = *(_QWORD *)a2;
    if ( !v9 )
    {
      v10 = *(void **)(v7 + 128);
      if ( v10 )
        ObfReferenceObjectWithTag(v10, 0x63536D4Du);
    }
    if ( (*(_DWORD *)(v7 + 48) & 0x200000) == 0 && *(__int64 *)(v7 + 120) < 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v12 = (char *)KeAbPreAcquire((__int64)&qword_140E2CD50, 0LL);
      v13 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CD50, 0LL);
      v14 = v12;
      if ( v13 )
        ExfAcquirePushLockExclusiveEx(&qword_140E2CD50, v12, (__int64)&qword_140E2CD50);
      if ( v14 )
        v14[10] = 1;
      v17 = *(_QWORD *)(***(_QWORD ***)(v7 + 72) + 32LL);
      ++*(_DWORD *)(v17 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CD50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CD50);
      KeAbPostRelease((ULONG_PTR)&qword_140E2CD50);
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    *(_QWORD *)(v7 + 16) = -2LL;
    MiInsertVad(v7, (__int64)a1, 0LL, v8);
  }
  KiUnstackDetachProcess((__int64)v18, 0, v5, v6);
  return (unsigned int)inserted;
}
