/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x140445544
 * Callers:
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     MiBuildWakeList @ 0x140445610 (MiBuildWakeList.c)
 */

_QWORD *__fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // ebp
  __int64 v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rdi
  unsigned __int8 v8; // r11
  _QWORD *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rcx

  v2 = *(_DWORD *)(a2 + 8);
  KeAbPostRelease(a1);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v5 = MiBuildWakeList(a1, *(unsigned int *)(a2 + 8));
  v6 = (_DWORD *)(a1 + 72);
  v7 = v5;
  result = (_QWORD *)MiReleaseSpinLockExclusive(v6, v8);
  if ( v7 )
  {
    do
    {
      v11 = *(_QWORD *)v7;
      if ( v7 != a2 )
        result = (_QWORD *)KeSignalGate((_DWORD *)(v7 + 16), 1LL);
      v7 = v11;
    }
    while ( v11 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 != 16 )
    return (_QWORD *)KeLeaveCriticalRegionThread();
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery((__int64)CurrentThread, v10);
  }
  return result;
}
