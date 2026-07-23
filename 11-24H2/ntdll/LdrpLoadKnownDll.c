/*
 * XREFs of LdrpLoadKnownDll @ 0x180091340
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800904F0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x180090C40 (LdrpHashUnicodeString.c)
 *     LdrpCheckKnownDllFullPath @ 0x180091480 (LdrpCheckKnownDllFullPath.c)
 *     LdrpFindKnownDll @ 0x180091630 (LdrpFindKnownDll.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D1F28 (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(UNICODE_STRING *p_Source)
{
  int v1; // eax
  wchar_t *Buffer; // rdi
  __int64 v3; // rbx
  char v4; // al
  unsigned __int16 *v5; // rsi
  __int64 result; // rax
  unsigned int LoadedDllByNameLockHeld; // edi
  UNICODE_STRING Source; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v10; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_DWORD *)&p_Source[2].Length;
  Buffer = p_Source[3].Buffer;
  Handle = 0LL;
  v3 = (__int64)p_Source;
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
    LdrpLogDllState(*((_QWORD *)Buffer + 6), Buffer + 36, 5285);
    v10 = 0LL;
    *((_DWORD *)Buffer + 66) = LdrpHashUnicodeString(Buffer + 44);
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                Buffer + 44,
                                Buffer + 36,
                                *(_DWORD *)(v3 + 32),
                                &v10,
                                *((_DWORD *)Buffer + 66));
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v10 )
    {
      LdrpLoadContextReplaceModule(v3, v10);
    }
    else
    {
      LdrpLogDllState(0LL, v5, 5290);
      LoadedDllByNameLockHeld = LdrpMapDllWithSectionHandle(v3, (__int64)Handle);
    }
    NtClose(Handle);
    return LoadedDllByNameLockHeld;
  }
  return result;
}
