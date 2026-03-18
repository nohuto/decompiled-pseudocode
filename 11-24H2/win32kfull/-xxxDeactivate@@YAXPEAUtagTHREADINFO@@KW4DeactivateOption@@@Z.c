/*
 * XREFs of ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1400749F8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140147740 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1401B92C4 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401C8A38 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401D3C2C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x14023D6B8 (zzzInputFocusLostWindowEvent.c)
 */

void __fastcall xxxDeactivate(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r14
  struct tagTHREADINFO *v5; // rax
  tagQ **v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rdx
  volatile signed __int32 *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rdx
  tagQ *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  tagQ *v21; // rax
  struct tagWND *v22; // rax
  struct tagTHREADINFO **v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h]
  _QWORD v32[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v33[2]; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v35[2]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR v36[2]; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR v37[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  ULONG_PTR BugCheckParameter2[9]; // [rsp+F8h] [rbp-8h] BYREF
  int v41; // [rsp+150h] [rbp+50h]
  int v42; // [rsp+158h] [rbp+58h]
  unsigned __int64 v43; // [rsp+168h] [rbp+68h]

  v42 = a2;
  v29 = 0LL;
  v39 = 0LL;
  v4 = a1;
  v31 = -1LL;
  v38 = 0LL;
  *(_OWORD *)v30 = 0LL;
  v5 = PtiCurrent(a1, a2);
  v6 = (tagQ **)(v4 + 472);
  v7 = (__int64)v5;
  v41 = 0;
  if ( !*(_QWORD *)(*(_QWORD *)(v4 + 472) + 128LL) )
  {
    v8 = 1LL;
    goto LABEL_38;
  }
  if ( (struct tagTHREADINFO *)v4 != v5 )
    Win32RawLockedW32Thread::ManualLock(v30, v4);
  v9 = (volatile signed __int32 *)(v4 + 528);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 528), 0, 0) & 0x200) == 0 )
  {
    _InterlockedOr(v9, 0x200u);
    v41 = 1;
  }
  v8 = *((_QWORD *)*v6 + 14);
  if ( v8 )
  {
    Win32HM_LockIntoThread<0>(v7, v8, v36);
    xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)*v6 + 14), 31LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    SetWakeBit(v4, 2LL);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v36, v10);
  }
  v11 = *((_QWORD *)*v6 + 16);
  if ( !v11 )
  {
    v11 = -1LL;
    *(_QWORD *)&v29 = v4;
    v13 = a3 & 1;
    goto LABEL_20;
  }
  v4 = *(_QWORD *)(v11 + 16);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread(
    (Win32RawLockedW32Thread *)BugCheckParameter2,
    (struct _W32THREAD *)v4);
  Win32HM_LockIntoThread<0>(v7, v11, v33);
  v12 = (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v11 + 40) + 31LL) & 0x20) << 16;
  v43 = v12;
  v13 = a3 & 1;
  if ( v13 )
  {
LABEL_14:
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v11, 6LL, v12, 0LL, 0, 0, 0LL, 1, 1);
    v16 = *v6;
    if ( *((_QWORD *)*v6 + 16) == v11 )
    {
      v32[1] = *((_QWORD *)*v6 + 16);
      v32[0] = (char *)v16 + 136;
      HMAssignmentLock(v32, 0LL);
      tagQ::SetActiveWindow(*v6, 0LL);
    }
    SetOrClrWF(0, (struct tagWND *)v11, 0x40u, 1);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 528), 0, 0) & 1) != 0 )
      v4 = 0LL;
    *(_QWORD *)&v29 = v4;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v33, v17);
    LOBYTE(v18) = 1;
    Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v18);
LABEL_20:
    if ( v4 )
    {
      HIDWORD(v29) &= 0xFFFFFFFC;
      DWORD2(v29) = v42;
      xxxSendActivateAppMessage((const struct tagAAS *)&v29);
    }
    if ( *((_QWORD *)*v6 + 16) == v11 )
    {
      Win32HM_LockIntoThread<1>(v7, v11, (__int64 *)BugCheckParameter3);
      if ( !v13 && !anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11, 0LL) )
      {
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v19);
        goto LABEL_35;
      }
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v11, 6LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v20);
      v21 = *v6;
      if ( *((_QWORD *)*v6 + 16) == v11 )
      {
        v35[1] = *((_QWORD *)*v6 + 16);
        v35[0] = (char *)v21 + 136;
        HMAssignmentLock(v35, 0LL);
        tagQ::SetActiveWindow(*v6, 0LL);
      }
    }
    if ( *((_QWORD *)*v6 + 15) )
    {
      v22 = tagQ::UnlockFocusWnd(*v6);
      v23 = (struct tagTHREADINFO **)v22;
      if ( v22 )
      {
        Win32HM_LockIntoThread<0>(v7, (__int64)v22, v37);
        if ( *v6 == *(tagQ **)(W32GetUserSessionState(v25, v24) + 18944) )
          zzzInputFocusLostWindowEvent(v23, 8LL);
        xxxSendTransformableMessageTimeout(v23, 8LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
        if ( (**(_DWORD **)(W32GetUserSessionState(v27, v26) + 19928) & 4) != 0 )
          xxxFocusSetInputContext((struct tagWND *)v23, 0LL, 0);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v37, v28);
      }
    }
    goto LABEL_35;
  }
  if ( anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v11, 0LL) )
  {
    v12 = v43;
    goto LABEL_14;
  }
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v33, v14);
  LOBYTE(v15) = 1;
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v15);
LABEL_35:
  if ( v41 )
    _InterlockedAnd(v9, 0xFFFFFDFF);
  LOBYTE(v8) = 1;
LABEL_38:
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v30, v8);
}
