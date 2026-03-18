/*
 * XREFs of MiDereferenceExtendInfo @ 0x1404844BC
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rbx
  _DWORD *v8; // rbx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((__int64)&qword_140E2CC10, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CC10, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2CC10, (__int64)v5, (__int64)&qword_140E2CC10);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = *(_DWORD **)(a1 + 120);
  v9 = v8[2]-- == 1;
  if ( v9 )
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  else
    v8 = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CC10);
  KeAbPostRelease((ULONG_PTR)&qword_140E2CC10);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11, v10);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
