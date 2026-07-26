/*
 * XREFs of ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400C0AFC
 * Callers:
 *     ?ndisFCancelOidRequestInternal@@YAXPEAX@Z @ 0x1400A3250 (-ndisFCancelOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400AEEFC (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisCancelOidRequest @ 0x1400C8270 (NdisCancelOidRequest.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140023320 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     WPP_RECORDER_SF_qqqd @ 0x140026E30 (WPP_RECORDER_SF_qqqd.c)
 *     ?ndisFInvokeCancelOidRequest@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAX@Z @ 0x1400A3278 (-ndisFInvokeCancelOidRequest@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAX@Z.c)
 *     ?ndisMInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1400A6140 (-ndisMInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400C0C8C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@PEAE@Z @ 0x1400C5408 (-ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@.c)
 */

void __fastcall ndisCancelOidRequestInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        void *a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  struct _NDIS_FILTER_BLOCK *v8; // rdi
  int v9; // edx
  struct _NDIS_FILTER_BLOCK *v10; // rsi
  unsigned __int8 v11; // si
  __int64 v12; // [rsp+40h] [rbp-38h]
  unsigned __int8 v13; // [rsp+88h] [rbp+10h] BYREF

  v4 = a4;
  v13 = 0;
  v8 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x9Cu,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      a4);
  while ( 1 )
  {
    v10 = ndisRefNextFilterForOidCancellation(a1, v8, &v13);
    if ( !v10 )
      break;
    if ( v8 != a2 )
      ndisDereferenceRef(&v8->PnPRef.SpinLock, 1u);
    v8 = v10;
    ndisCancelOidRequestOnFilter(v10, a3, v4);
    if ( !(_BYTE)v4 && v10->FilterDriver->DefaultFilterCharacteristics.CancelOidRequestHandler )
    {
      ndisFInvokeCancelOidRequest(v10, a3);
      v11 = 0;
      goto LABEL_10;
    }
  }
  v11 = v13;
LABEL_10:
  if ( v8 != a2 )
    ndisDereferenceRef(&v8->PnPRef.SpinLock, 1u);
  if ( v11 )
  {
    ndisCancelOidRequestOnMiniport(a1, a3, v4);
    if ( a1->MajorNdisVersion >= 6u
      && !(_BYTE)v4
      && a1->DriverHandle->MiniportDriverCharacteristics.CancelOidRequestHandler )
    {
      ndisMInvokeCancelOidRequest(a1, a3);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v4;
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x9Du,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v12);
  }
}
