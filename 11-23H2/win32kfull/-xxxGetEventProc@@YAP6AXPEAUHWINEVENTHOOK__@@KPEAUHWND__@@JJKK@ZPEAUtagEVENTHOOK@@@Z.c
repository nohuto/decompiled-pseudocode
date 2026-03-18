/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00E8A54
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C00F16EC (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     MakeExportSuppressedPfnValid @ 0x1C0085020 (MakeExportSuppressedPfnValid.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@XZ @ 0x1C0120F08 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@.c)
 *     xxxLoadHmodIndex @ 0x1C0122AD0 (xxxLoadHmodIndex.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  int v2; // esi
  char *v3; // rbx
  tagDomLock *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcess; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v11; // rcx
  int v12; // esi
  char *v13; // rbx
  tagDomLock *v14; // rcx
  int v15; // esi
  char *v16; // rbx
  tagDomLock *v17; // rcx
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v23; // edi
  char *v24; // rbx
  tagDomLock *v25; // rcx
  tagDomLock *v26; // [rsp+20h] [rbp-40h] BYREF
  char v27; // [rsp+28h] [rbp-38h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  char v29; // [rsp+38h] [rbp-28h]
  __int64 v30; // [rsp+40h] [rbp-20h]
  char v31; // [rsp+48h] [rbp-18h]

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(&v26);
  if ( !v31 )
  {
    v2 = 0;
    v3 = &v27;
    do
    {
      v4 = (tagDomLock *)*((_QWORD *)v3 - 1);
      if ( v4 )
      {
        if ( *v3 )
          tagDomLock::LockExclusive(v4);
        else
          tagDomLock::LockShared(v4);
      }
      ++v2;
      v3 += 16;
    }
    while ( !v2 );
    v31 = 1;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    goto LABEL_57;
  if ( v31 && v26 )
  {
    if ( v27 )
      tagDomLock::UnLockExclusive(v26);
    else
      tagDomLock::UnLockShared(v26);
  }
  PtiCurrentShared();
  if ( *((_DWORD *)a1 + 18) != -1 )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5, v7);
    if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
      return 0LL;
    DLT = DLT_WINEVENT::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v28 = gDomainDummyLock;
    v26 = DomainLockRef;
    v27 = 1;
    v29 = 0;
    v30 = 0LL;
    if ( DomainLockRef )
      tagDomLock::UnLockExclusive(DomainLockRef);
    v11 = *((unsigned int *)a1 + 18);
    v31 = 1;
    if ( !xxxLoadHmodIndex(v11) )
    {
      if ( v31 )
      {
        v23 = 0;
        v24 = &v27;
        do
        {
          v25 = (tagDomLock *)*((_QWORD *)v24 - 1);
          if ( v25 )
          {
            if ( *v24 )
              tagDomLock::LockExclusive(v25);
            else
              tagDomLock::LockShared(v25);
          }
          ++v23;
          v24 += 16;
        }
        while ( !v23 );
      }
      return 0LL;
    }
    if ( v31 )
    {
      v12 = 0;
      v13 = &v27;
      do
      {
        v14 = (tagDomLock *)*((_QWORD *)v13 - 1);
        if ( v14 )
        {
          if ( *v13 )
            tagDomLock::LockExclusive(v14);
          else
            tagDomLock::LockShared(v14);
        }
        ++v12;
        v13 += 16;
      }
      while ( !v12 );
    }
  }
  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(&v26);
  if ( !v31 )
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
    v31 = 1;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
LABEL_57:
    if ( v31 && v26 )
    {
      if ( v27 )
        tagDomLock::UnLockExclusive(v26);
      else
        tagDomLock::UnLockShared(v26);
    }
    return 0LL;
  }
  if ( v31 && v26 )
  {
    if ( v27 )
      tagDomLock::UnLockExclusive(v26);
    else
      tagDomLock::UnLockShared(v26);
  }
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  v18 = PtiCurrentShared();
  v19 = *((int *)a1 + 18);
  v20 = *((_QWORD *)v18 + 53);
  v21 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v20 + 8 * v19 + 408);
  if ( (_DWORD)v19 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v20 + 8 * v19 + 408));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v21;
}
