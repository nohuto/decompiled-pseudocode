/*
 * XREFs of PopTraceInputSuppressionActionUpdate @ 0x140AA4788
 * Callers:
 *     PopEvaluateInputSuppressionAction @ 0x140AC5570 (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopTraceInputSuppressionActionUpdate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7)
{
  char v7; // r8
  char v8; // r9
  char v9; // r10
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  char v11; // [rsp+31h] [rbp-CFh] BYREF
  char v12; // [rsp+32h] [rbp-CEh] BYREF
  char v13; // [rsp+33h] [rbp-CDh] BYREF
  bool v14; // [rsp+34h] [rbp-CCh] BYREF
  char v15; // [rsp+35h] [rbp-CBh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-B0h] BYREF
  char *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  char *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  char *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  char *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  bool *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  char *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  __int64 *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v10 = PopIgnoreLidStateForInputSuppression;
    v12 = v7;
    v20 = &v10;
    v21 = 1LL;
    v22 = &v11;
    v14 = v8 == 0;
    v11 = v9;
    v24 = &v12;
    v13 = a5;
    v26 = &v13;
    v28 = &v14;
    v15 = PopEnableInputSuppression;
    v30 = &v15;
    v16 = a7;
    v32 = &v16;
    v17 = PopWnfCsEnterScenarioId;
    v34 = &v17;
    v36 = &v18;
    v23 = 1LL;
    v25 = 1LL;
    v27 = 1LL;
    v29 = 1LL;
    v31 = 1LL;
    v33 = 4LL;
    v35 = 8LL;
    v18 = 0x1000000LL;
    v37 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07680,
      (unsigned __int8 *)&dword_14004941C,
      0LL,
      0LL,
      0xBu,
      &v19);
  }
}
