/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x140441C4C
 * Callers:
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

$81B80DCEA5A02D890AB7B2872B48AC01 *__fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v2; // rbx
  $81B80DCEA5A02D890AB7B2872B48AC01 *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (signed __int64 *)(a1 + 104);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = ($81B80DCEA5A02D890AB7B2872B48AC01 *)KeAbPostRelease((ULONG_PTR)v2);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($81B80DCEA5A02D890AB7B2872B48AC01 *)KiCheckForKernelApcDelivery(v5, v4);
  }
  return result;
}
