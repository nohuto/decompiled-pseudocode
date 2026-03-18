/*
 * XREFs of MiInsertChildVads @ 0x1409C407C
 * Callers:
 *     MiAllocateChildVads @ 0x1409C2580 (MiAllocateChildVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     MiCommitPageTableRangesForVad @ 0x1404050D8 (MiCommitPageTableRangesForVad.c)
 *     MiUpControlAreaRefs @ 0x1404172CC (MiUpControlAreaRefs.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiDeletePartialCloneVads @ 0x1408003E4 (MiDeletePartialCloneVads.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, __int64 a2)
{
  int inserted; // edi
  __int64 v5; // rsi
  int v6; // eax
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v9; // rax
  signed __int8 v10; // cf
  _QWORD *v11; // r14
  bool v12; // zf
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _OWORD v17[3]; // [rsp+20h] [rbp-78h] BYREF

  inserted = 0;
  memset(v17, 0, sizeof(v17));
  KiStackAttachProcess(a1, 0, (__int64)v17);
  while ( 1 )
  {
    v5 = a2;
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
      v12 = (*(_DWORD *)(a2 + 48) & 0x200000) == 0;
LABEL_17:
      if ( v12 )
        MiUpControlAreaRefs(a2, 0);
LABEL_19:
      MiDeletePartialCloneVads((_QWORD *)a2);
      break;
    }
    inserted = MiInsertVadCharges(a2, (__int64)a1);
    v6 = *(_DWORD *)(a2 + 48) & 0x200000;
    if ( inserted < 0 )
    {
      v12 = v6 == 0;
      goto LABEL_17;
    }
    a2 = *(_QWORD *)a2;
    if ( !v6 )
    {
      v7 = *(void **)(v5 + 128);
      if ( v7 )
        ObfReferenceObjectWithTag(v7, 0x63536D4Du);
    }
    if ( (*(_DWORD *)(v5 + 48) & 0x200000) == 0 && *(__int64 *)(v5 + 120) < 0 )
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
      v14 = *(_QWORD *)(***(_QWORD ***)(v5 + 72) + 32LL);
      ++*(_DWORD *)(v14 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CC10);
      KeAbPostRelease((ULONG_PTR)&qword_140E2CC10);
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v16, v15);
      }
    }
    *(_QWORD *)(v5 + 16) = -2LL;
    MiInsertVad(v5, (__int64)a1, 0);
  }
  KiUnstackDetachProcess((__int64)v17, 0);
  return (unsigned int)inserted;
}
