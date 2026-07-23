/*
 * XREFs of RtlRemoveDynamicUserFunctionTable @ 0x1404518DC
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicUserFunctionTable(__int64 a1)
{
  unsigned int v1; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r14
  volatile signed __int64 *p_SwapListEntry; // rbx
  char *v5; // rax
  char *v6; // rdi
  unsigned int *Blink; // rdi
  unsigned int v8; // edx
  unsigned int i; // ecx
  unsigned int v12; // r14d
  unsigned __int64 v13; // [rsp+58h] [rbp+10h]
  __int64 v14; // [rsp+60h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 - v13 >= 0xFFFFFFFF )
    return 3221225621LL;
  v1 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  p_SwapListEntry = (volatile signed __int64 *)&Process[3].SwapListEntry;
  v5 = (char *)KeAbPreAcquire((__int64)&Process[3].SwapListEntry, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[3].SwapListEntry, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Process[3].SwapListEntry, v5, (__int64)&Process[3].SwapListEntry);
  if ( v6 )
    v6[10] = 1;
  Blink = (unsigned int *)Process[3].ReadyListHead.Blink;
  if ( Blink )
  {
    v8 = *Blink;
    for ( i = 1; i < v8; ++i )
    {
      if ( *(_QWORD *)&Blink[6 * i + 6] >= v13 )
      {
        if ( *(_QWORD *)&Blink[6 * i + 6] == v13 && Blink[6 * i + 8] == (_DWORD)v14 - (_DWORD)v13 )
        {
          v12 = v8 - 1;
          if ( i != v8 - 1 )
            memmove(&Blink[6 * i + 4], &Blink[4 * i + 10 + 2 * i], 24LL * (v8 - i - 1));
          v1 = 0;
          *Blink = v12;
        }
        break;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(p_SwapListEntry, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(p_SwapListEntry);
  KeAbPostRelease((ULONG_PTR)p_SwapListEntry);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v1;
}
