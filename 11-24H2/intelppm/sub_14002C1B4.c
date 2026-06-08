/*
 * XREFs of sub_14002C1B4 @ 0x14002C1B4
 * Callers:
 *     sub_14003BFC0 @ 0x14003BFC0 (sub_14003BFC0.c)
 * Callees:
 *     sub_140004C38 @ 0x140004C38 (sub_140004C38.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

char __fastcall sub_14002C1B4(__int64 a1, int a2, int a3)
{
  NTSTATUS v4; // eax
  struct _PROCESSOR_NUMBER v6; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  BYTE *p_Number; // [rsp+58h] [rbp+17h]
  int v9; // [rsp+60h] [rbp+1Fh]
  int v10; // [rsp+64h] [rbp+23h]
  int *v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+74h] [rbp+33h]
  int *v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+84h] [rbp+43h]
  int v17; // [rsp+B0h] [rbp+6Fh] BYREF
  int v18; // [rsp+B8h] [rbp+77h] BYREF

  v18 = a3;
  v17 = a2;
  v6 = 0;
  LOBYTE(v4) = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_140014350);
  if ( (_BYTE)v4 )
  {
    v4 = sub_140004C38(a1, &v6);
    if ( v4 >= 0 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      p_Number = &v6.Number;
      v11 = &v17;
      v14 = &v18;
      UserData.Size = 2;
      v9 = 1;
      v12 = 4;
      v15 = 4;
      LOBYTE(v4) = EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_140014350, 0LL, 4u, &UserData);
    }
  }
  return v4;
}
