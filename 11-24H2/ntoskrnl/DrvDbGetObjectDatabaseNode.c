/*
 * XREFs of DrvDbGetObjectDatabaseNode @ 0x140928938
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x140821B90 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     RtlDuplicateUnicodeString @ 0x1409287C0 (RtlDuplicateUnicodeString.c)
 *     DrvDbFindDatabaseNode @ 0x140928D98 (DrvDbFindDatabaseNode.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall DrvDbGetObjectDatabaseNode(__int64 a1, wchar_t *a2, wchar_t **a3, _QWORD *a4)
{
  bool v4; // zf
  NTSTATUS DatabaseNode; // ebx
  wchar_t *v10; // rdi
  wchar_t *v12; // rbp
  wchar_t *v13; // rax
  wchar_t *Buffer; // rsi
  UNICODE_STRING StringIn; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-38h] BYREF

  v4 = *a2 == 64;
  *(_DWORD *)(&StringIn.MaximumLength + 1) = 0;
  DatabaseNode = 0;
  StringOut = 0LL;
  if ( !v4
    || (v12 = a2 + 1, (v13 = wcschr(a2 + 1, 0x3Au)) == 0LL)
    || (StringIn.Buffer = v12,
        StringIn.Length = 2 * (v13 - v12),
        StringIn.MaximumLength = StringIn.Length,
        v10 = v13 + 1,
        v13 == (wchar_t *)-2LL) )
  {
    v10 = a2;
    StringIn.Buffer = 0LL;
    *(_DWORD *)&StringIn.Length = 0;
  }
  if ( !v10 )
    return (unsigned int)-1073741811;
  if ( v10 == a2 )
  {
    *a4 = *(_QWORD *)(a1 + 48);
  }
  else
  {
    DatabaseNode = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut);
    if ( DatabaseNode < 0 )
      return (unsigned int)DatabaseNode;
    Buffer = StringOut.Buffer;
    DatabaseNode = DrvDbFindDatabaseNode(a1, StringOut.Buffer, a4);
    if ( Buffer )
      ExFreePool(Buffer);
    if ( DatabaseNode == -1073741772 )
      return (unsigned int)-1073741766;
    if ( DatabaseNode < 0 )
      return (unsigned int)DatabaseNode;
  }
  *a3 = v10;
  return (unsigned int)DatabaseNode;
}
