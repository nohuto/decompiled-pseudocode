/*
 * XREFs of ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14060B7FC
 * Callers:
 *     SmKmKeyGenStart @ 0x14079A4E4 (SmKmKeyGenStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyUnicodeString(char *a1, unsigned __int64 a2, const struct _UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 Length; // r9
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // r10
  unsigned __int64 v7; // r8
  signed __int64 v8; // r10
  unsigned __int16 *v9; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFE )
    return 3221225485LL;
  Length = a3->Length;
  if ( (Length & 1) != 0
    || (MaximumLength = a3->MaximumLength, (MaximumLength & 1) != 0)
    || (unsigned __int16)Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !a3->Buffer && ((_WORD)Length || MaximumLength) )
  {
    *(_WORD *)a1 = 0;
    return 3221225485LL;
  }
  Buffer = a3->Buffer;
  v7 = (Length >> 1) - v3;
  v8 = (char *)Buffer - a1;
  do
  {
    if ( !(v7 + v3) )
      break;
    *(_WORD *)a1 = *(_WORD *)&a1[v8];
    a1 += 2;
    --v3;
  }
  while ( v3 );
  v9 = (unsigned __int16 *)(a1 - 2);
  if ( v3 )
    v9 = (unsigned __int16 *)a1;
  *v9 = 0;
  return v3 == 0 ? 0x80000005 : 0;
}
