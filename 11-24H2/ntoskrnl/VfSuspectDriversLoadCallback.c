/*
 * XREFs of VfSuspectDriversLoadCallback @ 0x140B9CB3C
 * Callers:
 *     VfDriverLoadImage @ 0x140BA9DF4 (VfDriverLoadImage.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     VfTargetDriversAdd @ 0x1403E3ED4 (VfTargetDriversAdd.c)
 *     CarLoadImageHandler @ 0x1406146D8 (CarLoadImageHandler.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     VfUtilPrintCheckinString @ 0x140B854E4 (VfUtilPrintCheckinString.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfTargetDriversAllocateFullName @ 0x140B8D234 (VfTargetDriversAllocateFullName.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140B991AC (VfThunkApplyThunksCurrentSession.c)
 *     VfSuspectDriversAllocateEntry @ 0x140B9C6A0 (VfSuspectDriversAllocateEntry.c)
 */

LONG __fastcall VfSuspectDriversLoadCallback(__int64 a1, char a2, int a3)
{
  int v6; // r15d
  const UNICODE_STRING *v7; // rbp
  __int64 i; // rbx
  __int64 j; // rsi
  __int64 Entry; // rbx
  int v11; // esi
  BOOLEAN v12; // al
  unsigned __int64 v13; // rdx
  __int64 *v14; // rax
  LONG result; // eax

  v6 = 0;
  VfDriverLock();
  v7 = (const UNICODE_STRING *)(a1 + 88);
  if ( (VfOptionFlags & 1) != 0 )
  {
    for ( i = VfExcludedDriversList; (__int64 *)i != &VfExcludedDriversList; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_48;
    }
  }
  if ( (MmVerifyDriverLevel & 0xEF8000) != 0 )
  {
    for ( j = VfXdvExcludedDriversList; (__int64 *)j != &VfXdvExcludedDriversList; j = *(_QWORD *)j )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_48;
    }
  }
  if ( RtlEqualUnicodeString(&VfTcpIpName, v7, 1u) == 1 )
  {
    VfTcpIpDllBase = *(_QWORD *)(a1 + 48);
    VfTcpIpSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, v7, 1u) == 1 )
  {
    VfTdxDllBase = *(_QWORD *)(a1 + 48);
    VfTdxSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, v7, 1u) == 1 )
  {
    VfMrxsmbDllBase = *(_QWORD *)(a1 + 48);
    VfMrxsmbSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTmName, v7, 1u) == 1 )
  {
    VfTmDllBase = *(_QWORD *)(a1 + 48);
    VfTmSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, v7, 1u) == 1 )
  {
    VfWin32kDllBase = *(_QWORD *)(a1 + 48);
    VfWin32kSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfKsName, v7, 1u) == 1 )
  {
    VfKsDllBase = *(_QWORD *)(a1 + 48);
    VfKsSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  Entry = VfSuspectDriversList;
  v11 = 0;
  while ( (__int64 *)Entry != &VfSuspectDriversList )
  {
    v12 = RtlEqualUnicodeString((PCUNICODE_STRING)(Entry + 40), (PCUNICODE_STRING)(a1 + 88), 1u);
    v11 = v12;
    if ( v12 )
    {
      if ( Entry )
        goto LABEL_43;
      goto LABEL_44;
    }
    Entry = *(_QWORD *)Entry;
  }
  if ( KernelVerifier )
  {
    if ( !a3 && ((VfOptionFlags & 0x2000) == 0 || ViVerifyAllDrivers != 1) && !ViForceAllDriversSuspect )
      goto LABEL_32;
  }
  else if ( ViVerifyAllDrivers != 1 )
  {
    if ( !VfRandomVerifiedDrivers
      || (v13 = (unsigned __int64)(unsigned int)(ViLoadedDriversCount + 1) >> 3,
          ++ViLoadedDriversCount,
          ((*(char *)(v13 + qword_140FFDBE8) >> (ViLoadedDriversCount & 7)) & 1) == 0) )
    {
LABEL_32:
      Entry = 0LL;
      goto LABEL_44;
    }
    --VfRandomVerifiedDrivers;
  }
  Entry = VfSuspectDriversAllocateEntry((const void **)(a1 + 88));
  if ( Entry )
  {
    v14 = (__int64 *)qword_140F04728;
    if ( *(__int64 **)qword_140F04728 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)Entry = &VfSuspectDriversList;
    v11 = 1;
    *(_QWORD *)(Entry + 8) = v14;
    *v14 = Entry;
    qword_140F04728 = Entry;
LABEL_43:
    VfTargetDriversAllocateFullName(Entry, a1);
  }
LABEL_44:
  VfTargetDriversAdd(a1, a2, Entry);
  if ( Entry && (v11 || KernelVerifier) )
  {
    v6 = VfThunkApplyThunksCurrentSession(a1);
    VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88), 0);
    ++dword_140F04814;
    ++*(_DWORD *)(Entry + 16);
    CarLoadImageHandler(a1);
  }
LABEL_48:
  ViDriversLoadLockOwner = 0LL;
  result = KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v6 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return result;
}
