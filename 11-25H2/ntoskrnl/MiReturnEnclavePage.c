/*
 * XREFs of MiReturnEnclavePage @ 0x1404D558C
 * Callers:
 *     MiAllocateEnclavePages @ 0x1403B9BC4 (MiAllocateEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406750C8 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B535D4 (MiReleaseEnclaveMetadataPage.c)
 *     MiReturnReservedEnclavePages @ 0x140B536C0 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rsi
  unsigned __int8 v3; // bl

  v2 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v3 = MiLockPageInline(v2);
  *(_QWORD *)(v2 + 24) &= 0xFFFFFF0000000000uLL;
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 256);
  return MiUnlockPage(v2, v3);
}
