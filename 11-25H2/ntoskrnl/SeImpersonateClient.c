/*
 * XREFs of SeImpersonateClient @ 0x140783790
 * Callers:
 *     <none>
 * Callees:
 *     SeImpersonateClientEx @ 0x1408A5170 (SeImpersonateClientEx.c)
 */

void __stdcall SeImpersonateClient(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  SeImpersonateClientEx(ClientContext, ServerThread);
}
