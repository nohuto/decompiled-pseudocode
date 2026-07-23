/*
 * XREFs of KsepDsEventDataIrp @ 0x1405C8970
 * Callers:
 *     KseDsCallbackHookIrpDeviceControlFunction @ 0x1405C8230 (KseDsCallbackHookIrpDeviceControlFunction.c)
 *     KseDsCallbackHookIrpFunction @ 0x1405C82B0 (KseDsCallbackHookIrpFunction.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventDataIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-1h]
  int v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+64h] [rbp+Bh]
  __int64 *v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+74h] [rbp+1Bh]
  int *v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+84h] [rbp+2Bh]
  char *v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+94h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+5Fh] BYREF
  __int64 v22; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+6Fh] BYREF
  int v24; // [rsp+D0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v24 = a4;
  v23 = a3;
  v22 = a2;
  v21 = a1;
  if ( KseEtwHandle )
  {
    LOBYTE(v5) = EtwEventEnabled(KseEtwHandle, &KseDsEventDataIrp);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = (ULONGLONG)&v21;
      v8 = &v22;
      v11 = &v23;
      v14 = &v24;
      UserData.Size = 8;
      v9 = 8;
      v12 = 8;
      v17 = &a5;
      v15 = 4;
      v18 = 4;
      LOBYTE(v5) = EtwWriteEx(KseEtwHandle, &KseDsEventDataIrp, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
