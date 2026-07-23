/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x18004ADB0
 * Callers:
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x180134834 (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1801621C4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x1801204A8 (NtdllpReallocateStringRoutine.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(const void **a1, const ANSI_STRING *a2)
{
  ULONG UTF8StringByteCount; // eax
  const CHAR *Buffer; // r9
  ULONG v6; // edx
  unsigned int v7; // ecx
  __int16 v8; // cx
  __int64 v9; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  void *Atom; // rbp
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+68h] [rbp+10h] BYREF

  UTF8StringByteCount = a2->Length;
  DestinationString = 0LL;
  if ( !(_WORD)UTF8StringByteCount )
    return 0LL;
  Buffer = a2->Buffer;
  UnicodeStringActualByteCount = 0;
  _InterlockedOr(v15, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
    v6 = UnicodeStringActualByteCount;
  }
  else
  {
    _InterlockedOr(v15, 0);
    v6 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( UTF8StringByteCount-- )
      {
        v12 = *(unsigned __int8 *)Buffer++;
        if ( *(_WORD *)(qword_1801CF020 + 2 * v12) )
        {
          if ( !UTF8StringByteCount )
          {
            v6 += 2;
            break;
          }
          --UTF8StringByteCount;
          ++Buffer;
        }
        v6 += 2;
      }
    }
    else
    {
      v6 = 2 * UTF8StringByteCount;
    }
  }
  v7 = v6 + *(unsigned __int16 *)a1 + 2;
  if ( v7 > *((unsigned __int16 *)a1 + 1) )
  {
    if ( v7 > 0xFFFE )
      return 3221225734LL;
    v13 = (v7 + 63) & 0xFFFFFFC0;
    if ( v13 > 0xFFFE )
      v13 = 65534;
    if ( a1[1] == a1 + 2 )
    {
      Atom = (void *)RtlpAllocateAtom(v13);
      if ( !Atom )
        return 3221225495LL;
      if ( *(_WORD *)a1 )
        memmove(Atom, a1[1], *(unsigned __int16 *)a1);
    }
    else
    {
      Atom = (void *)NtdllpReallocateStringRoutine(v13);
      if ( !Atom )
        return 3221225495LL;
    }
    a1[1] = Atom;
    *((_WORD *)a1 + 1) = v13;
  }
  v8 = *(_WORD *)a1;
  v9 = *(unsigned __int16 *)a1;
  DestinationString.Length = 0;
  DestinationString.Buffer = (wchar_t *)((char *)a1[1] + v9);
  DestinationString.MaximumLength = *((_WORD *)a1 + 1) - v8;
  RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
  *(_WORD *)a1 += DestinationString.Length;
  return 0LL;
}
