/*
 * XREFs of MmGetPageFileForCrashDump @ 0x1407EFAE0
 * Callers:
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall MmGetPageFileForCrashDump(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // r14
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rdi
  char *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v13; // rcx

  *a1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((__int64)qword_140E39040, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)qword_140E39040, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(qword_140E39040, (__int64)v5, (__int64)qword_140E39040);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( Count )
  {
    v8 = (char *)&unk_140E3D460;
    v9 = Count;
    do
    {
      v10 = *(_QWORD *)v8;
      if ( (*(_WORD *)(*(_QWORD *)v8 + 172LL) & 0x850) == 0 && *(unsigned int *)(v10 + 8) > v4 )
      {
        v3 = *(_QWORD *)(v10 + 192);
        v4 = *(unsigned int *)(v10 + 8);
        if ( a1 )
          *a1 = *(_OWORD *)(v10 + 64);
      }
      v8 += 8;
      --v9;
    }
    while ( v9 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140E39040, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140E39040);
  KeAbPostRelease((ULONG_PTR)qword_140E39040);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v13 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v13->ApcState.ApcListHead[0].Flink != v13 )
      KiCheckForKernelApcDelivery((__int64)v13, v11);
  }
  return v3;
}
