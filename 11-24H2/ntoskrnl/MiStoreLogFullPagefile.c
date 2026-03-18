/*
 * XREFs of MiStoreLogFullPagefile @ 0x1404FAB48
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A083C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  ULONG v0; // edx
  __int64 v1; // r8
  int v2; // [rsp+20h] [rbp-58h]
  int v3; // [rsp+28h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_QWORD *)&qword_140E37518
    && **(_DWORD **)&qword_140E37518 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37518, 2LL) )
  {
    tlgWriteEx_EtwWriteEx(v1, (unsigned __int8 *)&word_14005826A, v1, v0 - 1, v2, v3, v0, &v4);
  }
}
