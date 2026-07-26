/*
 * XREFs of ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x14004A8D0
 * Callers:
 *     NdisFCancelOidRequest @ 0x14009AB90 (NdisFCancelOidRequest.c)
 *     NdisFCancelDirectOidRequest @ 0x1400C7620 (NdisFCancelDirectOidRequest.c)
 *     NdisFDirectOidRequestComplete @ 0x1400C77F0 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisExpandStack(void (*a1)(void *), void *a2)
{
  return KeExpandKernelStackAndCalloutEx(a1, a2, (unsigned int)Size, 0, 0LL);
}
