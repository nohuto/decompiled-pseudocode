/*
 * XREFs of SeImpersonateClient @ 0x140792A50
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x140910280 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
