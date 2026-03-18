/*
 * XREFs of _SetWinEventHook @ 0x1C003F2F4
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C003F0B0 (NtUserSetWinEventHook.c)
 * Callees:
 *     AddHmodDependency @ 0x1C003D49C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C003D58C (GetHmodTableIndex.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C003F7A8 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     CategoryMaskFromEventRange @ 0x1C003F7FC (CategoryMaskFromEventRange.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        char a8)
{
  struct tagTHREADINFO *v12; // r15
  int HmodTableIndex; // esi
  __int64 v14; // r8
  int v15; // edi
  char *v16; // rbx
  tagDomLock *v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v25; // [rsp+28h] [rbp-70h]
  tagDomLock *v26; // [rsp+30h] [rbp-68h] BYREF
  char v27; // [rsp+38h] [rbp-60h] BYREF
  char v28; // [rsp+58h] [rbp-40h]

  v25 = a3;
  if ( !tagDomLock::IsLockedExclusive(gDomainWinEventLock) )
    __int2c();
  v12 = PtiCurrentShared();
  if ( (*((_DWORD *)v12 + 122) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v22 = 1427LL;
    goto LABEL_34;
  }
  if ( a1 > a2 )
  {
    v22 = 1426LL;
    goto LABEL_34;
  }
  if ( (a8 & 4) == 0 )
  {
    HmodTableIndex = -1;
    v25 = 0LL;
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v22 = 1428LL;
    goto LABEL_34;
  }
  if ( !a4 )
  {
    v22 = 1157LL;
    goto LABEL_34;
  }
  HmodTableIndex = GetHmodTableIndex(a4);
  if ( HmodTableIndex == -1 )
  {
    v22 = 126LL;
LABEL_34:
    UserSetLastError(v22);
    return 0LL;
  }
LABEL_8:
  if ( a7 )
  {
    v21 = PtiFromThreadId(a7);
    if ( !v21 || (*(_DWORD *)(v21 + 488) & 0x1000000) == 0 )
    {
      v22 = 1444LL;
      goto LABEL_34;
    }
  }
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(&v26);
  if ( !v28 )
  {
    v15 = 0;
    v16 = &v27;
    do
    {
      v17 = (tagDomLock *)*((_QWORD *)v16 - 1);
      if ( v17 )
      {
        if ( *v16 )
          tagDomLock::LockExclusive(v17);
        else
          tagDomLock::LockShared(v17);
      }
      ++v15;
      v16 += 16;
    }
    while ( !v15 );
    v28 = 1;
  }
  LOBYTE(v14) = 15;
  v18 = HMAllocObject(v12, 0LL, v14);
  if ( v28 )
  {
    if ( v26 )
    {
      if ( v27 )
        tagDomLock::UnLockExclusive(v26);
      else
        tagDomLock::UnLockShared(v26);
    }
    v28 = 0;
  }
  if ( !v18 )
    return 0LL;
  *(_DWORD *)(v18 + 32) = a1;
  v19 = *(_DWORD *)(v18 + 40) & 0xFFFFFFF0;
  *(_DWORD *)(v18 + 36) = a2;
  *(_DWORD *)(v18 + 56) = a7;
  *(_QWORD *)(v18 + 48) = a6;
  *(_DWORD *)(v18 + 72) = HmodTableIndex;
  *(_DWORD *)(v18 + 40) = (2 * (a8 & 0xB)) | v19 & 0xFFFFFFEF | ((a8 & 4) != 0 ? 8 : 0);
  if ( HmodTableIndex >= 0 )
    AddHmodDependency(HmodTableIndex);
  *(_QWORD *)(v18 + 64) = a5 - v25;
  *(_QWORD *)(v18 + 24) = gpWinEventHooks;
  gpWinEventHooks = v18;
  *(_DWORD *)(gpsi + 1892LL) |= CategoryMaskFromEventRange(a1, a2);
  *(_DWORD *)(v18 + 76) = W32GetCurrentThreadDpiAwarenessContext();
  return v18;
}
