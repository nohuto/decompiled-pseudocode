/*
 * XREFs of MiReferenceControlAreaPfn @ 0x1402E68C4
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x14023A108 (MiFinishMdlForMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiInitializeNewImageSectionProtos @ 0x140312D98 (MiInitializeNewImageSectionProtos.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiReferenceControlAreaPfn(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp

  v4 = a3;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
    a2 = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  *(_QWORD *)(a1 + 32) += v4;
  if ( a2 )
    *(_DWORD *)(a2 + 104) += v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
}
