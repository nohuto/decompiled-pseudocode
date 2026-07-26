/*
 * XREFs of ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14015F940
 * Callers:
 *     ?ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140054F90 (-ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140047700 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140048E80 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140085ED0 (-ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401530F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140159C60 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

__int64 __fastcall ndisMRawInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  unsigned __int64 Oid; // rbp
  int v6; // eax
  unsigned int v7; // edi
  char v9[4]; // [rsp+30h] [rbp-28h]
  char v10[4]; // [rsp+38h] [rbp-20h]

  DriverHandle = a1->DriverHandle;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFAu,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      *(_DWORD *)v9);
  }
  if ( a1->DriverHandle->HookType != NdisMiniportHookDriverTypeWdi && ndisOidNeedArmWatchDog(a2, a1) )
  {
    ndisDrainWatchdog(a1->PendingOidWatchdog.m_ptr);
    ndisArmWatchdog(
      a1->PendingOidWatchdog.m_ptr,
      a1,
      35,
      DriverHandle->UnhookedCharacteristics.__ptr_.__value_->OidRequestHandler,
      ndisWatchdogOidTimeout,
      Oid);
  }
  if ( ndisIsMiniportVerified(DriverHandle) )
    v6 = (*((__int64 (__fastcall **)(void *, struct _NDIS_OID_REQUEST *, struct _NDIS_MINIPORT_BLOCK *, void *, int (__fastcall *)(void *, _NDIS_OID_REQUEST *)))ndisVerifierNdisDispatch
          + 3))(
           a1->MiniportAdapterContext,
           a2,
           a1,
           a1->VerifierContext,
           DriverHandle->UnhookedCharacteristics.__ptr_.__value_->OidRequestHandler);
  else
    v6 = DriverHandle->UnhookedCharacteristics.__ptr_.__value_->OidRequestHandler(a1->MiniportAdapterContext, a2);
  v7 = v6;
  if ( v6 != 259 && a1->DriverHandle->HookType != NdisMiniportHookDriverTypeWdi && ndisOidNeedArmWatchDog(a2, a1) )
    ndisDisarmWatchdogAsync(a1->PendingOidWatchdog.m_ptr);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v7;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFBu,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      Oid,
      *(_DWORD *)v10);
  }
  return v7;
}
