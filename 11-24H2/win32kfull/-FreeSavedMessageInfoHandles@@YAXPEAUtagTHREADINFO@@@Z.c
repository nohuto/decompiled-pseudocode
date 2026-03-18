/*
 * XREFs of ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400845B0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x140084538 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ?FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z @ 0x140084894 (-FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14008490C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14008495C (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall FreeSavedMessageInfoHandles(struct tagTHREADINFO *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 UserSessionState; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rdi
  _BYTE v40[48]; // [rsp+20h] [rbp-58h] BYREF
  char v41; // [rsp+50h] [rbp-28h]

  FreePreviouslyReturnedHidData(a1);
  v2 = *((_QWORD *)a1 + 149);
  if ( v2 )
  {
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(v40);
    v41 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY(v23, v22, v24) )
    {
      v41 = 1;
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v40);
    }
    W32GetCurrentThreadNonPaged(v26, v25);
    v30 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19928);
    if ( (unsigned __int64)(unsigned __int16)v2 < *(_QWORD *)(v30 + 8) )
    {
      UserSessionState = W32GetUserSessionState(v30, v29);
      v34 = *(_QWORD *)(UserSessionState + 19944)
          + *(_DWORD *)(W32GetUserSessionState(v33, v32) + 19952) * (unsigned int)(unsigned __int16)v2;
      v37 = (__int64 *)HMPkheFromPhe(v34);
      LOWORD(v2) = WORD1(v2) & 0x7FFF;
      if ( ((WORD1(v2) & 0x7FFF) == *(_WORD *)(v34 + 26)
         || (_WORD)v2 == 0x7FFF
         || !(_WORD)v2 && PsGetCurrentProcessWow64Process(v36, v35, v38))
        && (*(_BYTE *)(v34 + 25) & 1) == 0
        && *(_BYTE *)(v34 + 24) == 20 )
      {
        v39 = *v37;
        if ( v39 )
        {
          if ( *(_BYTE *)(_HMPheFromObject(v39) + 24) == 20 )
            HMDestroyObject(v39);
        }
      }
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v40);
    *((_QWORD *)a1 + 149) = 0LL;
  }
  v3 = *((_QWORD *)a1 + 150);
  if ( v3 )
  {
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(v40);
    v41 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY(v5, v4, v6) )
    {
      v41 = 1;
      DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v40);
    }
    W32GetCurrentThreadNonPaged(v8, v7);
    v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928);
    if ( (unsigned __int64)(unsigned __int16)v3 < *(_QWORD *)(v12 + 8) )
    {
      v13 = W32GetUserSessionState(v12, v11);
      v16 = *(_QWORD *)(v13 + 19944)
          + *(_DWORD *)(W32GetUserSessionState(v15, v14) + 19952) * (unsigned int)(unsigned __int16)v3;
      v19 = (__int64 *)HMPkheFromPhe(v16);
      LOWORD(v3) = WORD1(v3) & 0x7FFF;
      if ( ((WORD1(v3) & 0x7FFF) == *(_WORD *)(v16 + 26)
         || (_WORD)v3 == 0x7FFF
         || !(_WORD)v3 && PsGetCurrentProcessWow64Process(v18, v17, v20))
        && (*(_BYTE *)(v16 + 25) & 1) == 0
        && *(_BYTE *)(v16 + 24) == 21 )
      {
        v21 = *v19;
        if ( v21 )
        {
          if ( *(_BYTE *)(_HMPheFromObject(v21) + 24) == 21 )
            HMDestroyObject(v21);
        }
      }
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v40);
    *((_QWORD *)a1 + 150) = 0LL;
  }
}
