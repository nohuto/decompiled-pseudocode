/*
 * XREFs of FsRtlInitializeDedupChange @ 0x14070A710
 * Callers:
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeDedupChange()
{
  qword_140F8E3E8 = (__int64)&FsRtlDedupChangeData;
  FsRtlDedupChangeData = &FsRtlDedupChangeData;
  return ExInitializeResourceLite(&Resource);
}
