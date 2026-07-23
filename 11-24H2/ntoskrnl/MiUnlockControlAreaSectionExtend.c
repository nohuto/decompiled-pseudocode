/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x14043D6F4
 * Callers:
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiBuildWakeList @ 0x14043D7C0 (MiBuildWakeList.c)
 */

void __fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // ebp
  __int64 v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rdi
  unsigned __int8 v8; // r11
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rcx

  v2 = *(_DWORD *)(a2 + 8);
  KeAbPostRelease(a1);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v5 = MiBuildWakeList(a1, *(unsigned int *)(a2 + 8));
  v6 = (_DWORD *)(a1 + 72);
  v7 = v5;
  MiReleaseSpinLockExclusive(v6, v8);
  if ( v7 )
  {
    do
    {
      v9 = *(_QWORD *)v7;
      if ( v7 != a2 )
        KeSignalGate((volatile signed __int32 *)(v7 + 16), 1LL);
      v7 = v9;
    }
    while ( v9 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 == 16 )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    KeLeaveCriticalRegionThread();
  }
}
