/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x18007AA70
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x18007B1E0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18007B20C (RtlpAtomMapAtomToHandleEntry.c)
 *     _snwprintf_s @ 0x18012B090 (_snwprintf_s.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  int v8; // esi
  ULONG v9; // ebx
  NTSTATUS v10; // edi
  __int64 v11; // rax
  _RTL_SRWLOCK *v12; // rcx
  unsigned __int32 v13; // r9d
  __int64 v14; // rdx
  unsigned __int16 *v15; // rax
  ULONG v16; // esi
  unsigned __int64 v17; // rbx
  wchar_t Buffer[16]; // [rsp+48h] [rbp-60h] BYREF

  v8 = Atom;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    v9 = *AtomNameLength & 0xFFFFFFFE;
    if ( (unsigned __int16)v8 < 0xC000u )
    {
      if ( !(_WORD)v8 )
      {
        v10 = -1073741811;
        goto LABEL_15;
      }
      v10 = 0;
      if ( AtomUsage )
        *AtomUsage = 1;
      if ( AtomFlags )
        *AtomFlags = 1;
      if ( !AtomName )
        goto LABEL_15;
      v16 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
      if ( v16 >= v9 )
      {
        v16 = v9 - 2;
        if ( v9 < 2 )
          v16 = 0;
      }
      if ( !v16 )
      {
        v10 = -1073741789;
        goto LABEL_15;
      }
      memmove(AtomName, Buffer, v16);
      v17 = (unsigned __int64)v16 >> 1;
    }
    else
    {
      v10 = -1073741816;
      v11 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, v8 & 0x3FFF);
      v14 = v11;
      if ( !v11 )
        goto LABEL_33;
      if ( *(_WORD *)(v11 + 10) != (_WORD)v8 )
        goto LABEL_33;
      v15 = (unsigned __int16 *)(v11 + 12);
      if ( !v15 )
        goto LABEL_33;
      v10 = v13;
      if ( AtomUsage )
        *AtomUsage = *v15;
      if ( AtomFlags )
        *AtomFlags = *(unsigned __int16 *)(v14 + 14);
      if ( !AtomName )
        goto LABEL_33;
      v16 = 2 * *(unsigned __int8 *)(v14 + 16);
      if ( v16 >= v9 )
      {
        if ( v9 < 2 )
        {
          *AtomNameLength = v16;
          v16 = v13;
        }
        else
        {
          v16 = v9 - 2;
        }
      }
      if ( !v16 )
      {
        v10 = -1073741789;
        goto LABEL_33;
      }
      memmove(AtomName, (const void *)(v14 + 18), v16);
      v17 = (unsigned __int64)v16 >> 1;
    }
    AtomName[v17] = 0;
    *AtomNameLength = v16;
LABEL_15:
    v12 = (_RTL_SRWLOCK *)AtomTableHandle;
LABEL_33:
    RtlReleaseSRWLockExclusive(v12 + 1);
    return v10;
  }
  return -1073741811;
}
