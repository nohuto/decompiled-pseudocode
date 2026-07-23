/*
 * XREFs of PopTraceInputSuppressionActionUpdateV1 @ 0x140756C38
 * Callers:
 *     PopEvaluateInputSuppressionAction @ 0x140AC5570 (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopTraceInputSuppressionActionUpdateV1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        char a8)
{
  char v8; // r8
  char v9; // r9
  char v10; // r10
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  char v13; // [rsp+32h] [rbp-CEh] BYREF
  char v14; // [rsp+33h] [rbp-CDh] BYREF
  bool v15; // [rsp+34h] [rbp-CCh] BYREF
  char v16; // [rsp+35h] [rbp-CBh] BYREF
  char v17; // [rsp+36h] [rbp-CAh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-B0h] BYREF
  char *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  char *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  char *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  char *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  bool *v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  char *v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  int *v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+DCh] [rbp-24h]
  __int64 *v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  char *v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]
  __int64 *v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v11 = PopIgnoreLidStateForInputSuppression;
    v13 = v8;
    v22 = &v11;
    v44 = 8;
    v25 = &v12;
    v15 = v9 == 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v28 = &v13;
    v14 = a5;
    v31 = &v14;
    v34 = &v15;
    v16 = PopEnableInputSuppression;
    v37 = &v16;
    v18 = a7;
    v40 = &v18;
    v19 = PopWnfCsEnterScenarioId;
    v43 = &v19;
    v17 = a8;
    v46 = &v17;
    v49 = &v20;
    v50 = 8;
    v23 = 1;
    v12 = v10;
    v26 = 1;
    v29 = 1;
    v32 = 1;
    v35 = 1;
    v38 = 1;
    v41 = 4;
    v47 = 1;
    v20 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07680,
      (unsigned __int8 *)byte_1400491F3,
      0LL,
      0LL,
      0xCu,
      &v21);
  }
}
