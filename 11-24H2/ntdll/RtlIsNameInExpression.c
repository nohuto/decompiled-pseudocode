/*
 * XREFs of RtlIsNameInExpression @ 0x1800AEF60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800AEFD8 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800AF614 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 */

char __fastcall RtlIsNameInExpression(int a1, __int128 *a2, char a3, __int64 a4)
{
  int v6; // eax
  char IsNameInExpressionPrivate; // bl
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( a3 && !a4 )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&v9);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    a2 = &v9;
    a3 = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(a1, (_DWORD)a2, a3, 0, a4);
  if ( *((_QWORD *)&v9 + 1) )
    RtlpSysVolFree(*((__int64 *)&v9 + 1));
  return IsNameInExpressionPrivate;
}
