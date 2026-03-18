/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x1407017C8
 * Callers:
 *     FsRtlInitSystem @ 0x140C07CDC (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140F8D9C8 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = &FsRtlTieringHeatData;
  return ExInitializeResourceLite(&stru_140F8D9D0);
}
