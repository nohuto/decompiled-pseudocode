/*
 * XREFs of SeQueryTokenTrustSid @ 0x14047CDD4
 * Callers:
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
