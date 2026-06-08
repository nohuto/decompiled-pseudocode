/*
 * XREFs of sub_1400410AC @ 0x1400410AC
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     sub_140004C38 @ 0x140004C38 (sub_140004C38.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

char __fastcall sub_1400410AC(__int64 a1)
{
  NTSTATUS v2; // eax
  struct _PROCESSOR_NUMBER v4; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  BYTE *p_Number; // [rsp+50h] [rbp-9h]
  int v7; // [rsp+58h] [rbp-1h]
  int v8; // [rsp+5Ch] [rbp+3h]
  __int64 v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  __int64 v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  __int64 v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  __int64 v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]

  v4 = 0;
  LOBYTE(v2) = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_140012C00);
  if ( (_BYTE)v2 )
  {
    v2 = sub_140004C38(a1, &v4);
    if ( v2 >= 0 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      v10 = 4;
      p_Number = &v4.Number;
      v9 = a1 + 52;
      v12 = a1 + 48;
      v15 = a1 + 56;
      v18 = a1 + 72;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      UserData.Size = 2;
      v7 = 1;
      LOBYTE(v2) = EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_140012C00, 0LL, 6u, &UserData);
    }
  }
  return v2;
}
