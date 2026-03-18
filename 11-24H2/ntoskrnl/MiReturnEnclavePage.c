/*
 * XREFs of MiReturnEnclavePage @ 0x1404D4E64
 * Callers:
 *     MiAllocateEnclavePages @ 0x140394D84 (MiAllocateEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406808E8 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B63724 (MiReleaseEnclaveMetadataPage.c)
 *     MiReturnReservedEnclavePages @ 0x140B63810 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rsi
  unsigned __int8 v3; // bl

  v2 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v3 = MiLockPageInline(v2);
  *(_QWORD *)(v2 + 24) &= 0xFFFFFF0000000000uLL;
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 256LL);
  return MiUnlockPage(v2, v3);
}
