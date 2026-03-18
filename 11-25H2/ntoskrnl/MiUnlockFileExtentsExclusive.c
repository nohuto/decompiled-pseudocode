/*
 * XREFs of MiUnlockFileExtentsExclusive @ 0x1407E07E8
 * Callers:
 *     MiInsertCopyExtents @ 0x14066FB30 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14066FF34 (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x1407E043C (MiDeleteFileExtentList.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

$727077A9B6E167EAE1398C74674DC5A5 *MiUnlockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  $727077A9B6E167EAE1398C74674DC5A5 *result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D558, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D558);
  result = ($727077A9B6E167EAE1398C74674DC5A5 *)KeAbPostRelease((ULONG_PTR)&qword_140E2D558);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($727077A9B6E167EAE1398C74674DC5A5 *)KiCheckForKernelApcDelivery();
  }
  return result;
}
