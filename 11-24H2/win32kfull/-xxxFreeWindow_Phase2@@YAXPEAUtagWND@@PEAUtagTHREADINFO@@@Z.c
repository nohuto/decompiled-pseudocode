/*
 * XREFs of ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E024 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     SfnDWORD @ 0x14007F9E0 (SfnDWORD.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 *     DestroyWindowSmIcon @ 0x14008DCFC (DestroyWindowSmIcon.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     IsSysShadow @ 0x14015D378 (IsSysShadow.c)
 *     xxxRemoveShadow @ 0x14015EE80 (xxxRemoveShadow.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1401AA254 (xxxClientFreeWindowClassExtraBytes.c)
 *     ClearDelegationCapture @ 0x1401B9AC0 (ClearDelegationCapture.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401BCB74 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     CleanupShadow @ 0x14020691C (CleanupShadow.c)
 *     zzzInputFocusLostWindowEvent @ 0x14023D6B8 (zzzInputFocusLostWindowEvent.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140252128 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x140255A48 (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB038 (-UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ.c)
 *     xxxDDETrackWindowDying @ 0x1402B10D4 (xxxDDETrackWindowDying.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall xxxFreeWindow_Phase2(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  __int16 v4; // cx
  unsigned __int16 v5; // si
  char v6; // bp
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  Scrollbar::NonClient *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagWND **v15; // rcx
  struct tagWND **v16; // rcx
  struct tagWND **v17; // rcx
  __int64 v18; // rax
  struct tagWND **v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 Prop; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  void *v27; // rdi
  __int64 v28; // rax
  struct tagINPUT_MESSAGE_SOURCE *v29; // [rsp+20h] [rbp-88h]
  __int128 v30; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v32[16]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+8h] BYREF

  xxxSendTransformableMessageTimeout(a1, 0x82u, 0, 0, 0LL, 1, 1);
  SetOrClrWF(0LL, a1, 1088LL, 0LL);
  v4 = *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL);
  v5 = v4 & 0x2FFF;
  v6 = v4;
  if ( (v4 & 0x2FFFu) >= 0x29A && (v4 & 0x4000) == 0 )
  {
    if ( v5 > 0x2A0u )
    {
      if ( v5 > 0x2AAu )
        goto LABEL_12;
    }
    else if ( v5 != 666 )
    {
      UserSessionState = W32GetUserSessionState();
      v29 = 0LL;
      (*(void (__fastcall **)(struct tagWND *, __int64, _QWORD, _QWORD))(UserSessionState
                                                                       + 8LL * ((v6 + 6) & 0x1F)
                                                                       + 71176))(
        a1,
        112LL,
        0LL,
        0LL);
LABEL_12:
      *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x4000u;
      goto LABEL_13;
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) == 0 )
    {
      if ( v5 == 666 )
        v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 19928) + 7592LL);
      else
        v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 19928) + 8LL * v5 - 4608);
      SfnDWORD((_DWORD)a1, 112, 0, 0, 0LL, v8);
    }
    goto LABEL_12;
  }
LABEL_13:
  *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x8000u;
  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_QWORD *)(v9 + 296);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)(v9 + 296) = 0LL;
    if ( (*(_DWORD *)(PsGetCurrentProcess() + 500) & 0x40000008) == 0
      && (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) == 0 )
    {
      xxxClientFreeWindowClassExtraBytes(a1, v10);
    }
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = 0;
  if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
    && Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(v11) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 336LL) = 0;
  }
  v12 = *((_QWORD *)a1 + 15);
  if ( v12 )
  {
    v13 = v12 + 200;
    if ( *(struct tagWND **)(v12 + 200) == a1 )
    {
      v14 = *(_QWORD *)(v12 + 40);
      if ( *(char *)(v14 + 19) < 0 || *(char *)(v14 + 20) < 0 )
        v12 = 0LL;
      *(_QWORD *)&v30 = v13;
      *((_QWORD *)&v30 + 1) = v12;
      HMAssignmentLock(&v30, 0LL);
      v30 = *(_OWORD *)LockPointer(v32, *((_QWORD *)a1 + 15) + 200LL, *(_QWORD *)(*((_QWORD *)a1 + 15) + 200LL));
      HMAssignmentLock(&v30, 0LL);
    }
  }
  if ( (**(_DWORD **)(W32GetUserSessionState() + 19928) & 4) != 0 && a1 == *((struct tagWND **)a2 + 103) )
    HMAssignmentUnlock((char *)a2 + 824);
  if ( *((struct tagWND **)a2 + 198) == a1 )
    HMAssignmentUnlock((char *)a2 + 1584);
  if ( *((struct tagWND **)a2 + 207) == a1 )
    HMAssignmentUnlock((char *)a2 + 1656);
  if ( *((struct tagWND **)a2 + 208) == a1 )
    HMAssignmentUnlock((char *)a2 + 1664);
  v15 = (struct tagWND **)*((_QWORD *)a2 + 59);
  if ( a1 == v15[15] )
  {
    tagQ::UnlockFocusWnd((tagQ *)v15);
    if ( *((_QWORD *)a2 + 59) == *(_QWORD *)(W32GetUserSessionState() + 18944) )
      zzzInputFocusLostWindowEvent(a1, 10LL);
  }
  v16 = (struct tagWND **)(*((_QWORD *)a2 + 59) + 136LL);
  if ( a1 == *v16 )
    HMAssignmentUnlock(v16);
  v17 = (struct tagWND **)*((_QWORD *)a2 + 59);
  if ( a1 == v17[16] )
    tagQ::SetActiveWindow((tagQ *)v17, 0LL);
  if ( a1 == *(struct tagWND **)(*((_QWORD *)a2 + 59) + 144LL) )
    ClearDelegationCapture();
  if ( a1 == *(struct tagWND **)(W32GetUserSessionState() + 63512) )
  {
    v18 = W32GetUserSessionState();
    HMAssignmentUnlock(v18 + 63512);
  }
  v19 = (struct tagWND **)*((_QWORD *)a1 + 3);
  if ( v19 && a1 == v19[24] )
  {
    v33 = 0LL;
    NotifyShell::HitTestPartUpdate((NotifyShell *)v19, a1, 0LL, (int)&v33, v29);
    xxxOnTrackingWindowDestroyed(a2, *((struct tagDESKTOP **)a1 + 3));
    HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 192LL);
    *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFC3F;
  }
  if ( a1 == *(struct tagWND **)(*((_QWORD *)a2 + 59) + 112LL) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
    CleanupShadow(a1);
  else
    xxxRemoveShadow(a1);
  DestroyWindowSmIcon(a1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = 0LL;
  v20 = *((_QWORD *)a1 + 18);
  if ( v20 && *(_QWORD *)(v20 + 24) )
  {
    v21 = W32GetUserSessionState();
    Prop = GetProp(a1, *(unsigned __int16 *)(v21 + 41400), 1LL);
    v23 = Prop;
    if ( Prop )
    {
      Win32HM_LockIntoThread<0>(a2, Prop, BugCheckParameter3);
      xxxDDETrackWindowDying(v24, v23);
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>((ULONG_PTR)BugCheckParameter3);
    }
    v25 = W32GetUserSessionState();
    v26 = InternalRemoveProp(a1, *(unsigned __int16 *)(v25 + 41404), 1LL);
    v27 = (void *)v26;
    if ( v26 )
    {
      *(_WORD *)(v26 + 88) = 0;
      if ( !*(_WORD *)(v26 + 90) )
      {
        SeDeleteClientSecurity(v26 + 16);
        Win32FreePool(v27);
      }
    }
    v28 = W32GetUserSessionState();
    InternalRemoveProp(a1, *(unsigned __int16 *)(v28 + 41426), 1LL);
    DeleteStringPropertyAtoms(a1);
  }
  if ( (*((_DWORD *)a1 + 96) & 2) != 0 && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
    PostIAMShellHookMessage(0x12u, *(_QWORD *)a1);
}
