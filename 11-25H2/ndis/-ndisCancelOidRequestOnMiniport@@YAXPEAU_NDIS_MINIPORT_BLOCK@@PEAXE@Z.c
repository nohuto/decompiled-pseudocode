/*
 * XREFs of ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140023320
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400229C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140024E00 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400C0AFC (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x140024200 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ?ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z @ 0x140097A90 (-ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z.c)
 */

void __fastcall ndisCancelOidRequestOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1, void *a2, unsigned __int8 a3)
{
  KIRQL v6; // r11
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY **p_Blink; // rbx
  struct _LIST_ENTRY v9; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v11; // [rsp+80h] [rbp-18h]

  v9 = 0LL;
  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  ndisGrabOidCancellationList(&a1->OidRequestList, &v9, a2, a3);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  while ( v9.Flink != &v9 )
  {
    if ( v9.Flink->Blink != &v9 || (Flink = v9.Flink->Flink, v9.Flink->Flink->Blink != v9.Flink) )
      __fastfail(3u);
    p_Blink = &v9.Flink[-5].Blink;
    v9.Flink = v9.Flink->Flink;
    Flink->Blink = &v9;
    memset(&v10[1], 0, 24);
    *(_QWORD *)&v11 = p_Blink;
    *((_QWORD *)&v11 + 1) = 0x1C001000CLL;
    v10[0] = a1;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x9Bu,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        (char)p_Blink,
        a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      McTemplateK0jqxqdq_EtwWriteTransfer(
        (_DWORD)Flink,
        (unsigned int)&CancelMiniportOidRequestEx,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        *((_DWORD *)p_Blink + 8),
        12);
    ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v10);
  }
}
