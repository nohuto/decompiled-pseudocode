/*
 * XREFs of SepAuditingForSubCategory @ 0x14046D838
 * Callers:
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140938740 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitProcess @ 0x14093BD38 (ObInitProcess.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     SeAssignPrimaryToken @ 0x140A315A4 (SeAssignPrimaryToken.c)
 * Callees:
 *     <none>
 */

char __fastcall SepAuditingForSubCategory(int a1, char a2)
{
  __int64 v2; // rcx

  v2 = (unsigned int)(a1 - 100);
  if ( a2 )
    return SeAuditingState[2 * v2];
  else
    return SeAuditingState[2 * v2 + 1];
}
