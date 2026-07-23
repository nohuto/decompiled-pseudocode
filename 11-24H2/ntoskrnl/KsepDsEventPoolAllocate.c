/*
 * XREFs of KsepDsEventPoolAllocate @ 0x1405C92C0
 * Callers:
 *     KseDsHookExAllocatePool @ 0x1405C85C0 (KseDsHookExAllocatePool.c)
 *     KseDsHookExAllocatePoolWithTag @ 0x1405C8620 (KseDsHookExAllocatePoolWithTag.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char KsepDsEventPoolAllocate(__int64 a1, __int64 a2, int a3, ...)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-1h]
  int v7; // [rsp+60h] [rbp+7h]
  int v8; // [rsp+64h] [rbp+Bh]
  int *v9; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+70h] [rbp+17h]
  int v11; // [rsp+74h] [rbp+1Bh]
  va_list v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+84h] [rbp+2Bh]
  va_list v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+90h] [rbp+37h]
  int v17; // [rsp+94h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+5Fh] BYREF
  __int64 v20; // [rsp+C0h] [rbp+67h] BYREF
  int v21; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+D0h] [rbp+77h] BYREF
  va_list va; // [rsp+D0h] [rbp+77h]
  va_list va1; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v3 = &retaddr;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  if ( KseEtwHandle )
  {
    LOBYTE(v3) = EtwEventEnabled(KseEtwHandle, &KseDsEventPoolAllocate);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&v19;
      v6 = &v20;
      UserData.Size = 8;
      v9 = &v21;
      va_copy(v12, va);
      va_copy(v15, va1);
      v7 = 8;
      v10 = 4;
      v13 = 8;
      v16 = 4;
      LOBYTE(v3) = EtwWriteEx(KseEtwHandle, &KseDsEventPoolAllocate, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v3;
}
