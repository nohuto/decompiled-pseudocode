/*
 * XREFs of McTemplateK0jqqqqqqqqqq_EtwWriteTransfer @ 0x140061F90
 * Callers:
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B1B0 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003C2E0 (-ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializePmParametersForAoAc@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140061EB0 (-ndisMInitializePmParametersForAoAc@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqqqqqqqqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  enum _NDIS_IDLE_CONDITION v15; // [rsp+30h] [rbp-D0h] BYREF
  _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  char *v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  char *v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  char *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  char *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  char *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  enum _NDIS_IDLE_CONDITION *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  char *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  char *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  char *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  char *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]

  v15 = ndisIdleCondition;
  v17 = a4;
  v19 = &a5;
  v18 = 16LL;
  v21 = &a6;
  v23 = &a7;
  v25 = &a8;
  v27 = &a9;
  v29 = &v15;
  v31 = &a11;
  v33 = &a12;
  v35 = &a13;
  v37 = &a14;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &MiniportPowerPmParameter, a3, 0xCu, &v16);
}
