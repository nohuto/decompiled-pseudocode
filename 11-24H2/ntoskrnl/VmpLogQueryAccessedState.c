/*
 * XREFs of VmpLogQueryAccessedState @ 0x14064A090
 * Callers:
 *     VmpQueryAccessedState @ 0x140399630 (VmpQueryAccessedState.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall VmpLogQueryAccessedState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // r10
  int v11; // r11d
  int v12; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+28h] [rbp-D8h]
  int Flink; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp-90h] BYREF
  int *p_Flink; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]

  if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 512LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    p_Flink = &Flink;
    v25 = &v15;
    v27 = &v16;
    v17 = a5;
    v29 = &v17;
    v31 = &v18;
    v19 = a6;
    v33 = &v19;
    v20 = a7;
    v35 = &v20;
    v21 = a8;
    v37 = &v21;
    v18 = v9;
    v24 = 4LL;
    v15 = v11;
    v26 = 4LL;
    v16 = v8;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 8LL;
    v38 = 8LL;
    tlgWriteEx_EtwWriteEx(v10, (unsigned __int8 *)&byte_1400529E5, v8, 0, v12, v13, 0xAu, &v22);
  }
}
