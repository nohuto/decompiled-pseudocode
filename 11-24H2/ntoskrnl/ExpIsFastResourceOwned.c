/*
 * XREFs of ExpIsFastResourceOwned @ 0x1403E1460
 * Callers:
 *     ExReinitializeFastResource @ 0x1403E1310 (ExReinitializeFastResource.c)
 *     ExDeleteFastResource @ 0x1403E13D0 (ExDeleteFastResource.c)
 *     DifExDeleteFastResourceWrapper @ 0x14061D410 (DifExDeleteFastResourceWrapper.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x140656CE4 (ExpFastResourceLegacyIsAcquiredShared.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsFastResourceOwned(_QWORD *a1)
{
  return (*a1 & 1) != 0 || (*a1 & 0xFFFFFFFFFFFFFFFCuLL) != 0;
}
