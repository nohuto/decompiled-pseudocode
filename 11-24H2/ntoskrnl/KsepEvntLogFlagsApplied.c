/*
 * XREFs of KsepEvntLogFlagsApplied @ 0x1405C7CC8
 * Callers:
 *     KseQueryDeviceFlags @ 0x140944070 (KseQueryDeviceFlags.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char KsepEvntLogFlagsApplied(unsigned __int16 *a1, unsigned __int16 *a2, int a3, ...)
{
  _UNKNOWN **v3; // rax
  ULONGLONG v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+60h] [rbp+1Fh]
  int v11; // [rsp+64h] [rbp+23h]
  int *v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  va_list v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v19; // [rsp+B8h] [rbp+77h] BYREF
  va_list va; // [rsp+C0h] [rbp+7Fh] BYREF

  va_start(va, a3);
  v3 = &retaddr;
  v19 = a3;
  if ( KseEtwHandle )
  {
    LOBYTE(v3) = EtwEventEnabled(KseEtwHandle, &KseFlagsApplied);
    if ( (_BYTE)v3 )
    {
      if ( a1 && a2 )
      {
        v6 = *((_QWORD *)a1 + 1);
        UserData.Reserved = 0;
        v11 = 0;
        v14 = 0;
        v17 = 0;
        UserData.Ptr = v6;
        LODWORD(v6) = *a1 + 2;
        v13 = 4;
        UserData.Size = v6;
        v9 = *((_QWORD *)a2 + 1);
        LODWORD(v6) = *a2 + 2;
        v16 = 8;
        v10 = v6;
        v12 = &v19;
        va_copy(v15, va);
        LOBYTE(v3) = EtwWriteEx(KseEtwHandle, &KseFlagsApplied, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return (char)v3;
}
