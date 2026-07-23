/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1800EDC80
 * Callers:
 *     RtlpTpIoDllProcessUnloads @ 0x18010F914 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlDuplicateUnicodeString(ULONG Flags, PUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r15
  unsigned __int16 Length; // di
  wchar_t *v7; // rsi
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // cx
  unsigned __int16 v10; // bx
  wchar_t *Atom; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741811;
  result = 0;
  if ( StringIn )
  {
    if ( (StringIn->Length & 1) != 0
      || (MaximumLength = StringIn->MaximumLength, (MaximumLength & 1) != 0)
      || StringIn->Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringIn->Buffer && (StringIn->Length || MaximumLength) )
    {
      result = -1073741811;
    }
  }
  if ( result >= 0 )
  {
    if ( StringIn )
      Length = StringIn->Length;
    if ( (v5 & 1) == 0 || Length != 0xFFFE )
    {
      if ( (v5 & 1) != 0 )
        v10 = Length + 2;
      else
        v10 = Length;
      if ( (v5 & 2) == 0 && !Length )
        v10 = 0;
      if ( v10 )
      {
        Atom = (wchar_t *)RtlpAllocateAtom(v10);
        v7 = Atom;
        if ( !Atom )
          return -1073741801;
        if ( Length )
          memmove(Atom, StringIn->Buffer, Length);
        if ( (v5 & 1) != 0 )
          v7[(unsigned __int64)Length >> 1] = 0;
      }
      StringOut->MaximumLength = v10;
      StringOut->Length = Length;
      StringOut->Buffer = v7;
      return 0;
    }
    return -1073741562;
  }
  return result;
}
