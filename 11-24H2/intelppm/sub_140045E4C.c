/*
 * XREFs of sub_140045E4C @ 0x140045E4C
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

BOOLEAN sub_140045E4C()
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v2; // [rsp+40h] [rbp-28h]
  int v3; // [rsp+48h] [rbp-20h]
  int v4; // [rsp+4Ch] [rbp-1Ch]

  result = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_140013110);
  if ( result )
  {
    UserData.Reserved = 0;
    v4 = 0;
    UserData.Ptr = (ULONGLONG)&word_140019A40;
    UserData.Size = 1;
    v2 = (char *)&word_140019A40 + 1;
    v3 = 1;
    return EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_140013110, 0LL, 2u, &UserData);
  }
  return result;
}
