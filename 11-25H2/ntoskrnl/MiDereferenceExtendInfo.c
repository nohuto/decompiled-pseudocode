/*
 * XREFs of MiDereferenceExtendInfo @ 0x140483CAC
 * Callers:
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v5; // rax
  signed __int8 v6; // cf
  __int64 *v7; // rbx
  _DWORD *v8; // rbx
  bool v9; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((__int64)&qword_140E2C9D0, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2C9D0, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2C9D0, v5, (__int64)&qword_140E2C9D0);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = *(_DWORD **)(a1 + 120);
  v9 = v8[2]-- == 1;
  if ( v9 )
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  else
    v8 = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2C9D0);
  KeAbPostRelease((ULONG_PTR)&qword_140E2C9D0);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
