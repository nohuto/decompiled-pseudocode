/*
 * XREFs of ?ndisMInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1400A6140
 * Callers:
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400C0AFC (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMInvokeCancelOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  void *v3; // rdi
  int v5; // edx

  DriverHandle = a1->DriverHandle;
  v3 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      247,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
  DriverHandle->MiniportDriverCharacteristics.CancelOidRequestHandler(a1->MiniportAdapterContext, v3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      11,
      248,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  }
}
