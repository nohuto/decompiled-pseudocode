/*
 * XREFs of McTemplateK0ujqzr2jxxx_EtwWriteTransfer @ 0x14009B564
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140065EE0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1400CB880 (-ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x140141550 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x140141764 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x140175C00 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400242C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        char a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10)
{
  __int64 v11; // [rsp+30h] [rbp-91h] BYREF
  _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-81h] BYREF
  char *v13; // [rsp+50h] [rbp-71h]
  __int64 v14; // [rsp+58h] [rbp-69h]
  __int64 v15; // [rsp+60h] [rbp-61h]
  __int64 v16; // [rsp+68h] [rbp-59h]
  int *v17; // [rsp+70h] [rbp-51h]
  __int64 v18; // [rsp+78h] [rbp-49h]
  __int64 v19; // [rsp+80h] [rbp-41h]
  int v20; // [rsp+88h] [rbp-39h]
  int v21; // [rsp+8Ch] [rbp-35h]
  __int64 v22; // [rsp+90h] [rbp-31h]
  __int64 v23; // [rsp+98h] [rbp-29h]
  char *v24; // [rsp+A0h] [rbp-21h]
  __int64 v25; // [rsp+A8h] [rbp-19h]
  char *v26; // [rsp+B0h] [rbp-11h]
  __int64 v27; // [rsp+B8h] [rbp-9h]
  __int64 *v28; // [rsp+C0h] [rbp-1h]
  __int64 v29; // [rsp+C8h] [rbp+7h]
  char v30; // [rsp+108h] [rbp+47h] BYREF

  v30 = a4;
  v14 = 1LL;
  v11 = 0LL;
  v13 = &v30;
  v15 = a5;
  v21 = 0;
  v17 = &a6;
  v19 = a7;
  v16 = 16LL;
  v20 = 2 * a6;
  v22 = a8;
  v24 = &a9;
  v26 = &a10;
  v28 = &v11;
  v18 = 4LL;
  v23 = 16LL;
  v25 = 8LL;
  v27 = 8LL;
  v29 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(
           &SLEEPSTUDY_ETW_PROVIDER_Context,
           &SLEEPSTUDY_EVT_SCENARIO_BLOCKER,
           a3,
           9u,
           &v12);
}
