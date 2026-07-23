/*
 * XREFs of MiDereferenceExtendInfo @ 0x14047FA5C
 * Callers:
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rbx
  _DWORD *v8; // rbx
  bool v9; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (char *)KeAbPreAcquire((__int64)&qword_140E2CD50, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CD50, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2CD50, v5, (__int64)&qword_140E2CD50);
  if ( v7 )
    v7[10] = 1;
  v8 = *(_DWORD **)(a1 + 120);
  v9 = v8[2]-- == 1;
  if ( v9 )
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  else
    v8 = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CD50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CD50);
  KeAbPostRelease((ULONG_PTR)&qword_140E2CD50);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
