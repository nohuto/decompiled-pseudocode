/*
 * XREFs of SepFinalizeTokenAcls @ 0x14090F550
 * Callers:
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     SeFilterToken @ 0x14078F660 (SeFilterToken.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     NtFilterToken @ 0x140935F90 (NtFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2F9D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x140363E20 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 */

NTSTATUS __fastcall SepFinalizeTokenAcls(_QWORD *Object)
{
  NTSTATUS result; // eax

  result = SepAppendAceToTokenObjectAcl((ULONG_PTR)Object);
  if ( result >= 0 )
    return SepSetProcessTrustLabelAceForToken(Object);
  return result;
}
