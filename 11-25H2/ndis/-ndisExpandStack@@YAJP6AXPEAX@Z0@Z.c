/*
 * XREFs of ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1400676B0
 * Callers:
 *     NdisFCancelOidRequest @ 0x1400A3D60 (NdisFCancelOidRequest.c)
 *     NdisFCancelDirectOidRequest @ 0x1400CE6B0 (NdisFCancelDirectOidRequest.c)
 *     NdisFDirectOidRequestComplete @ 0x1400CE960 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisExpandStack(void (*a1)(void *), void *a2)
{
  return KeExpandKernelStackAndCalloutEx(a1, a2, (unsigned int)Size, 0, 0LL);
}
