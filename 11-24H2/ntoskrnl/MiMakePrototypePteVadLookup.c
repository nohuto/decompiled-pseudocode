/*
 * XREFs of MiMakePrototypePteVadLookup @ 0x1402104D0
 * Callers:
 *     MiPteForTrimmedProto @ 0x140202660 (MiPteForTrimmedProto.c)
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x14034162C (MiExpandSharedZeroCluster.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakePrototypePteVadLookup(char a1)
{
  unsigned __int64 result; // rax

  result = 32 * (a1 & 0x1F | 0xFFFFFFFFF8000020uLL);
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2DCC0;
  }
  return result;
}
