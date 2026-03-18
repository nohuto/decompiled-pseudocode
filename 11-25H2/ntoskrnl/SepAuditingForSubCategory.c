/*
 * XREFs of SepAuditingForSubCategory @ 0x14046EFD4
 * Callers:
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitProcess @ 0x1409716EC (ObInitProcess.c)
 *     SeAssignPrimaryToken @ 0x140A0E1E4 (SeAssignPrimaryToken.c)
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
