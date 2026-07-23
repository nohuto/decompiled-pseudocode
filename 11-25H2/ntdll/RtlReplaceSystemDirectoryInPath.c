/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x180069600
 * Callers:
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 * Callees:
 *     RtlFindUnicodeSubstring @ 0x180068EF0 (RtlFindUnicodeSubstring.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800690DC (RtlpWow64SelectSystem32PathInternal.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

ULONG __cdecl RtlReplaceSystemDirectoryInPath(
        PUNICODE_STRING Destination,
        USHORT Machine,
        USHORT TargetMachine,
        BOOLEAN IncludePathSeperator)
{
  ULONG result; // eax
  ULONG v8; // ebx
  unsigned int Length; // edi
  PWCHAR UnicodeSubstring; // rax
  _UNICODE_STRING SearchString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING Src; // [rsp+30h] [rbp-18h] BYREF

  Src = 0LL;
  SearchString = 0LL;
  if ( Machine == TargetMachine )
    return 0;
  result = RtlpWow64SelectSystem32PathInternal(TargetMachine, IncludePathSeperator, &Src);
  v8 = 0;
  if ( (result & 0x80000000) == 0 )
  {
    result = RtlpWow64SelectSystem32PathInternal(Machine, IncludePathSeperator, &SearchString);
    if ( (result & 0x80000000) == 0 )
    {
      Length = Src.Length;
      if ( SearchString.Length != Src.Length )
        return -1073741811;
      UnicodeSubstring = RtlFindUnicodeSubstring(Destination, &SearchString, 1u);
      if ( UnicodeSubstring )
        memmove(UnicodeSubstring, Src.Buffer, Length);
      return v8;
    }
  }
  return result;
}
