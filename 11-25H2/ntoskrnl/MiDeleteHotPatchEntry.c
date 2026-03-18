/*
 * XREFs of MiDeleteHotPatchEntry @ 0x1407E26B0
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140AAD48C (MiDeleteVadHotPatchState.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiGetProcessHotPatchContext @ 0x1407E2C38 (MiGetProcessHotPatchContext.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteHotPatchEntry(char *P)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  void *v4; // rcx
  __int64 ProcessHotPatchContext; // rax
  unsigned __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rbp
  _QWORD *v9; // rcx
  PVOID *v10; // rax
  bool v11; // zf

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
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
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
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  ExFreePoolWithTag(P, 0);
}
