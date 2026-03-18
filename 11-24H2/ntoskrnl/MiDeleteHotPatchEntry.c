/*
 * XREFs of MiDeleteHotPatchEntry @ 0x1407F2550
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140AB2524 (MiDeleteVadHotPatchState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiGetProcessHotPatchContext @ 0x1407F2AD8 (MiGetProcessHotPatchContext.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteHotPatchEntry(char *P)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  void *v4; // rcx
  __int64 ProcessHotPatchContext; // rax
  unsigned __int64 *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // rcx
  PVOID *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  RtlFreeAnsiString((PUNICODE_STRING)(P + 40));
  v4 = (void *)*((_QWORD *)P + 3);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( *(_QWORD *)P )
  {
    ProcessHotPatchContext = MiGetProcessHotPatchContext(Process, 0LL);
    --CurrentThread->SpecialApcDisable;
    v6 = (unsigned __int64 *)(ProcessHotPatchContext + 16);
    v7 = KeAbPreAcquire(ProcessHotPatchContext + 16, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, (__int64)v7, (__int64)v6);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v9 = *(_QWORD **)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v10 = (PVOID *)*((_QWORD *)P + 1), *v10 != P) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v12, v11);
  }
  ExFreePoolWithTag(P, 0);
}
