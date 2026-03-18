/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1401B92C4 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401D3C2C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140233A48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140238488 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x14023D6B8 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x14023D6F8 (zzzInputFocusReceivedWindowEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1402879CC (zzzDelegateInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusReceivedWindowEvent @ 0x140287A08 (zzzDelegateInputFocusReceivedWindowEvent.c)
 */

__int64 __fastcall anonymous_namespace_::xxxSendFocusMessages(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v30; // [rsp+70h] [rbp-38h]
  __int128 v31; // [rsp+78h] [rbp-30h]
  __int64 v32; // [rsp+88h] [rbp-20h]

  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 436LL) &= ~0x800u;
  if ( !a2 )
  {
    v4 = *(_QWORD *)(a1 + 472);
    if ( *(_QWORD *)(v4 + 128) )
      *(_DWORD *)(v4 + 436) |= 0x800u;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 120LL);
  Win32HM_LockIntoThread<1>(a1, v5, (__int64 *)BugCheckParameter3);
  if ( a2 && *(_QWORD *)(a1 + 472) != *(_QWORD *)(a2[2] + 472) && *(char *)(a2[5] + 19) >= 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 246);
  tagQ::LockFocusWnd(*(_QWORD *)(a1 + 472), a2, 1LL);
  if ( a2 )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18944);
    if ( *(_QWORD *)(a1 + 472) == v11 )
    {
      v31 = 0LL;
      v32 = 0LL;
      *(_OWORD *)BugCheckParameter2 = 0LL;
      v30 = -1LL;
      v12 = PtiCurrent(v11, v10);
      v13 = a2[2];
      if ( (struct tagTHREADINFO *)v13 != v12 )
        Win32RawLockedW32Thread::ManualLock(BugCheckParameter2, v13);
      xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)a2[2], (struct tagWND *)a2);
      LOBYTE(v14) = 1;
      Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v14);
    }
    v15 = *(_DWORD **)(W32GetUserSessionState(v11, v10) + 18944);
    if ( (*(_DWORD **)(a1 + 472) == v15 || (unsigned __int8)IsKeyboardDelegationTarget(a1))
      && a2 == *(__int64 **)(*(_QWORD *)(a1 + 472) + 120LL) )
    {
      v15 = (_DWORD *)*(unsigned int *)(W32GetUserSessionState(v15, v6) + 67064);
      if ( (char)v15 >= 0 )
        xxxApplyGlobalInputSettings();
    }
    if ( v5 )
    {
      if ( *(_QWORD *)(a1 + 472) == *(_QWORD *)(W32GetUserSessionState(v15, v6) + 18944) )
      {
        zzzInputFocusLostWindowEvent(v5, 2LL);
      }
      else if ( (unsigned __int8)IsKeyboardDelegationTarget(*(_QWORD *)(v5 + 16))
             && *(_QWORD *)(a2[2] + 472) != *(_QWORD *)(*(_QWORD *)(v5 + 16) + 472LL) )
      {
        zzzDelegateInputFocusLostWindowEvent(v5, 16LL);
      }
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v5, 8LL, *a2, 0LL, 0, 0, 0LL, 1, 1);
      v15 = *(_DWORD **)(W32GetUserSessionState(v17, v16) + 19928);
      if ( (*v15 & 4) != 0 )
        xxxFocusSetInputContext((struct tagWND *)v5, 0LL, 0);
    }
    if ( a2 == *(__int64 **)(*(_QWORD *)(a1 + 472) + 120LL) )
    {
      if ( (**(_DWORD **)(W32GetUserSessionState(v15, v6) + 19928) & 4) != 0 )
        xxxFocusSetInputContext((struct tagWND *)a2, 1LL, 0);
      xxxWindowEvent(0x8005u, (struct tagWND *)a2, -4, 0, 0);
      v19 = *(unsigned int *)(a2[2] + 1360);
      if ( (v19 & 0x40000) != 0
        && (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v19, v18) + 132, 0, 0) & 1) != 0 )
      {
        v20 = 0LL;
        if ( v5 )
          v20 = *(struct tagTHREADINFO **)v5;
        xxxSendNotifyMessage((struct tagWND *)a2, 7u, (unsigned __int64)v20, 0LL, 1);
      }
      else
      {
        v23 = 0LL;
        if ( v5 )
          v23 = *(struct tagTHREADINFO **)v5;
        xxxSendTransformableMessageTimeout(
          (struct tagTHREADINFO **)a2,
          7LL,
          (unsigned __int64)v23,
          0LL,
          0,
          0,
          0LL,
          1,
          1);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v22, v21) + 18944)
        && (v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18944), *(__int64 **)(v26 + 120) == a2) )
      {
        zzzInputFocusReceivedWindowEvent(2LL, v26);
      }
      else if ( (unsigned __int8)IsKeyboardDelegationTarget(a1) && a2 == *(__int64 **)(*(_QWORD *)(a1 + 472) + 120LL) )
      {
        zzzDelegateInputFocusReceivedWindowEvent(15LL);
      }
    }
  }
  else if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 472) == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18944) )
    {
      zzzInputFocusLostWindowEvent(v5, 3LL);
    }
    else if ( (unsigned __int8)IsKeyboardDelegationTarget(*(_QWORD *)(v5 + 16)) )
    {
      zzzDelegateInputFocusLostWindowEvent(v5, 16LL);
    }
    xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v5, 8LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    v6 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 19928);
    if ( (*v6 & 4) != 0 )
      xxxFocusSetInputContext((struct tagWND *)v5, 0LL, 0);
  }
  return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, (__int64)v6);
}
