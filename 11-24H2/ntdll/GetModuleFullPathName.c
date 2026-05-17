/*
 * XREFs of GetModuleFullPathName @ 0x1800AFB48
 * Callers:
 *     GetImageTuple @ 0x1800AE238 (GetImageTuple.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     GetModuleFullPathNameUnicode @ 0x1800AFAD0 (GetModuleFullPathNameUnicode.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800B1570 (RtlUnicodeStringToAnsiString.c)
 */

wchar_t *__fastcall GetModuleFullPathName(unsigned __int64 a1, char *a2)
{
  void *ProcessHeap; // rcx
  wchar_t *result; // rax
  unsigned int ModuleFullPathNameUnicode; // eax
  unsigned int Length; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  *(_QWORD *)&SourceString.Length = 0LL;
  result = (wchar_t *)RtlAllocateHeap((__int64)ProcessHeap, 8u, 0x208uLL);
  SourceString.Buffer = result;
  if ( result )
  {
    SourceString.MaximumLength = 520;
    ModuleFullPathNameUnicode = GetModuleFullPathNameUnicode(a1, (__int64)result, 0x104u);
    Length = ModuleFullPathNameUnicode;
    if ( ModuleFullPathNameUnicode )
    {
      DestinationString.Buffer = a2;
      SourceString.Length = 2 * ModuleFullPathNameUnicode;
      DestinationString.MaximumLength = 260;
      v8 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
      if ( v8 >= 0 )
      {
        Length = DestinationString.Length;
        a2[DestinationString.Length] = 0;
      }
      else if ( v8 == -2147483643 )
      {
        Length = 260;
        a2[259] = 0;
      }
      else
      {
        Length = 0;
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)SourceString.Buffer);
    return (wchar_t *)Length;
  }
  return result;
}
