/*
 * XREFs of SeImpersonateClient @ 0x140792A20
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1408E79D0 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
