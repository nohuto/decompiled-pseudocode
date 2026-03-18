/*
 * XREFs of MiReleaseKernelCfgLock @ 0x140A3A0FC
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140A39A20 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A3A04C (MiAllocateKernelCfgBitmapPageTables.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

$727077A9B6E167EAE1398C74674DC5A5 *MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  $727077A9B6E167EAE1398C74674DC5A5 *result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D4E0);
  result = ($727077A9B6E167EAE1398C74674DC5A5 *)KeAbPostRelease((ULONG_PTR)&qword_140E2D4E0);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($727077A9B6E167EAE1398C74674DC5A5 *)KiCheckForKernelApcDelivery();
  }
  return result;
}
