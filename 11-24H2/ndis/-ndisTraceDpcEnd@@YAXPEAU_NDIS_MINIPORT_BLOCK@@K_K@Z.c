/*
 * XREFs of ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140074C20
 * Callers:
 *     ndisMTimerObjectDpc @ 0x140007B10 (ndisMTimerObjectDpc.c)
 *     ndisInterruptDpc @ 0x14000BD40 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x140014590 (ndisQueuedMiniportDpcWorkItem.c)
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140052FA0 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x1400764D0 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140085240 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x140090CB0 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400D5690 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDpc @ 0x1400D7410 (ndisMDpc.c)
 *     ndisMDpcX @ 0x1400D75DC (ndisMDpcX.c)
 * Callees:
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x1400C5508 (McTemplateK0qqx_EtwWriteTransfer.c)
 */

void __fastcall ndisTraceDpcEnd(struct _NDIS_MINIPORT_BLOCK *a1, int a2, __int64 a3)
{
  char v4; // di
  char v5; // si
  _NET_LUID_LH v6; // rax
  int v7; // edx
  int v8; // ecx
  _WORD WnodeEventItem[2]; // [rsp+30h] [rbp-58h] BYREF
  char v10; // [rsp+34h] [rbp-54h]
  __int16 v11; // [rsp+35h] [rbp-53h]
  char v12; // [rsp+37h] [rbp-51h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  GUID v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+5Ch] [rbp-2Ch]
  int v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+64h] [rbp-24h]
  __int64 v20; // [rsp+68h] [rbp-20h]
  unsigned int Number; // [rsp+70h] [rbp-18h]
  int v22; // [rsp+74h] [rbp-14h]

  v17 = 0x20000;
  WnodeEventItem[1] = 0;
  v11 = 0;
  v4 = a3;
  v12 = 0;
  v5 = a2;
  v14 = 0LL;
  v16 = 0;
  v22 = 0;
  v6.Value = (ULONG64)a1->NetLuid;
  v10 = 17;
  v18 = (v6.Value >> 24) & 0xFFFFFF;
  v15 = EtwGuidNdisReceive;
  v20 = a3;
  v19 = a2;
  Number = KeGetPcr()->Prcb.Number;
  WnodeEventItem[0] = 72;
  v13 = qword_14011D058;
  IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_14011B105 & 2) != 0 )
    McTemplateK0qqx_EtwWriteTransfer(v8, v7, (_DWORD)a1 + 4008, (a1->NetLuid.Value >> 24) & 0xFFFFFF, v5, v4);
}
