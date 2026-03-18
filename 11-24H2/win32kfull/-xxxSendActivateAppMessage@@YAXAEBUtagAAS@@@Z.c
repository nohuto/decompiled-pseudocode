/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1400749F8
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027A098 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140049A98 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagBWL *v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  struct tagWND **v18; // r15
  struct tagWND *v19; // rbx
  int v20; // r8d
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  _BYTE v25[16]; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-38h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v25);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25);
  v4 = PtiCurrent(v3, v2);
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)v4 + 63) + 24LL) + 112LL), 2LL, 0LL, 1);
  v8 = v5;
  if ( v5 )
  {
    v9 = (_QWORD *)((char *)v5 + 32);
    v10 = *((_QWORD *)v5 + 4);
    if ( v10 != 1 )
    {
      do
      {
        W32GetCurrentThreadNonPaged(v7, v6);
        v7 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19928);
        if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(v7 + 8) )
        {
          UserSessionState = W32GetUserSessionState(v7, v6);
          v16 = *(_DWORD *)(W32GetUserSessionState(v15, v14) + 19952) * (unsigned int)(unsigned __int16)v10
              + *(_QWORD *)(UserSessionState + 19944);
          v18 = (struct tagWND **)HMPkheFromPhe(v16);
          LOWORD(v10) = WORD1(v10) & 0x7FFF;
          if ( ((WORD1(v10) & 0x7FFF) == *(_WORD *)(v16 + 26)
             || (_WORD)v10 == 0x7FFF
             || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v7, v6, v17))
            && (*(_BYTE *)(v16 + 25) & 1) == 0
            && *(_BYTE *)(v16 + 24) == 1 )
          {
            v19 = *v18;
            if ( *v18 )
            {
              if ( *((_QWORD *)v19 + 2) == *(_QWORD *)a1 )
              {
                v20 = *((_DWORD *)a1 + 3);
                if ( (v20 & 2) != 0 )
                {
                  SendNotifyMessageAlways(v19, 0x1Cu, v20 & 1, *((unsigned int *)a1 + 2), 0);
                }
                else
                {
                  v21 = PtiCurrent(v7, v6);
                  Win32HM_LockIntoThread<1>((__int64)v21, (__int64)v19, (__int64 *)BugCheckParameter3);
                  xxxSendMessage(v19, 0x1Cu);
                  v24 = PtiCurrent(v23, v22);
                  Win32HM_UnlockFromThread<1>((ULONG_PTR)v24, BugCheckParameter3);
                }
              }
            }
          }
        }
        v10 = *++v9;
      }
      while ( *v9 != 1LL );
    }
    FreeHwndList(v8, v6);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v25);
}
