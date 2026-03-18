/*
 * XREFs of PopAdaptiveStandbyQueryReserveConfiguration @ 0x1405DB334
 * Callers:
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x140761570 (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbySessionStart @ 0x140762088 (PopAdaptiveStandbySessionStart.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopUmpoSendPowerAdaptiveReserveConfigurationQuery @ 0x14075CFF4 (PopUmpoSendPowerAdaptiveReserveConfigurationQuery.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EDF3C (Pdcv2ActivationClientActivate.c)
 */

int __fastcall PopAdaptiveStandbyQueryReserveConfiguration(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // esi
  int v11; // [rsp+28h] [rbp-71h]
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-59h] BYREF
  __int64 v13; // [rsp+48h] [rbp-51h] BYREF
  __int64 v14; // [rsp+50h] [rbp-49h] BYREF
  int v15[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v16; // [rsp+60h] [rbp-39h]
  const wchar_t *v17; // [rsp+68h] [rbp-31h]
  __int128 v18; // [rsp+70h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v19[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 *v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A8h] [rbp+Fh]
  int v22; // [rsp+ACh] [rbp+13h]
  LARGE_INTEGER *p_Timeout; // [rsp+B0h] [rbp+17h]
  int v24; // [rsp+B8h] [rbp+1Fh]
  int v25; // [rsp+BCh] [rbp+23h]
  __int64 *v26; // [rsp+C0h] [rbp+27h]
  int v27; // [rsp+C8h] [rbp+2Fh]
  int v28; // [rsp+CCh] [rbp+33h]

  Timeout.LowPart = 0;
  v4 = (__int64 *)(a1 + 192);
  v5 = *(_QWORD *)(a1 + 192);
  if ( v5 )
  {
    if ( (unsigned int)dword_140E08258 > 5 )
    {
      v22 = 0;
      v13 = v5;
      v21 = 8;
      v20 = &v13;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08258,
        (unsigned __int8 *)byte_14004D74B,
        (const GUID *)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
        0LL,
        3u,
        v19);
    }
    *(_DWORD *)(a1 + 112) = 0;
    v7 = *(_BYTE *)(a1 + 120) == 0;
    v5 = *v4;
    *(_QWORD *)(a1 + 104) = *v4;
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 536);
      if ( !v8 )
        goto LABEL_9;
      v16 = 0LL;
      v17 = L"Reserve Configuration Update";
      v15[0] = 1;
      v15[1] = 300;
      v18 = 0LL;
      LODWORD(v5) = Pdcv2ActivationClientActivate(
                      v8,
                      (int)v15,
                      0,
                      a4,
                      L"AdaptiveStandby",
                      v11,
                      a1 + 128,
                      (LARGE_INTEGER)&Timeout);
      v9 = v5;
      if ( (unsigned int)dword_140E08258 > 5 )
      {
        v22 = 0;
        v25 = 0;
        v28 = 0;
        LODWORD(v13) = v5;
        v20 = &v13;
        p_Timeout = &Timeout;
        v14 = *(_QWORD *)(a1 + 128);
        v26 = &v14;
        v21 = 4;
        v24 = 4;
        v27 = 8;
        LODWORD(v5) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140E08258,
                        (unsigned __int8 *)&word_14004D6D6,
                        (const GUID *)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
                        0LL,
                        5u,
                        v19);
      }
      if ( v9 >= 0 )
      {
LABEL_9:
        *(_BYTE *)(a1 + 120) = 1;
        LODWORD(v5) = PopUmpoSendPowerAdaptiveReserveConfigurationQuery(v4);
      }
    }
  }
  return v5;
}
