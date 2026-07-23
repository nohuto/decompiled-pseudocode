/*
 * XREFs of RtlIsNameInExpression @ 0x18007B800
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x18007B878 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x18007BEB4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 */

BOOLEAN __cdecl RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v5; // edi
  NTSTATUS v6; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int)Expression;
  v9 = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&v9, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    Name = (PUNICODE_STRING)&v9;
    IgnoreCase = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( *((_QWORD *)&v9 + 1) )
    RtlpSysVolFree(*((void **)&v9 + 1));
  return IsNameInExpressionPrivate;
}
