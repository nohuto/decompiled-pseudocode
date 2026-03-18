/*
 * XREFs of MiUnlockFileExtentsExclusive @ 0x1407F0688
 * Callers:
 *     MiInsertCopyExtents @ 0x14067B2F0 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14067B6F4 (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x1407F02DC (MiDeleteFileExtentList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

$81B80DCEA5A02D890AB7B2872B48AC01 *MiUnlockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  $81B80DCEA5A02D890AB7B2872B48AC01 *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D798, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D798);
  result = ($81B80DCEA5A02D890AB7B2872B48AC01 *)KeAbPostRelease((ULONG_PTR)&qword_140E2D798);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($81B80DCEA5A02D890AB7B2872B48AC01 *)KiCheckForKernelApcDelivery(v3, v2);
  }
  return result;
}
