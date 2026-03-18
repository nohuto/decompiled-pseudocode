/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x140347540
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140347600 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140347BD0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 */

__int64 __fastcall RtlIsNameInUnUpcasedExpression(
        UNICODE_STRING *p_UnicodeString,
        UNICODE_STRING *a2,
        char a3,
        __int64 a4)
{
  __int64 v4; // rbx
  int v6; // eax
  int v7; // eax
  unsigned __int8 IsNameInExpressionPrivate; // bl
  UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-18h] BYREF

  v4 = a4;
  *(_QWORD *)&v10.Length = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v10.Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( a3 && !a4 )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&v10, a2);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v7 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, p_UnicodeString);
    if ( v7 < 0 )
      RtlRaiseStatus(v7);
    a2 = &v10;
    p_UnicodeString = &UnicodeString;
    a3 = 0;
  }
  LOBYTE(a4) = 1;
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate((_DWORD)p_UnicodeString, (_DWORD)a2, a3, a4, v4);
  if ( v10.Buffer )
    RtlFreeAnsiString(&v10);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
