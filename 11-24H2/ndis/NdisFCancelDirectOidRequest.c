/*
 * XREFs of NdisFCancelDirectOidRequest @ 0x1400C7620
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x14004A8D0 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 */

void __stdcall NdisFCancelDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[0] = 0LL;
  v2[2] = 0LL;
  v2[1] = NdisFilterHandle;
  v2[3] = RequestId;
  ndisExpandStack((void (*)(void *))ndisFCancelDirectOidRequestInternal, v2);
}
