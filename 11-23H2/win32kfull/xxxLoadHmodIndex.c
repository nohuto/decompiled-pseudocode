/*
 * XREFs of xxxLoadHmodIndex @ 0x1C0122AD0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxLoadUserApiHook @ 0x1C00DF860 (xxxLoadUserApiHook.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00E8A54 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011FE30 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     UserGetLastStatus @ 0x1C001649C (UserGetLastStatus.c)
 *     UserGetLastError @ 0x1C00164E8 (UserGetLastError.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_CLIENTLIB@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C003C6A0 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_CLIENTLIB@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ClientFreeLibrary @ 0x1C003CAEC (ClientFreeLibrary.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C003D958 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ClientLoadLibrary @ 0x1C00E6D58 (ClientLoadLibrary.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C0117EDC (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxLoadHmodIndex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  PERESOURCE *v5; // rax
  int v6; // edi
  __int64 v7; // r15
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  tagDomLock *v15; // rcx
  PERESOURCE *v16; // rax
  __int64 v17; // rcx
  PERESOURCE *v18; // rax
  __int64 v19; // rbx
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v23; // r13
  __int64 Library; // r14
  unsigned int v25; // eax
  char *v26; // rbx
  int v27; // esi
  tagDomLock *v28; // rcx
  int AtomNameFromAtomTable; // ebx
  unsigned int v30; // eax
  tagDomLock *v31; // rax
  char *v32; // rbx
  tagDomLock *v33; // rcx
  unsigned int v34; // eax
  tagDomLock *v35; // rax
  __int64 v36; // rcx
  char *v37; // rbx
  tagDomLock *v38; // rcx
  unsigned int v39; // eax
  tagDomLock *v40; // rax
  char *v41; // rbx
  tagDomLock *v42; // rcx
  int v43; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING v44; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-B8h] BYREF
  tagDomLock *v47; // [rsp+58h] [rbp-A8h]
  char v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h]
  char v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  char v52; // [rsp+80h] [rbp-80h]
  tagDomLock *DomainLockRef; // [rsp+88h] [rbp-78h] BYREF
  char v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+98h] [rbp-68h]
  char v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  char v58; // [rsp+B0h] [rbp-50h]
  tagDomLock *v59; // [rsp+B8h] [rbp-48h]
  char v60; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-38h]
  char v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  char v64; // [rsp+E0h] [rbp-20h]
  WCHAR SourceString[264]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR v66[264]; // [rsp+300h] [rbp+200h] BYREF

  v4 = (int)a1;
  DestinationString = 0LL;
  v44 = 0LL;
  v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  v6 = 0;
  if ( !ExIsResourceAcquiredSharedLite(*v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  v43 = 1;
  DLT = DLT_CLIENTLIB::getDLT();
  v54 = 1;
  v10 = &v54;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v14 = 0;
  v55 = gDomainDummyLock;
  v57 = 0LL;
  v58 = 0;
  v56 = 0;
  do
  {
    v15 = (tagDomLock *)*((_QWORD *)v10 - 1);
    if ( v15 )
    {
      if ( *v10 )
        tagDomLock::LockExclusive(v15);
      else
        tagDomLock::LockShared(v15);
    }
    ++v14;
    v10 += 16;
  }
  while ( !v14 );
  v58 = 1;
  if ( !gbInDestroyHandleTableObjects )
  {
    v16 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v15, v11, v12, v13);
    if ( ExIsResourceAcquiredExclusiveLite(*v16) != 1 )
    {
      v18 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v17, v11, v12, v13);
      if ( !ExIsResourceAcquiredSharedLite(*v18)
        || ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainClientLibLock) != 1 )
      {
        __int2c();
      }
    }
  }
  v19 = *(_QWORD *)(v7 + 424);
  v20 = 1 << v4;
  if ( ((1 << v4) & *(_DWORD *)(v19 + 404)) != 0 )
  {
    v21 = *(_QWORD *)(v19 + 8 * v4 + 408);
    DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
    return v21;
  }
  if ( (int)v4 < 0 || (int)v4 >= catomSysTableEntries )
  {
    UserSetLastError(87);
    DomainShared<>::DomainExclusive<DLT_CLIENTLIB>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
    return 0LL;
  }
  LockRefactorStagingAssertAny((PERESOURCE *)gDomainClientLibLock, v11, v12, v13);
  v23 = v4;
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 424) + 8 * v4 + 408) != -1LL )
  {
    UserGetAtomNameFromAtomTable(
      UserLibmgmtAtomTableHandle,
      *((unsigned __int16 *)&aatomSysLoaded + v4),
      SourceString,
      260LL);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (_DWORD)v4 == gihmodUserApiHook )
    {
      RtlInitUnicodeString(&v44, gszFunctionUserApiHook);
    }
    else if ( (_DWORD)v4 == gihmodUserApiHookWOW )
    {
      RtlInitUnicodeString(&v44, gszFunctionUserApiHookWOW);
    }
    else
    {
      RtlInitUnicodeString(&v44, 0LL);
      v43 = 0;
    }
    if ( v58 && DomainLockRef )
    {
      if ( v54 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    Library = ClientLoadLibrary((void **)&DestinationString, (void **)&v44);
    if ( Library )
    {
      v25 = DLT_CLIENTLIB::getDLT();
      v26 = &v48;
      v47 = (tagDomLock *)GetDomainLockRef(v25);
      v27 = 0;
      v48 = 1;
      v51 = 0LL;
      v52 = 0;
      v49 = gDomainDummyLock;
      v50 = 0;
      do
      {
        v28 = (tagDomLock *)*((_QWORD *)v26 - 1);
        if ( v28 )
        {
          if ( *v26 )
            tagDomLock::LockExclusive(v28);
          else
            tagDomLock::LockShared(v28);
        }
        ++v27;
        v26 += 16;
      }
      while ( !v27 );
      String1 = 0LL;
      v52 = 1;
      if ( v43
        && ((AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                       UserLibmgmtAtomTableHandle,
                                       *((unsigned __int16 *)&aatomSysLoaded + v23),
                                       v66,
                                       260LL),
             RtlInitUnicodeString(&String1, v66),
             !AtomNameFromAtomTable)
         || RtlCompareUnicodeString(&String1, &DestinationString, 0)) )
      {
        v30 = DLT_CLIENTLIB::getDLT();
        v31 = (tagDomLock *)GetDomainLockRef(v30);
        v61 = gDomainDummyLock;
        v59 = v31;
        v60 = 1;
        v62 = 0;
        v63 = 0LL;
        if ( v31 )
          tagDomLock::UnLockExclusive(v31);
        v64 = 1;
        ClientFreeLibrary(Library);
        Library = 0LL;
        if ( v64 )
        {
          v32 = &v60;
          do
          {
            v33 = (tagDomLock *)*((_QWORD *)v32 - 1);
            if ( v33 )
            {
              if ( *v32 )
                tagDomLock::LockExclusive(v33);
              else
                tagDomLock::LockShared(v33);
            }
            ++v6;
            v32 += 16;
          }
          while ( !v6 );
        }
      }
      else
      {
        LockRefactorStagingAssertOwned(gDomainClientLibLock);
        if ( (v20 & *(_DWORD *)(*(_QWORD *)(v7 + 424) + 404LL)) != 0 )
        {
          v34 = DLT_CLIENTLIB::getDLT();
          v35 = (tagDomLock *)GetDomainLockRef(v34);
          v61 = gDomainDummyLock;
          v59 = v35;
          v60 = 1;
          v62 = 0;
          v63 = 0LL;
          if ( v35 )
            tagDomLock::UnLockExclusive(v35);
          v36 = *(_QWORD *)(v7 + 424);
          v64 = 1;
          ClientFreeLibrary(*(_QWORD *)(v36 + 8 * v23 + 408));
          if ( v64 )
          {
            v37 = &v60;
            do
            {
              v38 = (tagDomLock *)*((_QWORD *)v37 - 1);
              if ( v38 )
              {
                if ( *v37 )
                  tagDomLock::LockExclusive(v38);
                else
                  tagDomLock::LockShared(v38);
              }
              ++v6;
              v37 += 16;
            }
            while ( !v6 );
          }
        }
        else
        {
          ++*((_DWORD *)&acatomSysUse + v23);
          LockRefactorStagingAssertOwned(gDomainClientLibLock);
          *(_QWORD *)(*(_QWORD *)(v7 + 424) + 8 * v23 + 408) = Library;
          *(_DWORD *)(*(_QWORD *)(v7 + 424) + 404LL) |= v20;
        }
      }
    }
    else
    {
      if ( (unsigned int)UserGetLastStatus() != -1073740284
        && (unsigned int)UserGetLastStatus() != -1073740760
        && (unsigned int)UserGetLastError() != 1655
        && (unsigned int)UserGetLastError() != 577 )
      {
        return Library;
      }
      v39 = DLT_CLIENTLIB::getDLT();
      v40 = (tagDomLock *)GetDomainLockRef(v39);
      v48 = 1;
      v41 = &v48;
      v47 = v40;
      v49 = gDomainDummyLock;
      v51 = 0LL;
      v52 = 0;
      v50 = 0;
      do
      {
        v42 = (tagDomLock *)*((_QWORD *)v41 - 1);
        if ( v42 )
        {
          if ( *v41 )
            tagDomLock::LockExclusive(v42);
          else
            tagDomLock::LockShared(v42);
        }
        ++v6;
        v41 += 16;
      }
      while ( !v6 );
      v52 = 1;
      LockRefactorStagingAssertOwned(gDomainClientLibLock);
      *(_QWORD *)(*(_QWORD *)(v7 + 424) + 8 * v23 + 408) = -1LL;
    }
    if ( v52 && v47 )
    {
      if ( v48 )
      {
        tagDomLock::UnLockExclusive(v47);
        return Library;
      }
      tagDomLock::UnLockShared(v47);
    }
    return Library;
  }
  if ( v58 && DomainLockRef )
  {
    if ( v54 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
  return 0LL;
}
