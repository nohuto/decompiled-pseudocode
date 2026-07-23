/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1409BC09C
 * Callers:
 *     PspThreadOpen @ 0x1409BBDF0 (PspThreadOpen.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1409BC0CC (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(char a1, PS_PROTECTION a2, PS_PROTECTION a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 )
    return RtlTestProtectedAccess(a2, a3) == 0;
  return v3;
}
