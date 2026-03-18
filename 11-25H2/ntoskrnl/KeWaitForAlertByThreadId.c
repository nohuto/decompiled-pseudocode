/*
 * XREFs of KeWaitForAlertByThreadId @ 0x140305CB0
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     RtlpRunOnceWaitForInit @ 0x140778058 (RtlpRunOnceWaitForInit.c)
 *     NtWaitForAlertByThreadId @ 0x1409E4590 (NtWaitForAlertByThreadId.c)
 * Callees:
 *     KiCheckWaitNext @ 0x14027DB60 (KiCheckWaitNext.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiBeginThreadWait @ 0x1403059F0 (KiBeginThreadWait.c)
 *     KiAbUmPostWait @ 0x140305F28 (KiAbUmPostWait.c)
 *     KiAbUmPreWait @ 0x140306058 (KiAbUmPreWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v7; // r15d
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r9
  int v11; // r8d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 ThreadTimerDelay; // rdx
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v18 = 0LL;
  v19 = 0;
  v7 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    return 257;
  if ( a2 && !*a2 )
    return 258;
  if ( a3 && a1 == 1 )
  {
    KiAbUmPreWait(CurrentThread, a3);
    v7 = 1;
  }
  v8 = KiCheckWaitNext((struct _KPRCB *)CurrentThread, (__int64)a2, 0LL, &v18, &v19);
  while ( 1 )
  {
    v9 = KiBeginThreadWait((ULONG_PTR)CurrentThread, a1, 37, 0, v8);
    if ( v9 )
      break;
    if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    {
      v9 = 257;
LABEL_29:
      CurrentThread->WaitReason = 0;
      KiFastExitThreadWait(KeGetCurrentPrcb(), (ULONG_PTR)CurrentThread, v8);
      break;
    }
    v10 = v18;
    v11 = v19;
    v12 = v18;
    if ( v19 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v13 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v12 = v18;
      v10 = v18;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v12 = v18 + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v19 )
        goto LABEL_15;
      if ( !v18 )
        goto LABEL_33;
      v13 = MEMORY[0xFFFFF78000000014];
      v10 = v18;
    }
    if ( v13 > v12 )
    {
LABEL_33:
      v9 = 258;
      goto LABEL_29;
    }
    v11 = v19;
LABEL_15:
    CurrentThread->WaitBlock[0].Object = a3;
    CurrentThread->WaitBlockFill4[17] = 5;
    CurrentThread->WaitBlockCount = 1;
    v9 = KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, v11, v10, v8, 0LL);
    CurrentThread->WaitReason = 0;
    v8 = 0;
    if ( v9 != 256 )
      break;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v14);
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( v7 )
    KiAbUmPostWait(CurrentThread, a3);
  return v9;
}
