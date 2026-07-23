/*
 * XREFs of PopWriteHiberImage @ 0x140B60960
 * Callers:
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     PopGetNextTable @ 0x1405D0B64 (PopGetNextTable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopAddPagesToCompressedPageSet @ 0x140B5E434 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x140B5E75C (PopCountDataAsProduced.c)
 *     PopRequestWrite @ 0x140B60100 (PopRequestWrite.c)
 *     PopHiberCheckForDebugBreak @ 0x140B6A908 (PopHiberCheckForDebugBreak.c)
 */

char __fastcall PopWriteHiberImage(ULONG_PTR BugCheckParameter3, char a2)
{
  void *v4; // r13
  __int64 v5; // rbp
  int v6; // esi
  char *v7; // rdi
  char v8; // r15
  __int64 NextTable; // rax
  unsigned int v11[4]; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v12[24]; // [rsp+50h] [rbp-168h] BYREF
  char *v13; // [rsp+68h] [rbp-150h]
  _BYTE v14[128]; // [rsp+100h] [rbp-B8h] BYREF

  memset_0(v12, 0, 0xB0uLL);
  v4 = qword_140F0BC28;
  v5 = *(_QWORD *)(BugCheckParameter3 + 296);
  v6 = 0;
  v11[0] = 0;
  v7 = 0LL;
  do
  {
    PopHiberCheckForDebugBreak();
    v8 = PopRequestWrite(BugCheckParameter3, (unsigned __int64)v4, 1);
    if ( !v7 )
    {
      NextTable = PopGetNextTable(BugCheckParameter3, (__int64)v11, (__int64)v14, (__int64)v12, a2, *(_QWORD *)(v5 + 8));
      v6 = NextTable;
      if ( !NextTable )
        continue;
      *(_QWORD *)(v5 + 56) += NextTable;
      v7 = PopAddPagesToCompressedPageSet(
             (_BYTE *)BugCheckParameter3,
             v5,
             v11,
             v13,
             a2,
             NextTable,
             (__int64)PopCompressCallback);
    }
    LOBYTE(NextTable) = PopCountDataAsProduced(v5, v7, v11, v14, v6, 1u);
    if ( (_BYTE)NextTable )
      v7 = 0LL;
  }
  while ( !v8 );
  return NextTable;
}
