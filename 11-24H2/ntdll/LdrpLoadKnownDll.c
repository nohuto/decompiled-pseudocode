/*
 * XREFs of LdrpLoadKnownDll @ 0x180074A60
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180073C10 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x180074360 (LdrpHashUnicodeString.c)
 *     LdrpCheckKnownDllFullPath @ 0x180074BA0 (LdrpCheckKnownDllFullPath.c)
 *     LdrpFindKnownDll @ 0x180074D50 (LdrpFindKnownDll.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D6BB8 (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(char *a1)
{
  int v1; // eax
  __int64 v2; // rdi
  __int64 v3; // rbx
  char v4; // al
  __int64 v5; // rsi
  __int64 result; // rax
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // r8
  unsigned int LoadedDllByNameLockHeld; // edi
  char v10[16]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  v2 = *((_QWORD *)a1 + 7);
  v3 = (__int64)a1;
  *(_OWORD *)v10 = 0LL;
  if ( (v1 & 0x200) != 0 )
  {
    v4 = LdrpCheckKnownDllFullPath(a1, v10);
    a1 = v10;
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
    LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 0x14A5u);
    v11 = 0LL;
    *(_DWORD *)(v2 + 264) = LdrpHashUnicodeString((unsigned __int16 *)(v2 + 88));
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock, v7, v8);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                (unsigned __int16 *)(v2 + 88),
                                (unsigned __int16 *)(v2 + 72),
                                *(_DWORD *)(v3 + 32),
                                &v11,
                                *(_DWORD *)(v2 + 264));
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v11 )
    {
      LdrpLoadContextReplaceModule(v3, v11);
    }
    else
    {
      LdrpLogDllState(0, v5, 0x14AAu);
      LoadedDllByNameLockHeld = LdrpMapDllWithSectionHandle(v3, 0LL);
    }
    NtClose(0LL);
    return LoadedDllByNameLockHeld;
  }
  return result;
}
