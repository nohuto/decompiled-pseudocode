/*
 * XREFs of ExpIsFastResourceOwned @ 0x1403DCB00
 * Callers:
 *     ExReinitializeFastResource @ 0x1403DC9B0 (ExReinitializeFastResource.c)
 *     ExDeleteFastResource @ 0x1403DCA70 (ExDeleteFastResource.c)
 *     DifExDeleteFastResourceWrapper @ 0x140611450 (DifExDeleteFastResourceWrapper.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x14064ADE4 (ExpFastResourceLegacyIsAcquiredShared.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsFastResourceOwned(_QWORD *a1)
{
  return (*a1 & 1) != 0 || (*a1 & 0xFFFFFFFFFFFFFFFCuLL) != 0;
}
