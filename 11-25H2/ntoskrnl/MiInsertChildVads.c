/*
 * XREFs of MiInsertChildVads @ 0x140A40F24
 * Callers:
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiCommitPageTableRangesForVad @ 0x140489444 (MiCommitPageTableRangesForVad.c)
 *     MiUpControlAreaRefs @ 0x1404B95EC (MiUpControlAreaRefs.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiDeletePartialCloneVads @ 0x1407F052C (MiDeletePartialCloneVads.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, __int64 a2)
{
  int inserted; // edi
  __int64 v5; // rsi
  int v6; // eax
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v9; // rax
  signed __int8 v10; // cf
  __int64 *v11; // r14
  bool v12; // zf
  __int64 v14; // rcx
  _OWORD v15[3]; // [rsp+20h] [rbp-78h] BYREF

  inserted = 0;
  memset(v15, 0, sizeof(v15));
  KiStackAttachProcess(a1, 0, (__int64)v15);
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
      v9 = KeAbPreAcquire((__int64)&qword_140E2C9D0, 0LL);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2C9D0, 0LL);
      v11 = v9;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&qword_140E2C9D0, v9, (__int64)&qword_140E2C9D0);
      if ( v11 )
        *((_BYTE *)v11 + 10) = 1;
      v14 = *(_QWORD *)(***(_QWORD ***)(v5 + 72) + 32LL);
      ++*(_DWORD *)(v14 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2C9D0);
      KeAbPostRelease((ULONG_PTR)&qword_140E2C9D0);
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    *(_QWORD *)(v5 + 16) = -2LL;
    MiInsertVad(v5, (__int64)a1, 0);
  }
  KiUnstackDetachProcess((__int64)v15, 0LL);
  return (unsigned int)inserted;
}
