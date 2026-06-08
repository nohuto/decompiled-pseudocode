/*
 * XREFs of sub_1400456F0 @ 0x1400456F0
 * Callers:
 *     sub_140045550 @ 0x140045550 (sub_140045550.c)
 * Callees:
 *     sub_1400039B0 @ 0x1400039B0 (sub_1400039B0.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

char __fastcall sub_1400456F0(ULONG *a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7)
{
  const EVENT_DESCRIPTOR *v7; // rax
  const EVENT_DESCRIPTOR *v8; // rbx
  _DWORD v10[4]; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  int *v12; // [rsp+58h] [rbp-21h]
  int v13; // [rsp+60h] [rbp-19h]
  int v14; // [rsp+64h] [rbp-15h]
  int *v15; // [rsp+68h] [rbp-11h]
  int v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+74h] [rbp-5h]
  int *v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+84h] [rbp+Bh]
  char *v21; // [rsp+88h] [rbp+Fh]
  int v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+94h] [rbp+1Bh]
  int v24; // [rsp+D0h] [rbp+57h] BYREF
  int v25; // [rsp+D8h] [rbp+5Fh] BYREF
  int v26; // [rsp+E0h] [rbp+67h] BYREF

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v10[0] = 0;
  v7 = (const EVENT_DESCRIPTOR *)sub_1400039B0(a1, a6, a7, (__int64)v10, (__int64)&UserData);
  v8 = v7;
  if ( v7 )
  {
    LOBYTE(v7) = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v7);
    if ( (_BYTE)v7 )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v12 = &v24;
      v15 = &v25;
      v13 = 4;
      v18 = &v26;
      v21 = &a5;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      LOBYTE(v7) = EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v8, 0LL, 5u, &UserData);
    }
  }
  return (char)v7;
}
