/*
 * XREFs of ?RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z @ 0x1401C9304
 * Callers:
 *     LogDiagSDCAccessDenied @ 0x1401CCC50 (LogDiagSDCAccessDenied.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyUnicodeStringEx(
        char *a1,
        __int64 a2,
        const struct _UNICODE_STRING *a3,
        unsigned __int16 **a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  USHORT Length; // dx
  USHORT MaximumLength; // ax
  PWSTR Buffer; // r9
  __int64 v9; // r8
  signed __int64 v10; // r9
  unsigned __int16 *v11; // rax

  if ( !a1 )
    return 3221225485LL;
  v5 = 0LL;
  if ( !a3 )
    goto LABEL_12;
  Length = a3->Length;
  if ( (a3->Length & 1) != 0
    || (MaximumLength = a3->MaximumLength, (MaximumLength & 1) != 0)
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !a3->Buffer && (Length || MaximumLength) )
  {
    result = 3221225485LL;
    *(_WORD *)a1 = 0;
    return result;
  }
  Buffer = a3->Buffer;
  v5 = (unsigned __int64)a3->Length >> 1;
  if ( !Buffer )
LABEL_12:
    Buffer = (PWSTR)&word_14025E168;
  v9 = 16LL;
  v10 = (char *)Buffer - a1;
  do
  {
    if ( !(v5 + v9 - 16) )
      break;
    *(_WORD *)a1 = *(_WORD *)&a1[v10];
    a1 += 2;
    --v9;
  }
  while ( v9 );
  v11 = (unsigned __int16 *)(a1 - 2);
  if ( v9 )
    v11 = (unsigned __int16 *)a1;
  *v11 = 0;
  return v9 == 0 ? 0x80000005 : 0;
}
