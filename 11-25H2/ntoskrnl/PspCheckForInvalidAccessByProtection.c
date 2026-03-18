/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1409BC09C
 * Callers:
 *     PspThreadOpen @ 0x1409BBDF0 (PspThreadOpen.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1409BC0CC (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(__int64 a1, __int64 a2, char a3)
{
  char v3; // r9
  char v4; // al

  v3 = 0;
  v4 = a2;
  if ( (_BYTE)a1 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(a1) = v4;
    return (unsigned __int8)RtlTestProtectedAccess(a1, a2) == 0;
  }
  return v3;
}
