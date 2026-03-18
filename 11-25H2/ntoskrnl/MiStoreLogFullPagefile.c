/*
 * XREFs of MiStoreLogFullPagefile @ 0x1404F86A8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A1010 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  ULONG v0; // edx
  __int64 v1; // r8
  int v2; // [rsp+20h] [rbp-58h]
  int v3; // [rsp+28h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_QWORD *)&qword_140E372D8
    && **(_DWORD **)&qword_140E372D8 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E372D8, 2LL) )
  {
    tlgWriteEx_EtwWriteEx(v1, (unsigned __int8 *)&dword_140056C5C, v1, v0 - 1, v2, v3, v0, &v4);
  }
}
