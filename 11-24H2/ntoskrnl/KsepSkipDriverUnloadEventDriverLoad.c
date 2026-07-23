/*
 * XREFs of KsepSkipDriverUnloadEventDriverLoad @ 0x1405C982C
 * Callers:
 *     KseSkipDriverUnloadHookDriverTargeted @ 0x1405C97F0 (KseSkipDriverUnloadHookDriverTargeted.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KsepSkipDriverUnloadEventDriverLoad(unsigned __int16 *a1, __int64 a2, int a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  ULONGLONG v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-1h]
  int v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+64h] [rbp+Bh]
  int *v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+74h] [rbp+1Bh]
  int *v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+84h] [rbp+2Bh]
  char *v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+90h] [rbp+37h]
  int v21; // [rsp+94h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+67h] BYREF
  int v24; // [rsp+C8h] [rbp+6Fh] BYREF
  int v25; // [rsp+D0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v25 = a4;
  v24 = a3;
  v23 = a2;
  if ( KseEtwHandle )
  {
    LOBYTE(v5) = EtwEventEnabled(KseEtwHandle, &KseSkipDriverUnloadEventDriverLoad);
    if ( (_BYTE)v5 )
    {
      v7 = *((_QWORD *)a1 + 1);
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      UserData.Ptr = v7;
      LODWORD(v7) = *a1 + 2;
      v14 = 4;
      UserData.Size = v7;
      v10 = &v23;
      v13 = &v24;
      v16 = &v25;
      v19 = &a5;
      v17 = 4;
      v20 = 4;
      v11 = 8;
      LOBYTE(v5) = EtwWriteEx(KseEtwHandle, &KseSkipDriverUnloadEventDriverLoad, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
