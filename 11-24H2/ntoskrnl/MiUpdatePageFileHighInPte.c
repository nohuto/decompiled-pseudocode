/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x1402EACE0
 * Callers:
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiInitializeMdlPfn @ 0x1403954E8 (MiInitializeMdlPfn.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiCreatePfnTemplate @ 0x14066D6E0 (MiCreatePfnTemplate.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     MiFreeReservationRun @ 0x140A32FB4 (MiFreeReservationRun.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C58A78 (MiUpdateBootHpatPagesInUse.c)
 *     MiCreateBootSlabEntries @ 0x140C5B16C (MiCreateBootSlabEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140E2DCC0 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140E2DCC0 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & result) != 0 )
      return result | 0x10;
    else
      return qword_140E2DCC0 | result;
  }
  return result;
}
