/*
 * XREFs of SepFinalizeTokenAcls @ 0x1408E6CA0
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SeFilterToken @ 0x14078F630 (SeFilterToken.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     NtFilterToken @ 0x140983A70 (NtFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A24410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403EB390 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 */

NTSTATUS __fastcall SepFinalizeTokenAcls(_QWORD *Object)
{
  NTSTATUS result; // eax

  result = SepAppendAceToTokenObjectAcl((ULONG_PTR)Object);
  if ( result >= 0 )
    return SepSetProcessTrustLabelAceForToken(Object);
  return result;
}
