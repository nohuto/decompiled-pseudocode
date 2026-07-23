/*
 * XREFs of CarEtwCrashEvent @ 0x140613DB0
 * Callers:
 *     CarReportUnusualShutdown @ 0x140615ACC (CarReportUnusualShutdown.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char CarEtwCrashEvent()
{
  unsigned int v0; // r8d
  char result; // al
  __int64 v2; // r10
  const CHAR *v3; // r9
  int *v4; // r10
  int v5; // ecx
  int v6; // r11d
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-B0h] BYREF
  int *v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+7Ch] [rbp-84h]
  int *v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  int *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  char *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  _BYTE v26[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v27[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+DCh] [rbp-24h]
  int *v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]

  v0 = dword_140E09070;
  result = dword_140E09070 && tlgKeywordOn((__int64)&dword_140E09070, 0x800000000000LL);
  if ( CarLogInitialized && result && v0 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E09070, 0x800000000000LL);
    if ( result )
    {
      v8 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v14 = &v8;
      v9 = *(_DWORD *)(v2 + 56);
      v17 = &v9;
      v10 = CarTipTag;
      v20 = &v10;
      v23 = &v7;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      v7 = 0;
      v24 = 1;
      tlgCreate1Sz_wchar_t((__int64)v26, L"POSTMORTEM");
      tlgCreate1Sz_char((__int64)v27, v3);
      v5 = *v4;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v28 = &v11;
      v12 = v4[2];
      v31 = &v12;
      v34 = *((_QWORD *)v4 + 5);
      v11 = v5;
      v29 = v6;
      v32 = v6;
      v35 = 8;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E09070,
               (unsigned __int8 *)&word_14005234E,
               0LL,
               0LL,
               0xBu,
               &v13);
    }
  }
  return result;
}
