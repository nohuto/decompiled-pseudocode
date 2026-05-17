/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x18000BF10
 * Callers:
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x180132D54 (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x180160C30 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18000C3F0 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x18000CF60 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x18011EBD8 (NtdllpReallocateStringRoutine.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(const void **a1, STRING *a2)
{
  int Length; // eax
  char *Buffer; // r9
  int v6; // edx
  unsigned int v7; // ecx
  __int16 v8; // cx
  __int64 v9; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  void *Atom; // rbp
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+68h] [rbp+10h] BYREF

  Length = a2->Length;
  DestinationString = 0LL;
  if ( !(_WORD)Length )
    return 0LL;
  Buffer = a2->Buffer;
  v17 = 0;
  _InterlockedOr(v15, 0);
  if ( word_1801CCFD0 == -535 || GlobalRtlNlsState == -535 )
  {
    RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v17, (_DWORD)Buffer, Length);
    v6 = v17;
  }
  else
  {
    _InterlockedOr(v15, 0);
    v6 = 0;
    if ( word_1801CCF9C )
    {
      while ( Length-- )
      {
        v12 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801CD020 + 2 * v12) )
        {
          if ( !Length )
          {
            v6 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v6 += 2;
      }
    }
    else
    {
      v6 = 2 * Length;
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
