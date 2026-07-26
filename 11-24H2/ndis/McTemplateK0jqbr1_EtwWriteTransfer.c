/*
 * XREFs of McTemplateK0jqbr1_EtwWriteTransfer @ 0x1400B6FB0
 * Callers:
 *     ?ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140054B20 (-ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqbr1_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // [rsp+30h] [rbp-19h] BYREF
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  __int64 v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  int *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v9 = a4;
  v7 = 128;
  v11 = &v7;
  v13 = a6;
  v14 = 128LL;
  v10 = 16LL;
  v12 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &MiniportWakePacket, a3, 4u, &v8);
}
