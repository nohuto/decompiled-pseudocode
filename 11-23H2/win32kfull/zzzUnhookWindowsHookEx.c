/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C003D1C4
 * Callers:
 *     zzzCancelJournalling @ 0x1C003C590 (zzzCancelJournalling.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C003CF70 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C003DEE0 (zzzSetWindowsHookEx.c)
 *     zzzUnhookWindowsHook @ 0x1C01BB48C (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C003C7B4 (PhkFirstGlobalValid.c)
 *     PhkNextValid @ 0x1C003CEB4 (PhkNextValid.c)
 *     FreeHook @ 0x1C003F9E0 (FreeHook.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C003FC7C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C01399C8 (--1-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01BADCC (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // r9d
  struct tagTHREADINFO *v5; // r14
  _BYTE *v6; // r13
  int v8; // esi
  bool v9; // di
  int v10; // edx
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r12d
  char *v17; // r15
  tagDomLock *v18; // rcx
  __int64 i; // rax
  __int128 v20; // [rsp+50h] [rbp-49h] BYREF
  __int64 v21; // [rsp+60h] [rbp-39h]
  tagDomLock *v22; // [rsp+68h] [rbp-31h]
  char v23; // [rsp+70h] [rbp-29h] BYREF
  __int64 v24; // [rsp+78h] [rbp-21h]
  char v25; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  char v27; // [rsp+90h] [rbp-9h]
  tagDomLock *v28; // [rsp+98h] [rbp-1h] BYREF
  char v29; // [rsp+A0h] [rbp+7h]
  char v30; // [rsp+C0h] [rbp+27h]

  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v28);
  v5 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 28;
      LOBYTE(v10) = v9;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v3,
        v4,
        3,
        5,
        28,
        (__int64)&WPP_25140f5747a837f17753dc3b95c04f31_Traceguids,
        (char)a1);
    }
    DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::~ObjectLockRecursive<>(
      &v28,
      v2,
      v3);
    return 0LL;
  }
  else
  {
    v6 = &unk_1C0316E78;
    if ( (*((_BYTE *)&unk_1C0316E78 + *((int *)a1 + 12) + 1) & 4) != 0 )
    {
      v20 = 0LL;
      v21 = 0LL;
      DLT = DLT_HOOK::getDLT();
      DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
      v22 = DomainLockRef;
      v24 = gDomainDummyLock;
      v23 = 1;
      v25 = 0;
      v26 = 0LL;
      if ( DomainLockRef )
        tagDomLock::UnLockExclusive(DomainLockRef);
      v27 = 1;
      ThreadLock(a1, &v20);
      zzzJournalAttach(v5, 0);
      a1 = (struct tagHOOK *)ThreadUnlock1(v14, v13, v15);
      if ( v27 )
      {
        v16 = 0;
        v17 = &v23;
        do
        {
          v18 = (tagDomLock *)*((_QWORD *)v17 - 1);
          if ( v18 )
          {
            if ( *v17 )
              tagDomLock::LockExclusive(v18);
            else
              tagDomLock::LockShared(v18);
          }
          ++v16;
          v17 += 16;
        }
        while ( !v16 );
      }
    }
    if ( a1 )
      FreeHook(a1);
    if ( (*((_DWORD *)v5 + 122) & 0x40000) != 0 )
    {
      v8 = -1;
      do
      {
        if ( (*v6 & 0x10) != 0 )
        {
          for ( i = PhkFirstGlobalValid((__int64)v5, v8); i; i = PhkNextValid(i) )
          {
            if ( *(struct tagTHREADINFO **)(i + 16) == v5 )
              goto LABEL_6;
          }
        }
        ++v8;
        ++v6;
      }
      while ( v8 <= 14 );
      *((_DWORD *)v5 + 122) &= ~0x40000u;
    }
LABEL_6:
    if ( v30 && v28 )
    {
      if ( v29 )
        tagDomLock::UnLockExclusive(v28);
      else
        tagDomLock::UnLockShared(v28);
    }
    return 1LL;
  }
}
