/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x140368F40
 * Callers:
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiInitializeMdlPfn @ 0x140413588 (MiInitializeMdlPfn.c)
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049D980 (MmAllocateNonChargedSecurePages.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiCreatePfnTemplate @ 0x14066C510 (MiCreatePfnTemplate.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 *     MiFreeReservationRun @ 0x140A3D6A4 (MiFreeReservationRun.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C568E8 (MiUpdateBootHpatPagesInUse.c)
 *     MiCreateBootSlabEntries @ 0x140C58FDC (MiCreateBootSlabEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140E2DB80 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140E2DB80 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140E2DB80 )
  {
    if ( (qword_140E2DB80 & result) != 0 )
      return result | 0x10;
    else
      return qword_140E2DB80 | result;
  }
  return result;
}
