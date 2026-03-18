/*
 * XREFs of xxxLoadHmodIndex @ 0x140082390
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x140082B90 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxLoadUserApiHook @ 0x1401D111C (xxxLoadUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x140082960 (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140082A00 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140082A28 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ClientLoadLibrary @ 0x1400833CC (ClientLoadLibrary.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140084000 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     UserGetLastStatus @ 0x140084134 (UserGetLastStatus.c)
 *     UserGetLastError @ 0x1400841A4 (UserGetLastError.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x140178818 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x140178874 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     ClientFreeLibrary @ 0x140178920 (ClientFreeLibrary.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxLoadHmodIndex(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // r14
  int v5; // r15d
  unsigned int DLT; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rbx
  __int64 v10; // rdx
  int v11; // edi
  tagDomLock *v12; // rcx
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r13
  __int64 v27; // r12
  unsigned __int16 v28; // bx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 UserSessionState; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int16 v44; // bx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int AtomNameFromAtomTable; // ebx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v56; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-B8h] BYREF
  tagDomLock *DomainLockRef; // [rsp+58h] [rbp-A8h] BYREF
  char v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h]
  char v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  char v64; // [rsp+80h] [rbp-80h]
  _BYTE v65[56]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v67[264]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v2 = (int)a1;
  DestinationString = 0LL;
  v56 = 0LL;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  v5 = 1;
  DLT = DLT_CLIENTLIB::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v60 = 1;
  v62 = 0;
  v9 = &v60;
  v61 = W32GetUserSessionState(v8, v7) + 42424;
  v63 = 0LL;
  v11 = 0;
  v64 = 0;
  do
  {
    v12 = (tagDomLock *)*((_QWORD *)v9 - 1);
    if ( v12 )
    {
      if ( *v9 )
        tagDomLock::LockExclusive(v12);
      else
        tagDomLock::LockShared(v12);
    }
    ++v11;
    v9 += 16;
  }
  while ( !v11 );
  v64 = 1;
  v13 = *(struct _ERESOURCE **)(W32GetUserSessionState(v12, v10) + 42408);
  if ( !*(_DWORD *)(W32GetUserSessionState(v15, v14) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v13) != 1) )
  {
    __int2c();
  }
  v17 = 1 << v2;
  v18 = *(_QWORD *)(v4 + 464);
  if ( ((1 << v2) & *(_DWORD *)(v18 + 396)) == 0 )
  {
    if ( (int)v2 < 0 || (int)v2 >= *(_DWORD *)(W32GetUserSessionState(v18, v16) + 41456) )
    {
      UserSetLastError(87);
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(&DomainLockRef, v49, v50);
      return 0LL;
    }
    v55 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 42408);
    LockRefactorStagingAssertAny((const struct tagDomLock *)&v55);
    v26 = 8 * v2 + 400;
    v27 = v2;
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 464) + v26) == -1LL )
    {
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(&DomainLockRef, v23, v25);
      return 0LL;
    }
    v28 = *(_WORD *)(W32GetUserSessionState(v24, v23) + 2 * v2 + 41460);
    UserSessionState = W32GetUserSessionState(v30, v29);
    UserGetAtomNameFromAtomTable(*(_QWORD *)(UserSessionState + 41448), v28, SourceString, 260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v34 = W32GetUserSessionState(v33, v32);
    if ( (_DWORD)v2 == *(_DWORD *)(v34 + 64256) )
    {
      RtlInitUnicodeString(&v56, (PCWSTR)(v34 + 64260));
    }
    else if ( (_DWORD)v2 == *(_DWORD *)(v34 + 64780) )
    {
      RtlInitUnicodeString(&v56, (PCWSTR)(v34 + 64784));
    }
    else
    {
      RtlInitUnicodeString(&v56, 0LL);
      v5 = 0;
    }
    if ( v64 && DomainLockRef )
    {
      if ( v60 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    v35 = ClientLoadLibrary(&DestinationString, &v56);
    if ( !v35 )
    {
      if ( (unsigned int)UserGetLastStatus() == -1073740284
        || (unsigned int)UserGetLastStatus() == -1073740760
        || (unsigned int)UserGetLastError() == 1655
        || (unsigned int)UserGetLastError() == 577 )
      {
        DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>(v65);
        v55 = *(_QWORD *)(W32GetUserSessionState(v52, v51) + 42408);
        LockRefactorStagingAssertOwned((const struct tagDomLock *)&v55);
        *(_QWORD *)(*(_QWORD *)(v4 + 464) + v26) = -1LL;
        DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v65, v53, v54);
      }
      return v35;
    }
    DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::ObjectLock<>(&DomainLockRef);
    String1 = 0LL;
    if ( v5
      && ((v44 = *(_WORD *)(W32GetUserSessionState(v38, v37) + 2 * v27 + 41460),
           v47 = W32GetUserSessionState(v46, v45),
           AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(*(_QWORD *)(v47 + 41448), v44, v67, 260LL),
           RtlInitUnicodeString(&String1, v67),
           !AtomNameFromAtomTable)
       || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
    {
      UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::UnlockObjectLock<>(v65);
      ClientFreeLibrary(v35);
      v35 = 0LL;
    }
    else
    {
      v55 = *(_QWORD *)(W32GetUserSessionState(v38, v37) + 42408);
      LockRefactorStagingAssertOwned((const struct tagDomLock *)&v55);
      if ( (v17 & *(_DWORD *)(*(_QWORD *)(v4 + 464) + 396LL)) == 0 )
      {
        v41 = W32GetUserSessionState(v40, v39);
        ++*(_DWORD *)(v41 + 4 * v27 + 41524);
        v55 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 42408);
        LockRefactorStagingAssertOwned((const struct tagDomLock *)&v55);
        *(_QWORD *)(*(_QWORD *)(v4 + 464) + v26) = v35;
        *(_DWORD *)(*(_QWORD *)(v4 + 464) + 396LL) |= v17;
LABEL_43:
        if ( v64 && DomainLockRef )
        {
          if ( v60 )
            tagDomLock::UnLockExclusive(DomainLockRef);
          else
            tagDomLock::UnLockShared(DomainLockRef);
        }
        return v35;
      }
      UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::UnlockObjectLock<>(v65);
      ClientFreeLibrary(*(_QWORD *)(*(_QWORD *)(v4 + 464) + v26));
    }
    UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>(v65);
    goto LABEL_43;
  }
  v19 = *(_QWORD *)(v18 + 8 * v2 + 400);
  if ( v64 && DomainLockRef )
  {
    if ( v60 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
  return v19;
}
