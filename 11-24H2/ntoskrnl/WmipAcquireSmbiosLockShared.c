/*
 * XREFs of WmipAcquireSmbiosLockShared @ 0x140A421E4
 * Callers:
 *     WmipFindSMBiosStructure @ 0x1407A4174 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosTableData @ 0x140A42038 (WmipGetSMBiosTableData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN WmipAcquireSmbiosLockShared()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
}
