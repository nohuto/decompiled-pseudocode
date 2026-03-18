/*
 * XREFs of SepAdtIncorporatePerUserPolicy @ 0x140791F68
 * Callers:
 *     SepAdtAuditThisEventWithContext @ 0x140852C10 (SepAdtAuditThisEventWithContext.c)
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140938740 (SeAuditingWithTokenForSubcategory.c)
 *     ObInitProcess @ 0x14093BD38 (ObInitProcess.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     SeAssignPrimaryToken @ 0x140A315A4 (SeAssignPrimaryToken.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall SepAdtIncorporatePerUserPolicy(unsigned int a1, char a2, char a3, __int64 a4, _BYTE *a5)
{
  _BYTE *result; // rax
  int v6; // r9d

  if ( *(_BYTE *)(a4 + 119) == 2 )
  {
    result = (_BYTE *)((unsigned __int64)a1 >> 1);
    v6 = ((unsigned __int8)result[a4 + 88] >> (4 * (a1 & 1))) & 0xF;
    if ( v6 )
    {
      if ( a2 && (v6 & 1) != 0 || a3 && (v6 & 4) != 0 )
      {
        result = a5;
        *a5 = 1;
      }
      else if ( a2 && (v6 & 2) != 0 || a3 && (v6 & 8) != 0 )
      {
        result = a5;
        *a5 = 0;
      }
    }
  }
  return result;
}
