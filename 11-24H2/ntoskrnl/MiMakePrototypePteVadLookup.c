/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x140236340
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiPteForTrimmedProto @ 0x140232FE4 (MiPteForTrimmedProto.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiExpandSharedZeroCluster @ 0x1402E548C (MiExpandSharedZeroCluster.c)
 *     MiZeroFault @ 0x1402FEA50 (MiZeroFault.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  unsigned __int64 result; // rax

  result = 32 * (a1 & 0x1F | 0xFFFFFFFFF8000020uLL);
  if ( qword_140E2DB80 )
  {
    if ( (qword_140E2DB80 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2DB80;
  }
  return result;
}
