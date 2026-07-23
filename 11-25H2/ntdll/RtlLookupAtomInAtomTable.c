/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x18005BC50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18006831C (RtlpAtomMapAtomToHandleEntry.c)
 *     NLS_UPCASE @ 0x180069080 (NLS_UPCASE.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 */

NTSTATUS __cdecl RtlLookupAtomInAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  NTSTATUS v6; // esi
  PWSTR v7; // rbx
  unsigned int v8; // r9d
  __int16 v9; // r10
  WCHAR v10; // ax
  __int64 v11; // rbx
  char *v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int16 v15; // cx
  PWSTR i; // rax
  _UNICODE_STRING String; // [rsp+40h] [rbp-58h] BYREF
  PWSTR v19; // [rsp+50h] [rbp-48h]
  PVOID v20; // [rsp+58h] [rbp-40h]
  char *v21; // [rsp+60h] [rbp-38h]
  __int16 v22; // [rsp+A0h] [rbp+8h]
  ULONG Value; // [rsp+B8h] [rbp+20h] BYREF

  v20 = AtomTableHandle;
  v6 = 0;
  if ( AtomTableHandle && *(_DWORD *)AtomTableHandle == 1836020801 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    v19 = AtomName;
    String = 0LL;
    Value = 0;
    if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *AtomName == 35 )
      {
        v15 = (_WORD)AtomName + 2;
        v19 = AtomName + 1;
        for ( i = AtomName + 1; *i; ++i )
        {
          if ( (unsigned __int16)(*i - 48) > 9u )
            goto LABEL_5;
        }
        Value = 0;
        String.Buffer = AtomName + 1;
        String.Length = (_WORD)i - v15;
        String.MaximumLength = (_WORD)i - v15;
        if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
        {
          if ( Value - 1 > 0xBFFF )
            v22 = -16384;
          else
            v22 = Value;
          LOWORD(AtomName) = v22;
LABEL_37:
          if ( (unsigned __int16)AtomName >= 0xC000u )
          {
            LOWORD(AtomName) = 0;
            v6 = -1073741811;
          }
          if ( Atom )
            *Atom = (unsigned __int16)AtomName;
          goto LABEL_56;
        }
      }
    }
    else if ( (unsigned __int16)AtomName < 0xC000u )
    {
      if ( !(_WORD)AtomName )
        LOWORD(AtomName) = -16384;
      goto LABEL_37;
    }
LABEL_5:
    if ( *AtomName )
    {
      if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v7 = AtomName;
        v8 = 0;
        v9 = -32;
        while ( 1 )
        {
          v10 = *v7;
          if ( !*v7 )
            break;
          ++v7;
          if ( v10 >= 0x61u )
          {
            if ( v10 > 0x7Au )
              v10 = NLS_UPCASE(qword_1801CF038, v10);
            else
              v10 += v9;
          }
          v8 += v10 + (v10 >> 1) + 2 * v10;
        }
        v11 = v7 - AtomName;
        if ( (unsigned int)v11 > 0xFF )
        {
          v12 = 0LL;
        }
        else
        {
          v12 = (char *)AtomTableHandle + 8 * (v8 % *((_DWORD *)AtomTableHandle + 16)) + 72;
          while ( 1 )
          {
            v12 = *(char **)v12;
            if ( !v12 )
              break;
            if ( (unsigned __int8)v12[16] == (_DWORD)v11 && !wcsicmp((const wchar_t *)v12 + 9, AtomName) )
              goto LABEL_19;
          }
        }
        goto LABEL_22;
      }
      v12 = 0LL;
      if ( (unsigned __int16)AtomName >= 0xC000u )
        v12 = (char *)RtlpAtomMapAtomToHandleEntry(AtomTableHandle, (unsigned __int16)AtomName & 0x3FFF);
LABEL_19:
      if ( !v12 )
        goto LABEL_22;
      if ( v12 != (char *)-12LL )
      {
        v21 = v12 + 12;
LABEL_22:
        if ( v12 )
        {
          v13 = *((_QWORD *)AtomTableHandle + 5);
          v14 = v13 + (unsigned int)*((unsigned __int16 *)v12 + 4) * *((_DWORD *)AtomTableHandle + 5);
          if ( v14
            && v14 >= v13
            && v14 < *((_QWORD *)AtomTableHandle + 6)
            && ((*((_DWORD *)AtomTableHandle + 5) - 1) & (unsigned int)v14) == 0
            && (*(_BYTE *)v14 & 1) != 0
            && *(_QWORD *)(v14 + 8) )
          {
            if ( Atom )
              *Atom = *((_WORD *)v12 + 5);
          }
          else
          {
            v6 = -1073741816;
          }
        }
        else
        {
          v6 = -1073741772;
        }
        goto LABEL_56;
      }
      v6 = -1073741801;
    }
    else
    {
      v6 = -1073741773;
    }
LABEL_56:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    return v6;
  }
  return -1073741811;
}
