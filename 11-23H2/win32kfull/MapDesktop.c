/*
 * XREFs of MapDesktop @ 0x1C00448C0
 * Callers:
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 *     xxxResolveDesktop @ 0x1C0028660 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00293D4 (xxxCreateDesktopEx.c)
 *     xxxSetThreadDesktop @ 0x1C002B6D4 (xxxSetThreadDesktop.c)
 *     UserCommitDesktopMemory @ 0x1C0084640 (UserCommitDesktopMemory.c)
 *     NtUserBuildHwndList @ 0x1C00B1800 (NtUserBuildHwndList.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v1; // r13
  int v2; // r12d
  NTSTATUS v3; // esi
  PERESOURCE *v5; // rax
  __int64 v6; // rdx
  tagDomLock *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bl
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int DLT; // eax
  PERESOURCE *v16; // rax
  char *v17; // r14
  PERESOURCE *v18; // rax
  _QWORD *i; // rax
  _QWORD *v20; // r14
  __int64 v21; // rdx
  ULONG v22; // eax
  __int64 v24; // [rsp+60h] [rbp-31h] BYREF
  __int64 v25; // [rsp+68h] [rbp-29h] BYREF
  __int64 v26; // [rsp+70h] [rbp-21h] BYREF
  __int64 v27; // [rsp+78h] [rbp-19h] BYREF
  __int64 v28; // [rsp+80h] [rbp-11h]
  tagDomLock *DomainLockRef; // [rsp+88h] [rbp-9h]
  char v30; // [rsp+90h] [rbp-1h] BYREF
  __int64 v31; // [rsp+98h] [rbp+7h]
  char v32; // [rsp+A0h] [rbp+Fh]
  __int64 v33; // [rsp+A8h] [rbp+17h]
  char v34; // [rsp+B0h] [rbp+1Fh]
  char v35; // [rsp+B8h] [rbp+27h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v25 = 0LL;
  v3 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
  if ( ExIsResourceAcquiredSharedLite(*v5) )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    EnterCrit(1LL, 0LL);
  }
  if ( *(_DWORD *)a1 == 3 )
    goto LABEL_50;
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
  v12 = ProcessWin32Process;
  if ( !ProcessWin32Process || !*ProcessWin32Process )
  {
    v3 = -1073741811;
    goto LABEL_49;
  }
  v13 = *(_QWORD *)(a1 + 8);
  if ( v13 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(v13)
    && !(unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v1, ExDesktopObjectType, 0LL, &v27)
    || (v14 = *(_QWORD *)(a1 + 8), v28 = *(_QWORD *)(v1 + 128),
                                   (unsigned int)PsGetProcessSessionId(v14) != *(_DWORD *)v1) )
  {
    v3 = -1073741790;
LABEL_49:
    v22 = RtlNtStatusToDosError(v3);
    UserSetLastError(v22);
    goto LABEL_50;
  }
  DLT = DLT_DESKTOP::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v31 = gDomainDummyLock;
  v33 = 0LL;
  v30 = 1;
  v32 = 0;
  v34 = 0;
  v35 = 0;
  v16 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
  if ( ExIsResourceAcquiredExclusiveLite(*v16) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v35 = 1;
    if ( !v34 )
    {
      v17 = &v30;
      do
      {
        v7 = (tagDomLock *)*((_QWORD *)v17 - 1);
        if ( v7 )
        {
          if ( *v17 )
            tagDomLock::LockExclusive(v7);
          else
            tagDomLock::LockShared(v7);
        }
        ++v2;
        v17 += 16;
      }
      while ( !v2 );
      v34 = 1;
    }
  }
  if ( !gbInDestroyHandleTableObjects )
  {
    v18 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &();
    if ( ExIsResourceAcquiredExclusiveLite(*v18) != 1
      && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainDesktopLock)) )
    {
      __int2c();
    }
  }
  for ( i = (_QWORD *)v12[88]; i; i = (_QWORD *)*i )
  {
    if ( i[1] == v1 )
      goto LABEL_38;
  }
  v20 = (_QWORD *)Win32AllocPoolWithQuotaZInit(24LL, 1768977237LL);
  if ( !v20 )
  {
    v3 = -1073741801;
LABEL_33:
    if ( v35 && v34 && DomainLockRef )
    {
      if ( v30 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    goto LABEL_49;
  }
  v21 = *(_QWORD *)(a1 + 8);
  v25 = 0LL;
  v26 = 4096LL;
  v24 = 0LL;
  v3 = MmMapViewOfSection(v28, v21, &v24, 0LL, 0LL, &v26, &v25, 2, 0x400000, 2);
  if ( v3 < 0 )
  {
    Win32FreePool(v20);
    goto LABEL_33;
  }
  v20[1] = v1;
  v20[2] = v24;
  *v20 = v12[88];
  v12[88] = v20;
LABEL_38:
  if ( v35 )
  {
    if ( v34 )
    {
      v7 = DomainLockRef;
      if ( DomainLockRef )
      {
        if ( v30 )
          tagDomLock::UnLockExclusive(DomainLockRef);
        else
          tagDomLock::UnLockShared(DomainLockRef);
      }
    }
  }
LABEL_50:
  if ( v10 )
    UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return (unsigned int)v3;
}
