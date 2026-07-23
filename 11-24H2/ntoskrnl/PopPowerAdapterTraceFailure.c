/*
 * XREFs of PopPowerAdapterTraceFailure @ 0x14075AEC8
 * Callers:
 *     PopPowerAdapterIrpComplete @ 0x1405D5340 (PopPowerAdapterIrpComplete.c)
 *     PopPowerAdapterAdd @ 0x14075A030 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterReinitialize @ 0x14075AA58 (PopPowerAdapterReinitialize.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopPowerAdapterTraceFailure(_DWORD *a1, int a2, int a3)
{
  int v3; // r8d
  __int64 v4; // r9
  int v5; // r10d
  int v6; // [rsp+30h] [rbp-49h] BYREF
  int v7; // [rsp+34h] [rbp-45h] BYREF
  int v8; // [rsp+38h] [rbp-41h] BYREF
  int v9; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v10; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-29h] BYREF
  int *v12; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  int *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  int *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  int *v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  __int64 *v20; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+3Fh]

  if ( a1[32] == 2 )
  {
    a1[32] = 3;
    a1[56] = a2;
    if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    {
      v8 = v3;
      v12 = &v6;
      v7 = *(_DWORD *)(v4 + 220);
      v6 = v5;
      v14 = &v7;
      v16 = &v8;
      v9 = *(_DWORD *)(v4 + 228);
      v18 = &v9;
      v20 = &v10;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v10 = 0x1000000LL;
      v21 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)byte_14004CF53,
        0LL,
        0LL,
        7u,
        &v11);
    }
  }
  else
  {
    a1[32] = 2;
    a1[55] = a2;
    a1[57] = a3;
  }
}
