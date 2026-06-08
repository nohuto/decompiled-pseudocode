/*
 * XREFs of sub_140028730 @ 0x140028730
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_140028730(__int64 a1)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+40h] [rbp-38h]
  __int64 v5; // [rsp+48h] [rbp-30h]
  __int64 v6; // [rsp+50h] [rbp-28h]
  __int64 v7; // [rsp+58h] [rbp-20h]

  result = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_1400134F8);
  if ( result )
  {
    UserData.Ptr = a1 + 52;
    *(_QWORD *)&UserData.Size = 4LL;
    v4 = a1 + 48;
    v5 = 4LL;
    v6 = a1 + 72;
    v7 = 4LL;
    return EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_1400134F8, 0LL, 3u, &UserData);
  }
  return result;
}
