/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x180038910
 * Callers:
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x180130F84 (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x18015EFF0 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180038DF0 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x180039960 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x18011CE08 (NtdllpReallocateStringRoutine.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(unsigned __int16 *a1, const ANSI_STRING *a2)
{
  ULONG UTF8StringByteCount; // eax
  const CHAR *Buffer; // r9
  ULONG v6; // edx
  unsigned int v7; // ecx
  __int16 v8; // cx
  __int64 v9; // rax
  __int64 v12; // rcx
  unsigned __int16 *v13; // rdx
  unsigned int v14; // esi
  void *Atom; // rbp
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+68h] [rbp+10h] BYREF

  UTF8StringByteCount = a2->Length;
  DestinationString = 0LL;
  if ( !(_WORD)UTF8StringByteCount )
    return 0LL;
  Buffer = a2->Buffer;
  UnicodeStringActualByteCount = 0;
  _InterlockedOr(v16, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
    v6 = UnicodeStringActualByteCount;
  }
  else
  {
    _InterlockedOr(v16, 0);
    v6 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( UTF8StringByteCount-- )
      {
        v12 = *(unsigned __int8 *)Buffer++;
        if ( *(_WORD *)(qword_1801CC020 + 2 * v12) )
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
  v7 = v6 + *a1 + 2;
  if ( v7 > a1[1] )
  {
    if ( v7 > 0xFFFE )
      return 3221225734LL;
    v13 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v14 = (v7 + 63) & 0xFFFFFFC0;
    if ( v14 > 0xFFFE )
      v14 = 65534;
    if ( v13 == a1 + 8 )
    {
      Atom = (void *)RtlpAllocateAtom(v14);
      if ( !Atom )
        return 3221225495LL;
      if ( *a1 )
        memmove(Atom, *((const void **)a1 + 1), *a1);
    }
    else
    {
      Atom = (void *)NtdllpReallocateStringRoutine(v14, v13);
      if ( !Atom )
        return 3221225495LL;
    }
    *((_QWORD *)a1 + 1) = Atom;
    a1[1] = v14;
  }
  v8 = *a1;
  v9 = *a1;
  DestinationString.Length = 0;
  DestinationString.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + v9);
  DestinationString.MaximumLength = a1[1] - v8;
  RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
  *a1 += DestinationString.Length;
  return 0LL;
}
