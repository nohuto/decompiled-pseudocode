/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x180013A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x180013E20 (RtlUnicodeStringToInteger.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18007B20C (RtlpAtomMapAtomToHandleEntry.c)
 *     NLS_UPCASE @ 0x18007BF60 (NLS_UPCASE.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 */

NTSTATUS __cdecl RtlLookupAtomInAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  NTSTATUS v6; // esi
  __int64 v7; // r8
  PWSTR v8; // rbx
  __int64 v9; // r9
  __int16 v10; // r10
  WCHAR v11; // ax
  __int64 v12; // rbx
  char *v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int16 v16; // cx
  PWSTR i; // rax
  _UNICODE_STRING String; // [rsp+40h] [rbp-58h] BYREF
  PWSTR v20; // [rsp+50h] [rbp-48h]
  PVOID v21; // [rsp+58h] [rbp-40h]
  char *v22; // [rsp+60h] [rbp-38h]
  __int16 v23; // [rsp+A0h] [rbp+8h]
  ULONG Value; // [rsp+B8h] [rbp+20h] BYREF

  v21 = AtomTableHandle;
  v6 = 0;
  if ( AtomTableHandle && *(_DWORD *)AtomTableHandle == 1836020801 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    v20 = AtomName;
    String = 0LL;
    Value = 0;
    if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *AtomName == 35 )
      {
        v16 = (_WORD)AtomName + 2;
        v20 = AtomName + 1;
        for ( i = AtomName + 1; *i; ++i )
        {
          if ( (unsigned __int16)(*i - 48) > 9u )
            goto LABEL_5;
        }
        Value = 0;
        String.Buffer = AtomName + 1;
        String.Length = (_WORD)i - v16;
        String.MaximumLength = (_WORD)i - v16;
        if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
        {
          if ( Value - 1 > 0xBFFF )
            v23 = -16384;
          else
            v23 = Value;
          LOWORD(AtomName) = v23;
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
        v8 = AtomName;
        v9 = 0LL;
        v10 = -32;
        while ( 1 )
        {
          v11 = *v8;
          if ( !*v8 )
            break;
          ++v8;
          if ( v11 >= 0x61u )
          {
            if ( v11 > 0x7Au )
              v11 = NLS_UPCASE(qword_1801CC038, v11, v7, v9);
            else
              v11 += v10;
          }
          v9 = v11 + (v11 >> 1) + 2 * v11 + (unsigned int)v9;
        }
        v12 = v8 - AtomName;
        if ( (unsigned int)v12 > 0xFF )
        {
          v13 = 0LL;
        }
        else
        {
          v13 = (char *)AtomTableHandle + 8 * ((unsigned int)v9 % *((_DWORD *)AtomTableHandle + 16)) + 72;
          while ( 1 )
          {
            v13 = *(char **)v13;
            if ( !v13 )
              break;
            if ( (unsigned __int8)v13[16] == (_DWORD)v12 && !wcsicmp((const wchar_t *)v13 + 9, AtomName) )
              goto LABEL_19;
          }
        }
        goto LABEL_22;
      }
      v13 = 0LL;
      if ( (unsigned __int16)AtomName >= 0xC000u )
        v13 = (char *)RtlpAtomMapAtomToHandleEntry(AtomTableHandle, (unsigned __int16)AtomName & 0x3FFF);
LABEL_19:
      if ( !v13 )
        goto LABEL_22;
      if ( v13 != (char *)-12LL )
      {
        v22 = v13 + 12;
LABEL_22:
        if ( v13 )
        {
          v14 = *((_QWORD *)AtomTableHandle + 5);
          v15 = v14 + (unsigned int)*((unsigned __int16 *)v13 + 4) * *((_DWORD *)AtomTableHandle + 5);
          if ( v15
            && v15 >= v14
            && v15 < *((_QWORD *)AtomTableHandle + 6)
            && ((*((_DWORD *)AtomTableHandle + 5) - 1) & (unsigned int)v15) == 0
            && (*(_BYTE *)v15 & 1) != 0
            && *(_QWORD *)(v15 + 8) )
          {
            if ( Atom )
              *Atom = *((_WORD *)v13 + 5);
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
