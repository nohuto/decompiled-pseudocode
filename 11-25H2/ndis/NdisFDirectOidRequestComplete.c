/*
 * XREFs of NdisFDirectOidRequestComplete @ 0x1400CE960
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140027350 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x140062190 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1400676B0 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140097B10 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __stdcall NdisFDirectOidRequestComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  PNDIS_OID_REQUEST v4; // rbx
  bool v5; // zf
  KIRQL v7; // dl
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  PNDIS_OID_REQUEST v9; // [rsp+50h] [rbp+8h] BYREF
  KIRQL NewIrql; // [rsp+60h] [rbp+18h] BYREF

  v8[0] = 0LL;
  v8[2] = 0LL;
  v4 = OidRequest;
  v5 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v9 = OidRequest;
  if ( !v5 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_OBJECT_HEADER *)NdisFilterHandle, OidRequest, 0, &v9);
    v4 = v9;
  }
  *(_DWORD *)&v4->NdisReserved[8] = Status;
  v8[1] = NdisFilterHandle;
  v8[3] = v4;
  if ( ndisExpandStack((void (*)(void *))ndisFDirectOidRequestCompleteInternal, v8) < 0 )
  {
    NewIrql = 0;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
    *(_QWORD *)v4->NdisReserved = *((_QWORD *)NdisFilterHandle + 30);
    *((_QWORD *)NdisFilterHandle + 30) = v4;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v7 = NewIrql;
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  }
}
