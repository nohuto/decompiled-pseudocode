/*
 * XREFs of sub_1400447B8 @ 0x1400447B8
 * Callers:
 *     sub_14003C708 @ 0x14003C708 (sub_14003C708.c)
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_1400447B8(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  v1 = (const EVENT_DESCRIPTOR *)&unk_140012F18;
  if ( a1 )
    v1 = &stru_140012F08;
  result = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v1);
  if ( result )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&dword_1400197EC;
    UserData.Size = 4;
    return EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v1, 0LL, 1u, &UserData);
  }
  return result;
}
