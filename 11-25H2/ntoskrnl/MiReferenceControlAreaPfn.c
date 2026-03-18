/*
 * XREFs of MiReferenceControlAreaPfn @ 0x14033BC94
 * Callers:
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiFinishMdlForMappedFileFault @ 0x14034EE44 (MiFinishMdlForMappedFileFault.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404536FC (MiInitializeNewImageSectionProtos.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
