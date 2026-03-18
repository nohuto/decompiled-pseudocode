/*
 * XREFs of SeQueryAuthenticationIdToken @ 0x1409E8F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeQueryAuthenticationIdToken(PACCESS_TOKEN Token, PLUID AuthenticationId)
{
  *AuthenticationId = *(struct _LUID *)((char *)Token + 24);
  return 0;
}
