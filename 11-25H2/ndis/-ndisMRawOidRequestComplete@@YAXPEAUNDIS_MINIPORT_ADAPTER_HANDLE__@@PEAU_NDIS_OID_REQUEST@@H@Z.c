/*
 * XREFs of ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400255B0
 * Callers:
 *     ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x14007BF50 (-ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_M.c)
 * Callees:
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140024E00 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1400256F0 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140027350 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x14003CD40 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 */

void __fastcall ndisMRawOidRequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  unsigned int Flags; // eax
  struct _NDIS_OID_REQUEST *v5; // rdi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx
  struct NDISWATCHDOG__ *m_ptr; // rcx
  NDIS_OID Oid; // eax
  struct _NDIS_OID_REQUEST *v11; // [rsp+30h] [rbp+8h] BYREF

  Flags = a1->Flags;
  v11 = a2;
  v5 = a2;
  if ( (Flags & 0x80u) == 0
    || (Oid = a2->DATA.QUERY_INFORMATION.Oid, Oid != 131334) && Oid != -50265847
    || *(_UNKNOWN **)&a2->NdisReserved[32] != &ndisIntReqGeneric )
  {
    DriverHandle = a1->DriverHandle;
    value = DriverHandle->UnhookedCharacteristics.__ptr_.__value_;
    if ( !value || value->OidRequestHandler == DriverHandle->MiniportDriverCharacteristics.OidRequestHandler )
      m_ptr = a1->PendingOidWatchdog.m_ptr;
    else
      m_ptr = a1->HookedOidWatchdog.m_ptr;
    ndisDisarmWatchdogAsync(m_ptr);
  }
  if ( (*(_DWORD *)&v5->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest(&a1->Header, v5, 1u, &v11);
    v5 = v11;
  }
  if ( (*(_DWORD *)&v5->NdisReserved[16] & 0x400) != 0 )
  {
    *(_DWORD *)&v5->NdisReserved[8] = a3;
    KeSetEvent((PRKEVENT)&v5->NdisReserved[40], 0, 0);
  }
  else
  {
    if ( (a1->Flags & 0x80u) == 0 )
    {
      if ( a1->SelectiveSuspend )
        ndisClearBusy(a1, 1LL, 33LL);
    }
    ndisMOidRequestCompleteInternal(a1, v5, a3, 0LL);
  }
}
