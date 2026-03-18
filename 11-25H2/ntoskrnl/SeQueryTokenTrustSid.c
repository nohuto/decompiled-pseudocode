/*
 * XREFs of SeQueryTokenTrustSid @ 0x14048176C
 * Callers:
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
