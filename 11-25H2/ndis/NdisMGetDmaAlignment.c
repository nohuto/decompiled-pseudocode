/*
 * XREFs of NdisMGetDmaAlignment @ 0x14009D6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

ULONG __stdcall NdisMGetDmaAlignment(NDIS_HANDLE MiniportAdapterHandle)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)MiniportAdapterHandle + 63);
  if ( v1 )
    return (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 8LL) + 72LL))();
  else
    return 0;
}
