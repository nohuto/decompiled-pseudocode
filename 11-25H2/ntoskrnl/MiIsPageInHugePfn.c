/*
 * XREFs of MiIsPageInHugePfn @ 0x140392030
 * Callers:
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x140392060 (MiIsPageInIoHugeRangeTransition.c)
 *     MiValidateAndLockAweMapCountPage @ 0x1404B3F90 (MiValidateAndLockAweMapCountPage.c)
 *     MmGetCacheAttributeEx @ 0x140663B00 (MmGetCacheAttributeEx.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406647A4 (MiGetPageInHugePageBadStatus.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406658CC (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x140668D9C (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x140668F30 (MiUpdateBadPfnIdentity.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteStaleCacheMaps @ 0x140669E20 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  unsigned __int64 *result; // rax

  result = stru_140E2FD70.Buffer;
  if ( stru_140E2FD70.Buffer )
    return (unsigned __int64 *)(_bittest64((const signed __int64 *)stru_140E2FD70.Buffer, (a1 >> 18) & 0x3FFFFF) != 0);
  return result;
}
