/*
 * XREFs of CmpLogFailureToGetFileSize @ 0x1409835C8
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpInitializeActualFileSizes @ 0x140981B04 (CmpInitializeActualFileSizes.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void CmpLogFailureToGetFileSize()
{
  int v0; // r8d
  char v1; // r9
  char v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+34h] [rbp-15h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  char *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
  {
    v2 = v1;
    v6 = &v2;
    v3 = v0;
    v8 = &v3;
    v7 = 1LL;
    v10 = &v4;
    v9 = 4LL;
    v4 = 0x1000000LL;
    v11 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)&word_140055976, 0LL, 0LL, 5u, &v5);
  }
}
