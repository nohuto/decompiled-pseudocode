/*
 * XREFs of BiDoesHiveKeyExist @ 0x140814F40
 * Callers:
 *     BiAddStoreFromFile @ 0x14085A128 (BiAddStoreFromFile.c)
 * Callees:
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     BiOpenKeyNonBcd @ 0x1409A7914 (BiOpenKeyNonBcd.c)
 */

bool __fastcall BiDoesHiveKeyExist(const wchar_t *a1)
{
  void *v1; // rbx
  bool v3; // di
  int v4; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  Handle = 0LL;
  v3 = 0;
  v7 = 0LL;
  if ( !wcschr(a1, 0x5Cu) )
  {
    if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 131097LL, &Handle) >= 0 )
    {
      v4 = BiOpenKeyNonBcd(Handle, a1, 131097LL, &v7);
      v1 = v7;
      v3 = v4 >= 0;
    }
    if ( Handle )
      ZwClose(Handle);
    if ( v1 )
      ZwClose(v1);
  }
  return v3;
}
