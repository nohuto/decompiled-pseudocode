/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x180067B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x1800682F0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18006831C (RtlpAtomMapAtomToHandleEntry.c)
 *     _snwprintf_s @ 0x18012E940 (_snwprintf_s.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  int v8; // ebx
  NTSTATUS v10; // edi
  __int64 v11; // rax
  unsigned __int32 v12; // r9d
  __int64 v13; // rdx
  unsigned __int16 *v14; // rax
  unsigned int v15; // esi
  ULONG v16; // eax
  unsigned __int64 v17; // rbx
  ULONG v18; // eax
  wchar_t Buffer[16]; // [rsp+40h] [rbp-68h] BYREF

  v8 = Atom;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( (unsigned __int16)v8 < 0xC000u )
    {
      if ( !(_WORD)v8 )
      {
        v10 = -1073741811;
        goto LABEL_31;
      }
      v10 = 0;
      if ( AtomUsage )
        *AtomUsage = 1;
      if ( AtomFlags )
        *AtomFlags = 1;
      if ( !AtomName )
        goto LABEL_31;
      v15 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
      v18 = *AtomNameLength;
      if ( v15 >= *AtomNameLength )
      {
        v15 = v18 - 2;
        if ( v18 < 2 )
          v15 = 0;
      }
      if ( v15 )
      {
        memmove(AtomName, Buffer, v15);
        v17 = (unsigned __int64)v15 >> 1;
        goto LABEL_14;
      }
    }
    else
    {
      v10 = -1073741816;
      v11 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, v8 & 0x3FFF);
      v13 = v11;
      if ( !v11 )
        goto LABEL_31;
      if ( *(_WORD *)(v11 + 10) != (_WORD)v8 )
        goto LABEL_31;
      v14 = (unsigned __int16 *)(v11 + 12);
      if ( !v14 )
        goto LABEL_31;
      v10 = v12;
      if ( AtomUsage )
        *AtomUsage = *v14;
      if ( AtomFlags )
        *AtomFlags = *(unsigned __int16 *)(v13 + 14);
      if ( !AtomName )
        goto LABEL_31;
      v15 = 2 * *(unsigned __int8 *)(v13 + 16);
      v16 = *AtomNameLength;
      if ( v15 >= *AtomNameLength )
      {
        if ( v16 < 2 )
        {
          *AtomNameLength = v15;
          v15 = v12;
        }
        else
        {
          v15 = v16 - 2;
        }
      }
      if ( v15 )
      {
        memmove(AtomName, (const void *)(v13 + 18), v15);
        v17 = (unsigned __int64)v15 >> 1;
LABEL_14:
        AtomName[v17] = 0;
        *AtomNameLength = v15;
LABEL_31:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
        return v10;
      }
    }
    v10 = -1073741789;
    goto LABEL_31;
  }
  return -1073741811;
}
