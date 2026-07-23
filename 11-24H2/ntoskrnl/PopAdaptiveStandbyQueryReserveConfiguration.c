/*
 * XREFs of PopAdaptiveStandbyQueryReserveConfiguration @ 0x14076146C
 * Callers:
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407608DC (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbySessionStart @ 0x140761630 (PopAdaptiveStandbySessionStart.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopUmpoSendPowerAdaptiveReserveConfigurationQuery @ 0x14075BF94 (PopUmpoSendPowerAdaptiveReserveConfigurationQuery.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EB97C (Pdcv2ActivationClientActivate.c)
 */

int __fastcall PopAdaptiveStandbyQueryReserveConfiguration(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  struct _LIST_ENTRY *ActivityIdThread; // rax
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // esi
  struct _LIST_ENTRY *v11; // rax
  int v13; // [rsp+28h] [rbp-71h]
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-59h] BYREF
  __int64 v15; // [rsp+48h] [rbp-51h] BYREF
  __int64 v16; // [rsp+50h] [rbp-49h] BYREF
  int v17[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v18; // [rsp+60h] [rbp-39h]
  const wchar_t *v19; // [rsp+68h] [rbp-31h]
  __int128 v20; // [rsp+70h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v21[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 *v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]
  LARGE_INTEGER *p_Timeout; // [rsp+B0h] [rbp+17h]
  int v26; // [rsp+B8h] [rbp+1Fh]
  int v27; // [rsp+BCh] [rbp+23h]
  __int64 *v28; // [rsp+C0h] [rbp+27h]
  int v29; // [rsp+C8h] [rbp+2Fh]
  int v30; // [rsp+CCh] [rbp+33h]

  Timeout.LowPart = 0;
  v4 = (__int64 *)(a1 + 208);
  v5 = *(_QWORD *)(a1 + 208);
  if ( v5 )
  {
    if ( (unsigned int)dword_140E08218 > 5 )
    {
      v24 = 0;
      v15 = v5;
      v22 = &v15;
      v23 = 8;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08218,
        (unsigned __int8 *)byte_14004EDF3,
        (const GUID *)ActivityIdThread,
        0LL,
        3u,
        v21);
    }
    *(_DWORD *)(a1 + 112) = 0;
    v8 = *(_BYTE *)(a1 + 120) == 0;
    v5 = *v4;
    *(_QWORD *)(a1 + 104) = *v4;
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 552);
      if ( !v9 )
        goto LABEL_9;
      v18 = 0LL;
      v19 = L"Reserve Configuration Update";
      v17[0] = 1;
      v17[1] = 300;
      v20 = 0LL;
      LODWORD(v5) = Pdcv2ActivationClientActivate(
                      v9,
                      (int)v17,
                      0,
                      a4,
                      L"AdaptiveStandby",
                      v13,
                      a1 + 128,
                      (LARGE_INTEGER)&Timeout);
      v10 = v5;
      if ( (unsigned int)dword_140E08218 > 5 )
      {
        v24 = 0;
        v27 = 0;
        v30 = 0;
        LODWORD(v15) = v5;
        v22 = &v15;
        p_Timeout = &Timeout;
        v16 = *(_QWORD *)(a1 + 128);
        v28 = &v16;
        v23 = 4;
        v26 = 4;
        v29 = 8;
        v11 = IoGetActivityIdThread();
        LODWORD(v5) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140E08218,
                        (unsigned __int8 *)byte_14004EF4D,
                        (const GUID *)v11,
                        0LL,
                        5u,
                        v21);
      }
      if ( v10 >= 0 )
      {
LABEL_9:
        *(_BYTE *)(a1 + 120) = 1;
        LODWORD(v5) = PopUmpoSendPowerAdaptiveReserveConfigurationQuery(v4);
      }
    }
  }
  return v5;
}
