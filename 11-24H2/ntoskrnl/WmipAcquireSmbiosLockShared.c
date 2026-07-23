/*
 * XREFs of WmipAcquireSmbiosLockShared @ 0x140A37AC4
 * Callers:
 *     WmipFindSMBiosStructure @ 0x1407A4284 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosTableData @ 0x140A37918 (WmipGetSMBiosTableData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN WmipAcquireSmbiosLockShared()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
}
