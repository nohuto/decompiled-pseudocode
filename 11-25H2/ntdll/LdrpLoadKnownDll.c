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

__int64 __fastcall LdrpLoadKnownDll(_OWORD *a1)
{
  int v1; // eax
  __int64 v2; // rdi
  _OWORD *v3; // rbx
  char v4; // al
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int LoadedDllByNameLockHeld; // edi
  _OWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  v2 = *((_QWORD *)a1 + 7);
  v3 = a1;
  v8[0] = 0LL;
  if ( (v1 & 0x200) != 0 )
  {
    v4 = LdrpCheckKnownDllFullPath(a1, v8);
    a1 = v8;
  }
  else
  {
    v4 = (v1 & 0x28) == 32;
  }
  if ( !v4 )
    return 3221225781LL;
  v5 = v2 + 72;
  result = LdrpFindKnownDll((char)a1);
  if ( (int)result >= 0 )
  {
    LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5285LL);
    v9 = 0LL;
    *(_DWORD *)(v2 + 264) = LdrpHashUnicodeString(v2 + 88);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                (int)v2 + 88,
                                (int)v2 + 72,
                                *((_DWORD *)v3 + 8),
                                (unsigned int)&v9,
                                *(_DWORD *)(v2 + 264));
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v9 )
    {
      LdrpLoadContextReplaceModule(v3);
    }
    else
    {
      LdrpLogDllState(0LL, v5, 5290LL);
      LoadedDllByNameLockHeld = LdrpMapDllWithSectionHandle(v3, 0LL);
    }
    NtClose(0LL);
    return LoadedDllByNameLockHeld;
  }
  return result;
}
