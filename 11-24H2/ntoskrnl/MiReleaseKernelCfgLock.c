/*
 * XREFs of MiReleaseKernelCfgLock @ 0x140A3E41C
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140A3DD40 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A3E36C (MiAllocateKernelCfgBitmapPageTables.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

$81B80DCEA5A02D890AB7B2872B48AC01 *MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  $81B80DCEA5A02D890AB7B2872B48AC01 *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D720, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D720);
  result = ($81B80DCEA5A02D890AB7B2872B48AC01 *)KeAbPostRelease((ULONG_PTR)&qword_140E2D720);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($81B80DCEA5A02D890AB7B2872B48AC01 *)KiCheckForKernelApcDelivery(v3, v2);
  }
  return result;
}
