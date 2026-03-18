/*
 * XREFs of zzzUnhookWindowsHook @ 0x1C01BB48C
 * Callers:
 *     NtUserUnhookWindowsHook @ 0x1C01DEA20 (NtUserUnhookWindowsHook.c)
 * Callees:
 *     PhkFirstValid @ 0x1C003CE54 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1C003CEB4 (PhkNextValid.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C003CF14 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     zzzUnhookWindowsHookEx @ 0x1C003D1C4 (zzzUnhookWindowsHookEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(int a1, __int64 a2)
{
  unsigned int DLT; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rsi
  char v10; // di
  int v11; // r14d
  tagDomLock *v12; // rcx
  struct tagTHREADINFO *v13; // r14
  __int64 i; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // r8d
  int v22; // r9d
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  int v26; // edx
  char v28; // di
  tagDomLock *DomainLockRef; // [rsp+50h] [rbp-9h] BYREF
  char v30; // [rsp+58h] [rbp-1h] BYREF
  __int64 v31; // [rsp+60h] [rbp+7h]
  char v32; // [rsp+68h] [rbp+Fh]
  __int64 v33; // [rsp+70h] [rbp+17h]
  char v34; // [rsp+78h] [rbp+1Fh]

  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    UserSetLastError(1426);
    v28 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v28,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        3u,
        5u,
        0x19u,
        (__int64)&WPP_25140f5747a837f17753dc3b95c04f31_Traceguids,
        a1);
    return 0LL;
  }
  else
  {
    DLT = DLT_HOOK::getDLT();
    v5 = 0;
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    v9 = &v30;
    v31 = gDomainDummyLock;
    v10 = 1;
    v30 = 1;
    v33 = 0LL;
    v11 = 0;
    v32 = 0;
    v34 = 0;
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
    v34 = 1;
    v13 = PtiCurrentShared((__int64)v12, v6, v7, v8);
    for ( i = PhkFirstValid((__int64)v13, a1); ; i = PhkNextValid(v20) )
    {
      v20 = i;
      if ( !i )
      {
        UserSetLastError(1431);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v10 = 0;
        }
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = 27;
          LOBYTE(v23) = v10;
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v23,
            v21,
            v22,
            3,
            5,
            27,
            (__int64)&WPP_25140f5747a837f17753dc3b95c04f31_Traceguids);
        }
        if ( v34 && DomainLockRef )
        {
          if ( v30 )
            tagDomLock::UnLockExclusive(DomainLockRef);
          else
            tagDomLock::UnLockShared(DomainLockRef);
        }
        return 0LL;
      }
      v19 = *(_DWORD *)(i + 68) == -1
          ? *(_QWORD *)(i + 56)
          : *(_QWORD *)(i + 56)
          + *(_QWORD *)(*((_QWORD *)PtiCurrentShared(v16, v15, v17, v18) + 53) + 8LL * *(int *)(i + 68) + 408);
      if ( v19 == a2 )
        break;
    }
    if ( *(struct tagTHREADINFO **)(v20 + 16) == v13 )
    {
      v5 = zzzUnhookWindowsHookEx((struct tagHOOK *)v20);
    }
    else
    {
      UserSetLastError(5);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v10 = 0;
      }
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 26;
        LOBYTE(v26) = v10;
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v24,
          v25,
          3,
          5,
          26,
          (__int64)&WPP_25140f5747a837f17753dc3b95c04f31_Traceguids);
      }
    }
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
    return v5;
  }
}
