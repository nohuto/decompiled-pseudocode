/*
 * XREFs of PopWriteHiberImage @ 0x140B5E8E0
 * Callers:
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     PopGetNextTable @ 0x1405D3444 (PopGetNextTable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopAddPagesToCompressedPageSet @ 0x140B5C3C4 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x140B5C6EC (PopCountDataAsProduced.c)
 *     PopRequestWrite @ 0x140B5E080 (PopRequestWrite.c)
 *     PopHiberCheckForDebugBreak @ 0x140B691F0 (PopHiberCheckForDebugBreak.c)
 */

char __fastcall PopWriteHiberImage(ULONG_PTR BugCheckParameter3, char a2)
{
  void *v4; // r13
  __int64 v5; // rbp
  int v6; // esi
  char *v7; // rdi
  __int64 v8; // r9
  char v9; // r15
  __int64 NextTable; // rax
  unsigned int v12[4]; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-168h] BYREF
  char *v14; // [rsp+68h] [rbp-150h]
  _BYTE v15[128]; // [rsp+100h] [rbp-B8h] BYREF

  memset_0(v13, 0, 0xB0uLL);
  v4 = qword_140F0ADE8;
  v5 = *(_QWORD *)(BugCheckParameter3 + 296);
  v6 = 0;
  v12[0] = 0;
  v7 = 0LL;
  do
  {
    PopHiberCheckForDebugBreak();
    v9 = PopRequestWrite(BugCheckParameter3, (unsigned __int64)v4, 1LL, v8);
    if ( !v7 )
    {
      NextTable = PopGetNextTable(BugCheckParameter3, (__int64)v12, (__int64)v15, (__int64)v13, a2, *(_QWORD *)(v5 + 8));
      v6 = NextTable;
      if ( !NextTable )
        continue;
      *(_QWORD *)(v5 + 56) += NextTable;
      v7 = PopAddPagesToCompressedPageSet(
             (_BYTE *)BugCheckParameter3,
             v5,
             v12,
             v14,
             a2,
             NextTable,
             (__int64)PopCompressCallback);
    }
    LOBYTE(NextTable) = PopCountDataAsProduced(v5, v7, v12, v15, v6, 1u);
    if ( (_BYTE)NextTable )
      v7 = 0LL;
  }
  while ( !v9 );
  return NextTable;
}
