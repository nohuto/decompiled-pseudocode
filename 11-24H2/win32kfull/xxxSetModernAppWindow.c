/*
 * XREFs of xxxSetModernAppWindow @ 0x14024CD58
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x14002E5E8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     NtUserSetModernAppWindow @ 0x1402466C0 (NtUserSetModernAppWindow.c)
 * Callees:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14009A8C4 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     zzzAttachThreadInput @ 0x1401E1E5C (zzzAttachThreadInput.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140233A48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140252698 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     LockQCursor @ 0x140271870 (LockQCursor.c)
 */

__int64 __fastcall xxxSetModernAppWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v33; // [rsp+30h] [rbp-40h] BYREF
  __int64 v34; // [rsp+38h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR v36[2]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v37[2]; // [rsp+60h] [rbp-10h] BYREF
  int v38; // [rsp+C0h] [rbp+50h]

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v38 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(v2 + 1592);
  if ( (*(_DWORD *)(v2 + 1360) & 0x40000) == 0 )
    goto LABEL_59;
  v8 = *(struct tagWND **)(v2 + 1584);
  if ( !v8 || v8 != a1 )
    goto LABEL_59;
  if ( (struct tagTHREADINFO *)v2 == PtiCurrent((__int64)a1, a2) )
  {
    if ( a2 )
    {
      v12 = ValidateHwnd(a2);
      v6 = v12;
      if ( !v12
        || (struct tagWND *)v12 == a1
        || *(struct tagWND **)(v12 + 104) == a1
        || v12 == *(_QWORD *)(v2 + 1592)
        || *(_QWORD *)(v12 + 16) == v2 )
      {
        v11 = 1400;
        goto LABEL_60;
      }
    }
    if ( !v7 )
    {
LABEL_17:
      if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18944)
        && v7
        && (v14 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18944), v15 = *(_QWORD *)(v2 + 472), v14 == v15)
        && (v16 = *(_QWORD *)(v7 + 16), *(_QWORD *)(v16 + 472) == v15)
        && *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18960) == v16 )
      {
        v38 = 1;
      }
      else if ( *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18944) != *(_QWORD *)(v2 + 472) )
      {
        v17 = 1;
        if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
        {
LABEL_26:
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v37, v6);
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v36, v7);
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
          v34 = v6;
          v33 = v2 + 1592;
          HMAssignmentLock(&v33, 0LL);
          LOBYTE(v33) = 0;
          v34 = 0LL;
          AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v33);
          if ( v7 )
          {
            if ( *(struct tagWND **)(*(_QWORD *)(v2 + 472) + 128LL) == a1 )
              xxxSendNotifyMessage(
                (struct tagWND *)v7,
                0x349u,
                (unsigned __int64)(*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) << 16,
                0LL,
                0);
            if ( *(_QWORD *)(*(_QWORD *)(v2 + 472) + 120LL) == v7 )
            {
              xxxSendNotifyMessage((struct tagWND *)v7, 8u, 0LL, 0LL, 0);
              tagQ::UnlockFocusWnd(*(tagQ **)(*((_QWORD *)a1 + 2) + 472LL));
            }
          }
          if ( v6 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 472LL) + 128LL) == v6 )
            {
              xxxSendNotifyMessage(
                (struct tagWND *)v6,
                0x349u,
                (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x20) << 16,
                0LL,
                0);
              tagQ::SetActiveWindow(*(tagQ **)(*(_QWORD *)(v6 + 16) + 472LL), 0LL);
            }
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 472LL) + 120LL) == v6 )
            {
              xxxSendNotifyMessage((struct tagWND *)v6, 8u, 0LL, 0LL, 0);
              tagQ::UnlockFocusWnd(*(tagQ **)(*(_QWORD *)(v6 + 16) + 472LL));
            }
          }
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33);
          if ( v6 )
          {
            SetOrClrWF(0, (struct tagWND *)v6, 0xF80u, 1);
            SetOrClrWF(1, (struct tagWND *)v6, 0xF40u, 1);
            xxxSetWindowStyle((struct tagWND *)v6, -20, *(_DWORD *)(*(_QWORD *)(v6 + 40) + 24LL) | 0x80000);
            xxxSetParentWorker((struct tagWND **)v6, a1, (struct tagWND **)v7, 0);
            if ( *(struct tagWND **)(v6 + 104) != a1
              || (v19 = *(_QWORD *)(v2 + 472), *(_QWORD *)(*(_QWORD *)(v6 + 16) + 472LL) != v19) )
            {
LABEL_58:
              Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v18);
              Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v36, v30);
              Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v37, v31);
              return v3;
            }
            if ( *(_QWORD *)(v2 + 1592) == v6 && *(struct tagWND **)(v19 + 128) == a1 )
            {
              xxxSendNotifyMessage((struct tagWND *)v6, 0x349u, 1uLL, 0LL, 0);
              xxxDeliverRestoreFocusMessage((struct tagWND *)v6, v20);
            }
          }
          if ( v7 )
          {
            if ( *(struct tagWND **)(v7 + 104) == a1 )
            {
              xxxSetParentWorker((struct tagWND **)v7, (struct tagWND *)0xFFFFFFFFFFFFFFFDLL, 0LL, 0);
              SetOrClrWF(0, (struct tagWND *)v7, 0xF40u, 1);
              SetOrClrWF(1, (struct tagWND *)v7, 0xF80u, 1);
              xxxSetWindowStyle((struct tagWND *)v7, -20, *(_DWORD *)(*(_QWORD *)(v7 + 40) + 24LL) & 0xFFF7FFFF);
              v18 = *(_QWORD *)(v7 + 16);
              if ( *(_QWORD *)(v18 + 472) == *(_QWORD *)(v2 + 472) )
              {
                if ( (unsigned int)zzzAttachThreadInput(v2, v18, 0x4000) != -1073741790
                  && *(_QWORD *)(v2 + 472) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 472LL) )
                {
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2447LL);
                }
                LOBYTE(v33) = 0;
                v34 = 0LL;
                AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v33);
                UserSessionState = W32GetUserSessionState(v22, v21);
                LockQCursor(
                  *(struct tagQ **)(*(_QWORD *)(v7 + 16) + 472LL),
                  *(struct tagCURSOR **)(UserSessionState + 21936));
                if ( v38 )
                {
                  v27 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18960);
                  if ( v27 == *(_QWORD *)(v7 + 16) )
                  {
                    v29 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18944);
                    if ( *(_QWORD *)(v2 + 472) == v29 )
                    {
                      if ( *(_QWORD *)(v2 + 480) != *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v28) + 18960)
                                                              + 480LL) )
                        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33);
                      xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)v2, 0LL);
                    }
                  }
                }
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v33);
                if ( v17 )
                {
                  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
                    xxxSetForegroundWindow2((__int64)a1, 0LL, 2u);
                }
              }
            }
          }
          v3 = 1;
          goto LABEL_58;
        }
      }
      v17 = 0;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(v7 + 16) != v2 )
    {
      if ( *(struct tagWND **)(v7 + 104) != a1 )
        v7 = 0LL;
      goto LABEL_17;
    }
LABEL_59:
    v11 = 87;
    goto LABEL_60;
  }
  v11 = 5;
LABEL_60:
  UserSetLastError(v11);
  return 0LL;
}
