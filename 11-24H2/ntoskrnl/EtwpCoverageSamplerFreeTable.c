/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x140A70600
 * Callers:
 *     EtwpCoverageSamplerCleanup @ 0x1407B2980 (EtwpCoverageSamplerCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageSamplerFreeTable(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[3];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x56777445u);
    P[3] = 0LL;
  }
  ExFreePoolWithTag(P, 0x56777445u);
}
