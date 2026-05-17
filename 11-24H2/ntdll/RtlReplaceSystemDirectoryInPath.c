/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x1800AFC40
 * Callers:
 *     LdrpGetModuleName @ 0x1800B0FD0 (LdrpGetModuleName.c)
 * Callees:
 *     RtlFindUnicodeSubstring @ 0x1800AF530 (RtlFindUnicodeSubstring.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800AF71C (RtlpWow64SelectSystem32PathInternal.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlReplaceSystemDirectoryInPath(
        unsigned __int16 *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        char a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int Length; // edi
  char *UnicodeSubstring; // rax
  UNICODE_STRING v13; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING Src; // [rsp+30h] [rbp-18h] BYREF

  Src = 0LL;
  v13 = 0LL;
  if ( a2 == a3 )
    return 0LL;
  result = RtlpWow64SelectSystem32PathInternal(a3, a4, &Src);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    result = RtlpWow64SelectSystem32PathInternal(a2, a4, &v13);
    if ( (int)result >= 0 )
    {
      Length = Src.Length;
      if ( v13.Length == Src.Length )
      {
        LOBYTE(v9) = 1;
        UnicodeSubstring = RtlFindUnicodeSubstring(a1, &v13.Length, v9, v10);
        if ( UnicodeSubstring )
          memmove(UnicodeSubstring, Src.Buffer, Length);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
      return v8;
    }
  }
  return result;
}
