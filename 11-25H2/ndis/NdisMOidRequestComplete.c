/*
 * XREFs of NdisMOidRequestComplete @ 0x140027870
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140013110 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     NdisMCoRequestComplete @ 0x140027AB0 (NdisMCoRequestComplete.c)
 *     NdisMCoOidRequestComplete @ 0x14005B1F0 (NdisMCoOidRequestComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqd @ 0x140025370 (WPP_RECORDER_SF_qDqd.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1400256F0 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     WPP_RECORDER_SF_qDqqd @ 0x1400260D0 (WPP_RECORDER_SF_qDqqd.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140027350 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  __int64 v3; // rax
  PNDIS_OID_REQUEST v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // [rsp+20h] [rbp-38h]
  NDIS_STATUS v12; // [rsp+40h] [rbp-18h]
  struct _NDIS_OID_REQUEST *v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)MiniportAdapterHandle + 470);
  v13 = OidRequest;
  v7 = OidRequest;
  if ( *(_DWORD *)(v3 + 896) != 1 && (*((_DWORD *)MiniportAdapterHandle + 30) & 0x80u) == 0 )
    ndisDisarmWatchdogAsync(*((struct NDISWATCHDOG__ **)MiniportAdapterHandle + 683));
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_OBJECT_HEADER *)MiniportAdapterHandle, OidRequest, 1, &v13);
    v7 = v13;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, 0x12u, v11);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = Status;
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      Status,
      0x13u,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      (char)MiniportAdapterHandle,
      OidRequest->DATA.QUERY_INFORMATION.Oid,
      (char)OidRequest,
      v12);
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 278) )
    *((_QWORD *)MiniportAdapterHandle + 278) = 0LL;
  v8 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 896LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v8
                                                                                      + 48))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v8 + 24),
    *((_QWORD *)MiniportAdapterHandle + 661),
    MiniportAdapterHandle,
    v7,
    Status);
}
