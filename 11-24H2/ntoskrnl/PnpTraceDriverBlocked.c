/*
 * XREFs of PnpTraceDriverBlocked @ 0x140730868
 * Callers:
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PnpTraceDriverBlocked()
{
  const wchar_t *v0; // r8
  int v1; // r9d
  __int64 v2; // r11
  int v3; // r10d
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-9h]
  int v9; // [rsp+68h] [rbp-1h]
  int v10; // [rsp+6Ch] [rbp+3h]
  _BYTE v11[16]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v12; // [rsp+80h] [rbp+17h]
  int v13; // [rsp+88h] [rbp+1Fh]
  int v14; // [rsp+8Ch] [rbp+23h]
  int *v15; // [rsp+90h] [rbp+27h]
  int v16; // [rsp+98h] [rbp+2Fh]
  int v17; // [rsp+9Ch] [rbp+33h]
  int *v18; // [rsp+A0h] [rbp+37h]
  int v19; // [rsp+A8h] [rbp+3Fh]
  int v20; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_140E06FA8 > 5 && tlgKeywordOn((__int64)&dword_140E06FA8, 0x400000000000LL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = 2048LL;
    v9 = 8;
    tlgCreate1Sz_wchar_t((__int64)v11, v0);
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v15 = &v4;
    v16 = 4;
    v18 = &v5;
    v5 = v1;
    v19 = 4;
    v12 = v2;
    v13 = 16;
    v4 = v3;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06FA8, (unsigned __int8 *)&word_140046EDE, 0LL, 0LL, 7u, &v7);
  }
}
