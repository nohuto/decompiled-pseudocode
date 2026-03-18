/*
 * XREFs of RtlRemoveDynamicUserFunctionTable @ 0x14045C6DC
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicUserFunctionTable(__int64 a1)
{
  unsigned int v1; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r14
  volatile signed __int64 *p_SwapListEntry; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  unsigned int *Blink; // rdi
  unsigned int v8; // edx
  unsigned int i; // ecx
  __int64 v10; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v12; // rcx
  unsigned int v14; // r14d
  unsigned __int64 v15; // [rsp+58h] [rbp+10h]
  __int64 v16; // [rsp+60h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = *(_QWORD *)(a1 + 48);
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 - v15 >= 0xFFFFFFFF )
    return 3221225621LL;
  v1 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  p_SwapListEntry = (volatile signed __int64 *)&Process[3].SwapListEntry;
  v5 = KeAbPreAcquire((__int64)&Process[3].SwapListEntry, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[3].SwapListEntry, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&Process[3].SwapListEntry,
      (__int64)v5,
      (__int64)&Process[3].SwapListEntry);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  Blink = (unsigned int *)Process[3].ReadyListHead.Blink;
  if ( Blink )
  {
    v8 = *Blink;
    for ( i = 1; i < v8; ++i )
    {
      if ( *(_QWORD *)&Blink[6 * i + 6] >= v15 )
      {
        if ( *(_QWORD *)&Blink[6 * i + 6] == v15 && Blink[6 * i + 8] == (_DWORD)v16 - (_DWORD)v15 )
        {
          v14 = v8 - 1;
          if ( i != v8 - 1 )
            memmove(&Blink[6 * i + 4], &Blink[4 * i + 10 + 2 * i], 24LL * (v8 - i - 1));
          v1 = 0;
          *Blink = v14;
        }
        break;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(p_SwapListEntry, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(p_SwapListEntry);
  KeAbPostRelease((ULONG_PTR)p_SwapListEntry);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v12 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v12->ApcState.ApcListHead[0].Flink != v12 )
      KiCheckForKernelApcDelivery((__int64)v12, v10);
  }
  return v1;
}
