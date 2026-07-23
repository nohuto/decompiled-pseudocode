/*
 * XREFs of ExpIsFastResourceOwned @ 0x1403C3A60
 * Callers:
 *     ExReinitializeFastResource @ 0x1403C3910 (ExReinitializeFastResource.c)
 *     ExDeleteFastResource @ 0x1403C39D0 (ExDeleteFastResource.c)
 *     DifExDeleteFastResourceWrapper @ 0x14061B9D0 (DifExDeleteFastResourceWrapper.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1406553E4 (ExpFastResourceLegacyIsAcquiredShared.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsFastResourceOwned(_QWORD *a1)
{
  return (*a1 & 1) != 0 || (*a1 & 0xFFFFFFFFFFFFFFFCuLL) != 0;
}
