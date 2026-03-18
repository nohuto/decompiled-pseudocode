/*
 * XREFs of FsRtlInitializeDedupChange @ 0x14070CB70
 * Callers:
 *     FsRtlInitSystem @ 0x140C18D7C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403655E0 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeDedupChange()
{
  qword_140F8E208 = (__int64)&FsRtlDedupChangeData;
  FsRtlDedupChangeData = &FsRtlDedupChangeData;
  return ExInitializeResourceLite(&Resource);
}
