/*
 * XREFs of FsRtlInitializeDedupChange @ 0x140700C90
 * Callers:
 *     FsRtlInitSystem @ 0x140C07CDC (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeDedupChange()
{
  qword_140F8DA48 = (__int64)&FsRtlDedupChangeData;
  FsRtlDedupChangeData = &FsRtlDedupChangeData;
  return ExInitializeResourceLite(&Resource);
}
