/*
 * XREFs of LdrpLoadKnownDll @ 0x18006CF10
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpCheckKnownDllFullPath @ 0x18006D050 (LdrpCheckKnownDllFullPath.c)
 *     LdrpFindKnownDll @ 0x18006D200 (LdrpFindKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18006E490 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x18006EBE0 (LdrpHashUnicodeString.c)
 *     LdrpLoadContextReplaceModule @ 0x18006F2DC (LdrpLoadContextReplaceModule.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(UNICODE_STRING *p_Source)
{
  int v1; // eax
  wchar_t *Buffer; // rdi
  UNICODE_STRING *v3; // rbx
  char v4; // al
  wchar_t *v5; // rsi
  __int64 result; // rax
  unsigned int LoadedDllByNameLockHeld; // edi
  UNICODE_STRING Source; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_DWORD *)&p_Source[2].Length;
  Buffer = p_Source[3].Buffer;
  Handle = 0LL;
  v3 = p_Source;
  Source = 0LL;
  if ( (v1 & 0x200) != 0 )
  {
    v4 = LdrpCheckKnownDllFullPath(p_Source, &Source);
    p_Source = &Source;
  }
  else
  {
    v4 = (v1 & 0x28) == 32;
  }
  if ( !v4 )
    return 3221225781LL;
  v5 = Buffer + 36;
  result = LdrpFindKnownDll(p_Source, (PUNICODE_STRING)(Buffer + 44), (PUNICODE_STRING)(Buffer + 36), &Handle);
  if ( (int)result >= 0 )
  {
    LdrpLogDllState(*((_QWORD *)Buffer + 6), Buffer + 36, 5285LL);
    v10 = 0LL;
    *((_DWORD *)Buffer + 66) = LdrpHashUnicodeString(Buffer + 44);
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                (int)Buffer + 88,
                                (int)Buffer + 72,
                                *(_DWORD *)&v3[2].Length,
                                (unsigned int)&v10,
                                *((_DWORD *)Buffer + 66));
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v10 )
    {
      LdrpLoadContextReplaceModule(v3);
    }
    else
    {
      LdrpLogDllState(0LL, v5, 5290LL);
      LoadedDllByNameLockHeld = LdrpMapDllWithSectionHandle(v3, Handle);
    }
    NtClose(Handle);
    return LoadedDllByNameLockHeld;
  }
  return result;
}
