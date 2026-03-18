/*
 * XREFs of SeQueryTokenTrustSid @ 0x140481B14
 * Callers:
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
