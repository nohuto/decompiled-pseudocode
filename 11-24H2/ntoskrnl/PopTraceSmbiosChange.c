/*
 * XREFs of PopTraceSmbiosChange @ 0x1405D3A98
 * Callers:
 *     PopUpdateSmbiosData @ 0x14075351C (PopUpdateSmbiosData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopTraceSmbiosChange()
{
  __int64 v0; // r8
  int v1; // r9d
  __int64 v2; // r10
  int v3; // r11d
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+70h] [rbp+7h]
  int v10; // [rsp+78h] [rbp+Fh]
  int v11; // [rsp+7Ch] [rbp+13h]
  int *v12; // [rsp+80h] [rbp+17h]
  int v13; // [rsp+88h] [rbp+1Fh]
  int v14; // [rsp+8Ch] [rbp+23h]
  __int64 *v15; // [rsp+90h] [rbp+27h]
  int v16; // [rsp+98h] [rbp+2Fh]
  int v17; // [rsp+9Ch] [rbp+33h]
  int *v18; // [rsp+A0h] [rbp+37h]
  int v19; // [rsp+A8h] [rbp+3Fh]
  int v20; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v9 = &v6;
    v12 = &v4;
    v15 = &v7;
    v6 = v2;
    v18 = &v5;
    v7 = v0;
    v5 = v1;
    v13 = 4;
    v19 = 4;
    v10 = 8;
    v4 = v3;
    v16 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)&word_14004A416, 0LL, 0LL, 6u, &v8);
  }
}
