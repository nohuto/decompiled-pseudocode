/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x14070B248
 * Callers:
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140F8E368 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = &FsRtlTieringHeatData;
  return ExInitializeResourceLite(&stru_140F8E370);
}
