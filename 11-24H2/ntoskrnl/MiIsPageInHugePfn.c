/*
 * XREFs of MiIsPageInHugePfn @ 0x1403CEEA0
 * Callers:
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     MiIsPageInIoHugeRangeTransition @ 0x1403CEED0 (MiIsPageInIoHugeRangeTransition.c)
 *     MiValidateAndLockAweMapCountPage @ 0x1404B38C0 (MiValidateAndLockAweMapCountPage.c)
 *     MmGetCacheAttributeEx @ 0x14066F620 (MmGetCacheAttributeEx.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067024C (MiGetPageInHugePageBadStatus.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140671374 (MiMarkHugePfnGood.c)
 *     MiUnlinkBadPages @ 0x1406747FC (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x140674990 (MiUpdateBadPfnIdentity.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiDeleteStaleCacheMaps @ 0x140675880 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPageInHugePfn(unsigned __int64 a1)
{
  __int64 result; // rax

  result = qword_140E2FFB8;
  if ( qword_140E2FFB8 )
    return _bittest64((const signed __int64 *)qword_140E2FFB8, (a1 >> 18) & 0x3FFFFF) != 0;
  return result;
}
