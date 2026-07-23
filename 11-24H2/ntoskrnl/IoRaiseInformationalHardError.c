/*
 * XREFs of IoRaiseInformationalHardError @ 0x1404A88B0
 * Callers:
 *     MiCauseOverCommitPopup @ 0x14047AF98 (MiCauseOverCommitPopup.c)
 *     DifIoRaiseInformationalHardErrorWrapper @ 0x1406284B0 (DifIoRaiseInformationalHardErrorWrapper.c)
 *     FsRtlLogCcFlushError @ 0x140AAD000 (FsRtlLogCcFlushError.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  bool v6; // zf
  __int64 Pool2; // rax
  _QWORD *v8; // rbx
  __int64 v10; // rax
  void *v11; // rax
  void *v12; // rcx
  KIRQL v13; // si
  const void *v14; // rcx
  __int64 i; // rdi
  const void *v16; // rcx
  _QWORD *v17; // rax

  if ( !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  v6 = Thread
     ? (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) == 0
     : (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10) == 0;
  if ( !v6
    || ErrorStatus == -1073741283
    || ErrorStatus == -1073741500
    || ErrorStatus == 1073741848
    || !Thread && stru_140F8C978.Header.SignalState >= 25 )
  {
    return 0;
  }
  if ( dword_140F8C99C > 25 )
    return 0;
  Pool2 = ExAllocatePool2(0x40uLL, 0x28uLL, 0x72456F49u);
  v8 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_DWORD *)(Pool2 + 16) = ErrorStatus;
  if ( String && String->Length )
  {
    v11 = (void *)ExAllocatePool2(0x40uLL, String->Length, 0x72456F49u);
    if ( !v11 )
    {
LABEL_41:
      ExFreePoolWithTag(v8, 0);
      return 0;
    }
    *((_WORD *)v8 + 12) = String->Length;
    *((_WORD *)v8 + 13) = String->Length;
    v8[4] = v11;
    memmove(v11, String->Buffer, String->Length);
  }
  if ( !Thread )
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C970);
    if ( stru_140F8C978.Header.SignalState < 25
      && (!IopCurrentHardError
       || *((_DWORD *)v8 + 4) != *(_DWORD *)(IopCurrentHardError + 16)
       || ((v14 = (const void *)v8[4]) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
       && (*((_WORD *)v8 + 12) != *(_WORD *)(IopCurrentHardError + 24)
        || memcmp(v14, *(const void **)(IopCurrentHardError + 32), *((unsigned __int16 *)v8 + 12)))) )
    {
      for ( i = qword_140F8C960; (__int64 *)i != &qword_140F8C960; i = *(_QWORD *)i )
      {
        if ( *((_DWORD *)v8 + 4) == *(_DWORD *)(i + 16) )
        {
          v16 = (const void *)v8[4];
          if ( !v16 && !*(_QWORD *)(i + 32) )
            goto LABEL_40;
          if ( *((_WORD *)v8 + 12) == *(_WORD *)(i + 24)
            && !memcmp(v16, *(const void **)(i + 32), *((unsigned __int16 *)v8 + 12)) )
          {
            goto LABEL_40;
          }
        }
      }
      v17 = (_QWORD *)qword_140F8C968;
      if ( *(__int64 **)qword_140F8C968 != &qword_140F8C960 )
        __fastfail(3u);
      *v8 = &qword_140F8C960;
      v8[1] = v17;
      *v17 = v8;
      qword_140F8C968 = (__int64)v8;
      KeReleaseSemaphore(&stru_140F8C978, 0, 1, 0);
      if ( !byte_140F8C998 )
      {
        byte_140F8C998 = 1;
        ExQueueWorkItem(&IopHardError, DelayedWorkQueue);
      }
      KeReleaseSpinLock(&qword_140F8C970, v13);
      return 1;
    }
LABEL_40:
    KeReleaseSpinLock(&qword_140F8C970, v13);
    goto LABEL_23;
  }
  v10 = ExAllocatePool2(0x40uLL, 0x58uLL, 0x4350414Bu);
  if ( !v10 )
  {
LABEL_23:
    v12 = (void *)v8[4];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_41;
  }
  _InterlockedIncrement(&dword_140F8C99C);
  *(_WORD *)v10 = 18;
  *(_QWORD *)(v10 + 32) = PspUserApcKernelRoutine;
  *(_BYTE *)(v10 + 2) = 88;
  *(_QWORD *)(v10 + 48) = IopRaiseInformationalHardError;
  *(_WORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 8) = Thread;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_QWORD *)(v10 + 56) = v8;
  *(_BYTE *)(v10 + 82) = 0;
  KeInsertQueueApc(v10, 0LL, 0LL, 0);
  return 1;
}
