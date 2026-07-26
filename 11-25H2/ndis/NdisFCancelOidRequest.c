/*
 * XREFs of NdisFCancelOidRequest @ 0x1400A3D60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1400676B0 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 */

void __stdcall NdisFCancelOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[0] = 0LL;
  v2[2] = 0LL;
  v2[1] = NdisFilterHandle;
  v2[3] = RequestId;
  ndisExpandStack((void (*)(void *))ndisFCancelOidRequestInternal, v2);
}
