/*
 * XREFs of MmGetPageFileForCrashDump @ 0x1407F00B0
 * Callers:
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MmGetPageFileForCrashDump(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // r14
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rdi
  char *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  bool v11; // zf

  *a1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v5 = (char *)KeAbPreAcquire((__int64)qword_140E39180, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)qword_140E39180, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(qword_140E39180, v5, (__int64)qword_140E39180);
  if ( v7 )
    v7[10] = 1;
  if ( Count )
  {
    v8 = (char *)&unk_140E3D5A0;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140E39180, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140E39180);
  KeAbPostRelease((ULONG_PTR)qword_140E39180);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v3;
}
