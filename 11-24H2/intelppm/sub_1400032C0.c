/*
 * XREFs of sub_1400032C0 @ 0x1400032C0
 * Callers:
 *     sub_140005B40 @ 0x140005B40 (sub_140005B40.c)
 *     sub_140006AB0 @ 0x140006AB0 (sub_140006AB0.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_1400032C0(int a1, __int64 a2)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+70h] [rbp+8h] BYREF
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  result = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_140012AD0);
  if ( result )
  {
    UserData.Ptr = (ULONGLONG)&v6;
    *(_QWORD *)&UserData.Size = 4LL;
    v4 = &v7;
    v5 = 8LL;
    return EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_140012AD0, 0LL, 2u, &UserData);
  }
  return result;
}
