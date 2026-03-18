/*
 * XREFs of SepFinalizeTokenAcls @ 0x1408A4398
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     SeFilterToken @ 0x1407803A0 (SeFilterToken.c)
 *     SeCopyClientToken @ 0x14089E9B0 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     NtFilterToken @ 0x1409970E0 (NtFilterToken.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2A050 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 */

NTSTATUS __fastcall SepFinalizeTokenAcls(_QWORD *Object)
{
  NTSTATUS result; // eax

  result = SepAppendAceToTokenObjectAcl((ULONG_PTR)Object);
  if ( result >= 0 )
    return SepSetProcessTrustLabelAceForToken(Object);
  return result;
}
