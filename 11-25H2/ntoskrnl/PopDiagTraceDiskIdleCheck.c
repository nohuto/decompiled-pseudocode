/*
 * XREFs of PopDiagTraceDiskIdleCheck @ 0x1404B42C4
 * Callers:
 *     PopScanIdleList @ 0x14048872C (PopScanIdleList.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDiskIdleCheck(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  int *v7; // [rsp+58h] [rbp+7h]
  int v8; // [rsp+60h] [rbp+Fh]
  int v9; // [rsp+64h] [rbp+13h]
  int *v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+74h] [rbp+23h]
  __int64 v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  __int64 v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v20; // [rsp+C0h] [rbp+6Fh] BYREF
  int v21; // [rsp+C8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v21 = a3;
  v20 = a2;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DISK_IDLE_CHECK);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = a1 + 24;
      v7 = &v20;
      v10 = &v21;
      v13 = a1 + 96;
      v16 = a1 + 100;
      v8 = 4;
      v11 = 4;
      v14 = 4;
      v17 = 4;
      UserData.Size = 8;
      LOBYTE(v3) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DISK_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v3;
}
