/*
 * XREFs of NdisMOidRequestComplete @ 0x140087BC0
 * Callers:
 *     NdisMCoOidRequestComplete @ 0x140006A10 (NdisMCoOidRequestComplete.c)
 *     NdisMCoRequestComplete @ 0x14004B150 (NdisMCoRequestComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqqd @ 0x14000C730 (WPP_RECORDER_SF_qDqqd.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000CBF0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140015CC0 (WPP_RECORDER_SF_qDqd_ea_140015CC0.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140048E80 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  __int64 v3; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-38h]
  NDIS_STATUS v11; // [rsp+40h] [rbp-18h]
  struct _NDIS_OID_REQUEST *v12; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)MiniportAdapterHandle + 470);
  v12 = OidRequest;
  if ( *(_DWORD *)(v3 + 896) != 1 && (*((_DWORD *)MiniportAdapterHandle + 30) & 0x80u) == 0 )
    ndisDisarmWatchdogAsync(*((struct NDISWATCHDOG__ **)MiniportAdapterHandle + 683));
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle, OidRequest, 1, &v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, v8, 0x12u, v10);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = Status;
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      Status,
      0x13u,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      (char)MiniportAdapterHandle,
      OidRequest->DATA.QUERY_INFORMATION.Oid,
      (char)OidRequest,
      v11);
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 278) )
    *((_QWORD *)MiniportAdapterHandle + 278) = 0LL;
  v9 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 896LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, struct _NDIS_OID_REQUEST *, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                               + v9
                                                                                               + 48))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v9 + 24),
    *((_QWORD *)MiniportAdapterHandle + 661),
    MiniportAdapterHandle,
    v12,
    Status);
}
