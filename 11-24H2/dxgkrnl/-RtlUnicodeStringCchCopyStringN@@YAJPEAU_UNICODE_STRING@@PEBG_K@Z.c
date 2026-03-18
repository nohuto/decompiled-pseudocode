/*
 * XREFs of ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x14007D284
 * Callers:
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1403F0520 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCchCopyStringN(struct _UNICODE_STRING *a1, wchar_t *a2, unsigned __int64 a3)
{
  unsigned __int16 Length; // r10
  unsigned __int16 MaximumLength; // r9
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  wchar_t *Buffer; // r10
  __int16 v10; // cx
  unsigned __int64 v11; // rdx

  Length = a1->Length;
  if ( (a1->Length & 1) != 0 )
    return 3221225485LL;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return 3221225485LL;
  if ( Length > MaximumLength )
    return 3221225485LL;
  if ( MaximumLength == 0xFFFF )
    return 3221225485LL;
  result = 0LL;
  if ( !a1->Buffer && (Length || MaximumLength) )
    return 3221225485LL;
  v8 = a1->MaximumLength;
  Buffer = a1->Buffer;
  v10 = 0;
  v11 = v8 >> 1;
  if ( a3 <= 0x7FFF )
  {
    if ( v11 )
    {
      while ( a3 )
      {
        if ( *a2 )
        {
          *Buffer++ = *a2++;
          --a3;
          ++v10;
          if ( --v11 )
            continue;
        }
        if ( v11 )
          break;
        goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      if ( a3 )
      {
        if ( *a2 )
          result = 2147483653LL;
      }
    }
  }
  else
  {
    result = 3221225485LL;
  }
  a1->Length = 2 * v10;
  return result;
}
