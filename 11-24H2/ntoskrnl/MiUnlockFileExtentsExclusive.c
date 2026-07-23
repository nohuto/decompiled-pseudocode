/*
 * XREFs of MiUnlockFileExtentsExclusive @ 0x1407F0C58
 * Callers:
 *     MiInsertCopyExtents @ 0x14067C4D0 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14067C8D4 (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x1407F08AC (MiDeleteFileExtentList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

$727077A9B6E167EAE1398C74674DC5A5 *MiUnlockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  $727077A9B6E167EAE1398C74674DC5A5 *result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D8D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D8D8);
  result = ($727077A9B6E167EAE1398C74674DC5A5 *)KeAbPostRelease((ULONG_PTR)&qword_140E2D8D8);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($727077A9B6E167EAE1398C74674DC5A5 *)KiCheckForKernelApcDelivery();
  }
  return result;
}
