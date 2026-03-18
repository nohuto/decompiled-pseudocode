/*
 * XREFs of DestroyThreadsObjects @ 0x14005FF70
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     DestroyCacheDCEntries @ 0x140022480 (DestroyCacheDCEntries.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x140060CE0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140060DC8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     PopAndFreeW32ThreadLock @ 0x1400991CC (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140152C40 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rbx
  ULONG_PTR i; // rax
  __int64 v2; // rcx
  __int64 UserSessionState; // r15
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int (*v13)(void); // rax
  __int64 v14; // rdi
  void (__fastcall *v15)(__int64, __int64); // rax
  int (*v16)(void); // rax
  __int64 v17; // rdi
  void (__fastcall *v18)(__int64, __int64); // rax
  _BYTE v19[16]; // [rsp+20h] [rbp-38h] BYREF

  v0 = PtiCurrent();
  DestroyCacheDCEntries((__int64)v0);
  for ( i = *((_QWORD *)v0 + 57); i; i = *((_QWORD *)v0 + 57) )
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v0, i);
  while ( *((_QWORD *)v0 + 48) )
    PopAndFreeW32ThreadLock();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
  if ( *((_QWORD *)v0 + 149) )
  {
    v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
    v13 = *(int (**)(void))(v2 + 3024);
    if ( v13 )
    {
      if ( v13() >= 0 )
      {
        v14 = *((_QWORD *)v0 + 149);
        v15 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3032LL);
        if ( v15 )
          v15(v14, 1LL);
      }
    }
    *((_QWORD *)v0 + 149) = 0LL;
  }
  if ( *((_QWORD *)v0 + 150) )
  {
    v2 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
    v16 = *(int (**)(void))(v2 + 3040);
    if ( v16 )
    {
      if ( v16() >= 0 )
      {
        v17 = *((_QWORD *)v0 + 150);
        v18 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3048LL);
        if ( v18 )
          v18(v17, 1LL);
      }
    }
    *((_QWORD *)v0 + 150) = 0LL;
  }
  UserSessionState = W32GetUserSessionState(v2);
  v6 = *(int *)(W32GetUserSessionState(v4) + 19872);
  if ( (int)v6 >= 0 )
  {
    v7 = 40 * v6;
    v8 = 32 * v6;
    do
    {
      v9 = v8 + *(_QWORD *)(UserSessionState + 19944);
      v10 = W32GetUserSessionState(v5);
      v5 = *(unsigned __int8 *)(v9 + 24);
      v11 = *(_QWORD *)(v10 + 19888);
      if ( (_BYTE)v5 )
      {
        if ( (*((_BYTE *)&unk_1402437BC + 24 * v5) & 2) != 0 )
        {
          if ( (_BYTE)v5 == 2 )
          {
            v12 = *(_QWORD *)(v11 + v7);
            v5 = *(_QWORD *)(v12 + 80);
            if ( v5 )
            {
              if ( *(struct tagTHREADINFO **)(v5 + 16) == v0 )
              {
                *(_QWORD *)(v12 + 80) = 0LL;
                HMUnlockObject((int *)v5);
              }
            }
          }
        }
        else if ( *(struct tagTHREADINFO **)(v11 + v7 + 8) == v0 && (*(_BYTE *)(v9 + 25) & 1) == 0 )
        {
          HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v9);
        }
      }
      v8 -= 32LL;
      v7 -= 40LL;
      LODWORD(v6) = v6 - 1;
    }
    while ( (int)v6 >= 0 );
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19);
}
