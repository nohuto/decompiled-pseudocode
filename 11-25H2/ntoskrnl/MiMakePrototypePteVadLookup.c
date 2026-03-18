/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x14037DD10
 * Callers:
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 *     MiPteForTrimmedProto @ 0x1402476D0 (MiPteForTrimmedProto.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiExpandSharedZeroCluster @ 0x14037C52C (MiExpandSharedZeroCluster.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  unsigned __int64 result; // rax

  result = 32 * (a1 & 0x1F | 0xFFFFFFFFF8000020uLL);
  if ( qword_140E2D940 )
  {
    if ( (qword_140E2D940 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D940;
  }
  return result;
}
