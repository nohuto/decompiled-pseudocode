/*
 * XREFs of MmGetPageFileForCrashDump @ 0x1407DFC40
 * Callers:
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MmGetPageFileForCrashDump(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // r14
  __int64 *v5; // rax
  signed __int8 v6; // cf
  __int64 *v7; // rdi
  char *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  bool v11; // zf

  *a1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((__int64)qword_140E38E00, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)qword_140E38E00, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(qword_140E38E00, v5, (__int64)qword_140E38E00);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( Count )
  {
    v8 = (char *)&unk_140E3D220;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140E38E00, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140E38E00);
  KeAbPostRelease((ULONG_PTR)qword_140E38E00);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v3;
}
