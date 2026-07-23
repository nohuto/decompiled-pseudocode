/*
 * XREFs of MiIsPageInHugePfn @ 0x14038ED20
 * Callers:
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x14038ED50 (MiIsPageInIoHugeRangeTransition.c)
 *     MiValidateAndLockAweMapCountPage @ 0x1404AE114 (MiValidateAndLockAweMapCountPage.c)
 *     MmGetCacheAttributeEx @ 0x1406707F0 (MmGetCacheAttributeEx.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067141C (MiGetPageInHugePageBadStatus.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140672544 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x1406759CC (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x140675B60 (MiUpdateBadPfnIdentity.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  unsigned __int64 *result; // rax

  result = stru_140E300F0.Buffer;
  if ( stru_140E300F0.Buffer )
    return (unsigned __int64 *)(_bittest64((const signed __int64 *)stru_140E300F0.Buffer, (a1 >> 18) & 0x3FFFFF) != 0);
  return result;
}
