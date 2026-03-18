/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x140447AFC
 * Callers:
 *     MmExtendSection @ 0x14093ADB0 (MmExtendSection.c)
 * Callees:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x140447BD0 (MiBuildWakeList.c)
 */

_QWORD *__fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // ebp
  __int64 v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rdi
  unsigned __int8 v8; // r11
  _QWORD *result; // rax
  __int64 v10; // rbx
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
      v10 = *(_QWORD *)v7;
      if ( v7 != a2 )
        result = (_QWORD *)KeSignalGate((_DWORD *)(v7 + 16), 1);
      v7 = v10;
    }
    while ( v10 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 != 16 )
    return (_QWORD *)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
