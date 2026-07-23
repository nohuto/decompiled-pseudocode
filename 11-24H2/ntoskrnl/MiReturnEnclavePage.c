/*
 * XREFs of MiReturnEnclavePage @ 0x1404CE13C
 * Callers:
 *     MiAllocateEnclavePages @ 0x1403F85DC (MiAllocateEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140681AE8 (MiPrepareEnclaveMetadataPage.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B657F4 (MiReleaseEnclaveMetadataPage.c)
 *     MiReturnReservedEnclavePages @ 0x140B658E0 (MiReturnReservedEnclavePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int8 v6; // bl

  v5 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v6 = MiLockPageInline(v5, a2, a3, a4);
  *(_QWORD *)(v5 + 24) &= 0xFFFFFF0000000000uLL;
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 256LL);
  return MiUnlockPage(v5, v6);
}
