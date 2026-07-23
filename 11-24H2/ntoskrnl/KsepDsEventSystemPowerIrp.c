/*
 * XREFs of KsepDsEventSystemPowerIrp @ 0x1405C9590
 * Callers:
 *     KseDsCallbackHookIrpPowerFunction @ 0x1405C83F0 (KseDsCallbackHookIrpPowerFunction.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventSystemPowerIrp(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  _UNKNOWN **v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-41h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-31h]
  int v11; // [rsp+60h] [rbp-29h]
  int v12; // [rsp+64h] [rbp-25h]
  __int64 *v13; // [rsp+68h] [rbp-21h]
  int v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+74h] [rbp-15h]
  int *v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+84h] [rbp-5h]
  char *v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+94h] [rbp+Bh]
  char *v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A4h] [rbp+1Bh]
  char *v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+B0h] [rbp+27h]
  int v27; // [rsp+B4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+47h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+4Fh] BYREF
  __int64 v30; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+5Fh] BYREF
  int v32; // [rsp+F0h] [rbp+67h] BYREF

  v7 = &retaddr;
  v32 = a4;
  v31 = a3;
  v30 = a2;
  v29 = a1;
  if ( KseEtwHandle )
  {
    LOBYTE(v7) = EtwEventEnabled(KseEtwHandle, &KseDsEventSystemPowerIrp);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      UserData.Ptr = (ULONGLONG)&v29;
      v10 = &v30;
      v13 = &v31;
      v16 = &v32;
      v19 = &a5;
      v22 = &a6;
      UserData.Size = 8;
      v11 = 8;
      v14 = 8;
      v25 = &a7;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      LOBYTE(v7) = EtwWriteEx(KseEtwHandle, &KseDsEventSystemPowerIrp, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v7;
}
