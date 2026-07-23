/*
 * XREFs of PopBatteryTracePercentageRemaining @ 0x140ABA554
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTracePercentageRemaining(int a1, int a2, int a3, int a4)
{
  char result; // al
  BOOL v5; // [rsp+38h] [rbp-D0h] BYREF
  int v6; // [rsp+3Ch] [rbp-CCh] BYREF
  int v7; // [rsp+40h] [rbp-C8h] BYREF
  BOOL v8; // [rsp+44h] [rbp-C4h] BYREF
  int v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  int v11; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+54h] [rbp-B4h] BYREF
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  BOOL *v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  int *v19; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+A8h] [rbp-60h] BYREF
  int *v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  int *v24; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  BOOL *v26; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  int *v28; // [rsp+F8h] [rbp-10h]
  __int64 v29; // [rsp+100h] [rbp-8h]
  int *v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h]
  int *v32; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]
  int *v34; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+130h] [rbp+28h]
  int *v36; // [rsp+138h] [rbp+30h]
  __int64 v37; // [rsp+140h] [rbp+38h]
  int v38; // [rsp+178h] [rbp+70h] BYREF
  int v39; // [rsp+180h] [rbp+78h] BYREF
  int v40; // [rsp+190h] [rbp+88h] BYREF

  v40 = a4;
  v39 = a2;
  v38 = a1;
  result = a3 == 0;
  v5 = a3 == 0;
  if ( PopBatteryEtwRegistered )
  {
    result = EtwEventEnabled(PopBatteryEtwHandle, &BATTERY_EVT_BATTERY_PERCENT_REMAINING);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v38;
      *(_QWORD *)&UserData.Size = 4LL;
      v15 = &v39;
      v16 = 4LL;
      v17 = &v5;
      v18 = 4LL;
      v19 = &v40;
      v20 = 4LL;
      result = EtwWrite(PopBatteryEtwHandle, &BATTERY_EVT_BATTERY_PERCENT_REMAINING, 0LL, 4u, &UserData);
    }
  }
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
    if ( result )
    {
      v6 = v38;
      v23 = 4LL;
      v22 = &v6;
      v7 = v39;
      v24 = &v7;
      v8 = v5;
      v26 = &v8;
      v9 = v40;
      v28 = &v9;
      v10 = DWORD1(xmmword_140F0BCC0);
      v30 = &v10;
      v11 = HIDWORD(xmmword_140F0BEA0);
      v32 = &v11;
      v12 = HIDWORD(qword_140F0BCF4);
      v34 = &v12;
      v13 = DWORD2(xmmword_140F0BEA0);
      v36 = &v13;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07680,
               (unsigned __int8 *)&byte_14004C9EF,
               0LL,
               0LL,
               0xAu,
               &v21);
    }
  }
  return result;
}
