/*
 * XREFs of ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140040D60
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
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140038860 (McTemplateK0qq_EtwWriteTransfer.c)
 */

void __fastcall ndisTraceDpcStart(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NET_LUID_LH v4; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-58h]
  _WORD WnodeEventItem[2]; // [rsp+30h] [rbp-48h] BYREF
  char v8; // [rsp+34h] [rbp-44h]
  __int16 v9; // [rsp+35h] [rbp-43h]
  char v10; // [rsp+37h] [rbp-41h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  GUID v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]
  int v16; // [rsp+60h] [rbp-18h]
  int v17; // [rsp+64h] [rbp-14h]
  unsigned int Number; // [rsp+68h] [rbp-10h]
  int v19; // [rsp+6Ch] [rbp-Ch]

  v15 = 0x20000;
  WnodeEventItem[1] = 0;
  v9 = 0;
  v10 = 0;
  v12 = 0LL;
  v14 = 0;
  v19 = 0;
  v4.Value = (ULONG64)a1->NetLuid;
  v8 = 21;
  v16 = (v4.Value >> 24) & 0xFFFFFF;
  v13 = EtwGuidNdisReceive;
  v17 = a2;
  Number = KeGetPcr()->Prcb.Number;
  WnodeEventItem[0] = 64;
  v11 = qword_14011D058;
  IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_14011B105 & 2) != 0 )
  {
    LODWORD(v6) = a2;
    McTemplateK0qq_EtwWriteTransfer(
      v5,
      (__int64)&DpcStart,
      (__int64)&a1->InterfaceGuid,
      (a1->NetLuid.Value >> 24) & 0xFFFFFF,
      v6);
  }
}
