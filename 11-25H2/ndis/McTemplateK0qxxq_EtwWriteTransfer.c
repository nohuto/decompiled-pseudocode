/*
 * XREFs of McTemplateK0qxxq_EtwWriteTransfer @ 0x140097590
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140065EE0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400242C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qxxq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  int *v9; // [rsp+40h] [rbp-58h]
  __int64 v10; // [rsp+48h] [rbp-50h]
  __int64 *v11; // [rsp+50h] [rbp-48h]
  __int64 v12; // [rsp+58h] [rbp-40h]
  __int64 *v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  __int64 *v15; // [rsp+70h] [rbp-28h]
  __int64 v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+B8h] [rbp+20h] BYREF

  v17 = a4;
  v10 = 4LL;
  v9 = &v17;
  v12 = 8LL;
  v11 = &a5;
  v14 = 8LL;
  v13 = &a6;
  v16 = 4LL;
  v15 = &a7;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &MiniportCsStats, a3, 5u, &v8);
}
