/*
 * XREFs of MmStoreLogRegionInPageError @ 0x14068DCB0
 * Callers:
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x14060ADB8 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void MmStoreLogRegionInPageError()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // [rsp+20h] [rbp-59h]
  int v3; // [rsp+28h] [rbp-51h]
  int v4; // [rsp+40h] [rbp-39h] BYREF
  __int64 v5; // [rsp+48h] [rbp-31h] BYREF
  __int64 v6; // [rsp+50h] [rbp-29h] BYREF
  __int64 v7; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+60h] [rbp-19h] BYREF
  int *v9; // [rsp+80h] [rbp+7h]
  __int64 v10; // [rsp+88h] [rbp+Fh]
  __int64 *v11; // [rsp+90h] [rbp+17h]
  __int64 v12; // [rsp+98h] [rbp+1Fh]
  __int64 *v13; // [rsp+A0h] [rbp+27h]
  __int64 v14; // [rsp+A8h] [rbp+2Fh]
  __int64 *v15; // [rsp+B0h] [rbp+37h]
  __int64 v16; // [rsp+B8h] [rbp+3Fh]

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000002LL) )
  {
    v4 = *(_DWORD *)(v1 + 48);
    v10 = 4LL;
    v9 = &v4;
    v5 = *(_QWORD *)(v1 + 32);
    v11 = &v5;
    v6 = *(_QWORD *)(v1 + 40);
    v13 = &v6;
    v15 = &v7;
    v12 = 8LL;
    v14 = 8LL;
    v7 = 0x1000000LL;
    v16 = 8LL;
    tlgWriteEx_EtwWriteEx(v0, (unsigned __int8 *)&byte_140058DCB, v0, 1u, v2, v3, 6u, &v8);
  }
}
