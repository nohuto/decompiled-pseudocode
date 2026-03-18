/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x14070D6A8
 * Callers:
 *     FsRtlInitSystem @ 0x140C18D7C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403655E0 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  qword_140F8E188 = (__int64)&FsRtlTieringHeatData;
  FsRtlTieringHeatData = &FsRtlTieringHeatData;
  return ExInitializeResourceLite(&stru_140F8E190);
}
