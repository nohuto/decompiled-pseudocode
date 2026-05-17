/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x180069600
 * Callers:
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 * Callees:
 *     RtlFindUnicodeSubstring @ 0x180068EF0 (RtlFindUnicodeSubstring.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800690DC (RtlpWow64SelectSystem32PathInternal.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlReplaceSystemDirectoryInPath(
        unsigned __int16 *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        char a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  unsigned int Length; // edi
  char *UnicodeSubstring; // rax
  UNICODE_STRING v11; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING Src; // [rsp+30h] [rbp-18h] BYREF

  Src = 0LL;
  v11 = 0LL;
  if ( a2 == a3 )
    return 0LL;
  result = RtlpWow64SelectSystem32PathInternal(a3, a4, &Src);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    result = RtlpWow64SelectSystem32PathInternal(a2, a4, &v11);
    if ( (int)result >= 0 )
    {
      Length = Src.Length;
      if ( v11.Length == Src.Length )
      {
        UnicodeSubstring = RtlFindUnicodeSubstring(a1, &v11.Length, 1);
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
