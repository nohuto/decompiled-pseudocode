/*
 * XREFs of MapDesktop @ 0x14016A320
 * Callers:
 *     xxxSetThreadDesktop @ 0x1401071FC (xxxSetThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     UserCommitDesktopMemory @ 0x1401D0160 (UserCommitDesktopMemory.c)
 *     xxxResolveDesktop @ 0x14023C550 (xxxResolveDesktop.c)
 *     NtUserBuildHwndList @ 0x140240A10 (NtUserBuildHwndList.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140082A28 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x140084538 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14008490C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     GetDesktopView @ 0x140194220 (GetDesktopView.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall MapDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  NTSTATUS v4; // edi
  __int64 v6; // rcx
  char v7; // bl
  _QWORD *ProcessWin32Process; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r15
  __int64 UserGdiSessionState; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  unsigned int DLT; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rsi
  __int64 v25; // rdx
  __int64 v27; // [rsp+58h] [rbp-39h] BYREF
  __int64 v28; // [rsp+60h] [rbp-31h] BYREF
  __int64 v29; // [rsp+68h] [rbp-29h] BYREF
  PERESOURCE v30; // [rsp+70h] [rbp-21h] BYREF
  __int64 v31; // [rsp+78h] [rbp-19h] BYREF
  __int64 DomainLockRef; // [rsp+80h] [rbp-11h] BYREF
  char v33; // [rsp+88h] [rbp-9h]
  __int64 v34; // [rsp+90h] [rbp-1h]
  char v35; // [rsp+98h] [rbp+7h]
  __int64 v36; // [rsp+A0h] [rbp+Fh]
  char v37; // [rsp+A8h] [rbp+17h]
  char v38; // [rsp+B0h] [rbp+1Fh]

  v3 = *(_QWORD *)(a1 + 32);
  v31 = 0LL;
  v4 = 0;
  v27 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( (*(_DWORD *)(PsGetCurrentThreadWin32Thread(a1, a2, a3) + 24) & 0xC) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    EnterCrit(1LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 16) != 3 )
  {
    ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 24));
    v10 = ProcessWin32Process;
    if ( ProcessWin32Process && *ProcessWin32Process )
    {
      UserGdiSessionState = W32GetUserGdiSessionState(v9);
      v12 = *(_QWORD *)(a1 + 24);
      if ( (v12 == *(_QWORD *)(UserGdiSessionState + 40)
         || (unsigned int)IsProcessDwm(v12)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 24), v3, ExDesktopObjectType, 0LL, &v29))
        && (v13 = *(_QWORD *)(v3 + 128), (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 24)) == *(_DWORD *)v3) )
      {
        DLT = DLT_DESKTOP::getDLT();
        DomainLockRef = GetDomainLockRef(DLT);
        v33 = 1;
        UserSessionState = W32GetUserSessionState(v16, v15);
        v35 = 0;
        v34 = UserSessionState + 42424;
        v36 = 0LL;
        v37 = 0;
        v38 = 0;
        if ( IS_USERCRIT_OWNED_SHAREDONLY(v19, v18, v20) )
        {
          v38 = 1;
          DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)&DomainLockRef);
        }
        v30 = *(PERESOURCE *)(W32GetUserSessionState(v22, v21) + 42464);
        LockRefactorStagingAssertOwned(&v30, v23);
        if ( GetDesktopView(v10, v3) )
        {
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
          goto LABEL_25;
        }
        v24 = (_QWORD *)Win32AllocPoolWithQuotaZInit(24LL, 1768977237LL);
        if ( v24 )
        {
          v25 = *(_QWORD *)(a1 + 24);
          v27 = 4096LL;
          v4 = MmMapViewOfSection(v13, v25, &v28, 0LL, 0LL, &v27, &v31, 2, 0x400000, 2);
          if ( v4 >= 0 )
          {
            v24[1] = v3;
            v24[2] = v28;
            *v24 = v10[87];
            v10[87] = v24;
          }
          else
          {
            Win32FreePool(v24);
          }
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
          if ( v4 >= 0 )
            goto LABEL_25;
        }
        else
        {
          v4 = -1073741801;
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
        }
      }
      else
      {
        v4 = -1073741790;
      }
    }
    else
    {
      v4 = -1073741811;
    }
    SetLastNtError(v4);
  }
LABEL_25:
  if ( v7 )
    UserSessionSwitchLeaveCrit(v6);
  return (unsigned int)v4;
}
