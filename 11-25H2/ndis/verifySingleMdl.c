/*
 * XREFs of verifySingleMdl @ 0x1400AA5EC
 * Callers:
 *     verifySingleNb @ 0x1400AA648 (verifySingleNb.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1400AA400 (datapathVerifierReportProblem.c)
 */

void __fastcall verifySingleMdl(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( *(_WORD *)(a1 + 8) < 0x30u )
    datapathVerifierReportProblem(0x60u, a2, a1);
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 && *(_QWORD *)(a1 + 24) < (unsigned __int64)MmSystemRangeStart )
    datapathVerifierReportProblem(0x71u, a2, a1);
}
