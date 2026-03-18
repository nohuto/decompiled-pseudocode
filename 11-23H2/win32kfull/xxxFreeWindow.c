/*
 * XREFs of xxxFreeWindow @ 0x1C00F2D20
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00F4184 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 * Callees:
 *     FreeSpb @ 0x1C000C170 (FreeSpb.c)
 *     xxxReleaseCapture @ 0x1C0011678 (xxxReleaseCapture.c)
 *     _FindActivationFilterWindow @ 0x1C0011F64 (_FindActivationFilterWindow.c)
 *     IsMotherDesktopWindow @ 0x1C002149C (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C00216A8 (DwmAsyncChildDestroy.c)
 *     DwmAsyncShellWindowChange @ 0x1C0022230 (DwmAsyncShellWindowChange.c)
 *     DeleteHrgnClip @ 0x1C00223E0 (DeleteHrgnClip.c)
 *     InvalidateDCE @ 0x1C0022838 (InvalidateDCE.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x1C00239CC (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     IsCancelRotationDelayWindow @ 0x1C0023DDC (IsCancelRotationDelayWindow.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C0024958 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     _GetProcessWindowStation @ 0x1C0028180 (_GetProcessWindowStation.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C002BE08 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     _DestroyMenu @ 0x1C0040040 (_DestroyMenu.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     DecPaintCount @ 0x1C0061860 (DecPaintCount.c)
 *     ??9?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAEAEBQEAUHRGN__@@@Z @ 0x1C0061918 (--9-$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAEAEBQEAUHRGN__@@@Z.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00685A0 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     CleanupIAMAccess @ 0x1C00728B0 (CleanupIAMAccess.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C0072D38 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     DestroyWindowsTimers @ 0x1C008241C (DestroyWindowsTimers.c)
 *     ClearDelegationCapture @ 0x1C0082920 (ClearDelegationCapture.c)
 *     xxxRemoveShadow @ 0x1C0093B34 (xxxRemoveShadow.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0095A20 (UpdatePointerRedirIsAlive.c)
 *     DereferenceClass @ 0x1C0097DA0 (DereferenceClass.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C0098DF4 (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 *     _DeregisterShellHookWindow @ 0x1C00992E4 (_DeregisterShellHookWindow.c)
 *     ResetWindowTransform @ 0x1C009CB2C (ResetWindowTransform.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00A6394 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     GetClassPtr @ 0x1C00A68F0 (GetClassPtr.c)
 *     DwmAsyncOwnerChange @ 0x1C00AA8FC (DwmAsyncOwnerChange.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C00B13DC (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00B2D78 (PostIAMShellHookMessage.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00E07E0 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00E944C (xxxClientFreeWindowClassExtraBytes.c)
 *     ClearSendMessages @ 0x1C00F2B6C (ClearSendMessages.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00F4184 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C00F4314 (xxxRemoveFullScreen.c)
 *     MagpDestroyLensContext @ 0x1C00F43E4 (MagpDestroyLensContext.c)
 *     CleanupWindowRedirection @ 0x1C00F4CF8 (CleanupWindowRedirection.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00F8024 (GreDeleteSpriteOverlapPresent.c)
 *     SfnDWORD @ 0x1C01243F0 (SfnDWORD.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C012B670 (FindQMsg.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0130DD8 (zzzInputFocusLostWindowEvent.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x1C01310B0 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ??8?$SharedPointerBase@UtagWND@@@@QEBAEH@Z @ 0x1C01389A0 (--8-$SharedPointerBase@UtagWND@@@@QEBAEH@Z.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01389B0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ?GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C0138A0C (-GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ.c)
 *     ClrWF @ 0x1C0138A1C (ClrWF.c)
 *     SetWF @ 0x1C0138AFC (SetWF.c)
 *     ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C0139908 (--$-9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z.c)
 *     _PostQuitMessage @ 0x1C0139FA0 (_PostQuitMessage.c)
 *     Win32HeapFree @ 0x1C013A00C (Win32HeapFree.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C013A030 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C013A050 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A0B4 (safe_cast_fnid_to_PMENUWND.c)
 *     DestroyWindowsHotKeys @ 0x1C013AAF8 (DestroyWindowsHotKeys.c)
 *     FreeClientOnWindowDestruction @ 0x1C013B030 (FreeClientOnWindowDestruction.c)
 *     ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x1C013B684 (-ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowMessageFilter @ 0x1C013C0A0 (FreeWindowMessageFilter.c)
 *     ??$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C013C128 (--$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C013C144 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 *     ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z @ 0x1C013C188 (--4-$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C013C1C0 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage @ 0x1C013C34C (Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage.c)
 *     FreeWindowGCData @ 0x1C013C484 (FreeWindowGCData.c)
 *     UnlockWndMenu @ 0x1C013C890 (UnlockWndMenu.c)
 *     UnlockWndMenuSys @ 0x1C013C8A8 (UnlockWndMenuSys.c)
 *     ?IsManagementWindow@ShellWindowManagement@@YA_NPEAUtagWND@@@Z @ 0x1C013C8C0 (-IsManagementWindow@ShellWindowManagement@@YA_NPEAUtagWND@@@Z.c)
 *     IsSysShadow @ 0x1C013C964 (IsSysShadow.c)
 *     DestroyWindowSmIcon @ 0x1C013C988 (DestroyWindowSmIcon.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1C013CD6C (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??B?$RedirectedFielddwDesktopId@_K@tagKERNELDESKTOPINFO@@QEBA_KXZ @ 0x1C01A2604 (--B-$RedirectedFielddwDesktopId@_K@tagKERNELDESKTOPINFO@@QEBA_KXZ.c)
 *     ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01A54C0 (--1AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??4?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEAAAEBQEAUHRGN__@@AEBQEAU2@@Z @ 0x1C01A54F0 (--4-$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEAAAEBQEAUHRGN__@@AEBQEAU2@@Z.c)
 *     ??B?$RedirectedFieldfnid@G@tagWND@@QEBAGXZ @ 0x1C01A5554 (--B-$RedirectedFieldfnid@G@tagWND@@QEBAGXZ.c)
 *     ??B?$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C01A5564 (--B-$RedirectedFieldhrgnUpdate@PEAUHRGN__@@@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ??B?$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ @ 0x1C01A557C (--B-$SharedPointerBase@UtagSBINFO@@@@QEAA_KXZ.c)
 *     ??I@YA?AW4_TIFLAGS@@W40@0@Z @ 0x1C01A5588 (--I@YA-AW4_TIFLAGS@@W40@0@Z.c)
 *     ?GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ @ 0x1C01A5728 (-GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1C01A5A2C (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z @ 0x1C01A5A40 (-RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z.c)
 *     ?GetFocusWnd@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C01AD504 (-GetFocusWnd@tagQ@@QEBAPEAUtagWND@@XZ.c)
 *     ??$?B_K@RedirectedFieldpExtraBytes@tagWND@@QEBA_KXZ @ 0x1C01B2494 (--$-B_K@RedirectedFieldpExtraBytes@tagWND@@QEBA_KXZ.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@@Z @ 0x1C01B72E0 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@@Z.c)
 *     ??C?$SmartObjStackRefBase@UtagPOPUPMENU@@@@QEBAPEAUtagPOPUPMENU@@XZ @ 0x1C01B8218 (--C-$SmartObjStackRefBase@UtagPOPUPMENU@@@@QEBAPEAUtagPOPUPMENU@@XZ.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01BA958 (safe_cast_fnid_to_PSWITCHWND.c)
 *     ??4?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEAAAEBIAEBI@Z @ 0x1C01BD890 (--4-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEAAAEBIAEBI@Z.c)
 *     ??4?$RedirectedFieldcbwndExtra@H@tagWND@@QEAAAEBHAEBH@Z @ 0x1C01BD8AC (--4-$RedirectedFieldcbwndExtra@H@tagWND@@QEAAAEBHAEBH@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndProgman@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE090 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndProgman@UtagWND@@@tagKERNELDESKTOPI.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE0A8 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINF.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndTaskman@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE0C0 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndTaskman@UtagWND@@@tagKERNELDESKTOPI.c)
 *     _NotifyOverlayWindow @ 0x1C01C7F50 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01C9810 (RemoveSwitchWindowInfo.c)
 *     ??_5?$RedirectedFieldfnid@G@tagWND@@QEAA?BGAEBG@Z @ 0x1C01CB490 (--_5-$RedirectedFieldfnid@G@tagWND@@QEAA-BGAEBG@Z.c)
 *     ??B?$RedirectedFieldfDeferredDesktopRotation@I@tagKERNELDESKTOPINFO@@QEBAIXZ @ 0x1C01F50F8 (--B-$RedirectedFieldfDeferredDesktopRotation@I@tagKERNELDESKTOPINFO@@QEBAIXZ.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F55B0 (xxxDeferredDesktopRotation.c)
 *     FindSpb @ 0x1C01F8AAC (FindSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01FAE60 (xxxDDETrackWindowDying.c)
 *     ??$?4H@RedirectedFieldpExtraBytes@tagWND@@QEAAAEBHAEBH@Z @ 0x1C01FFB0C (--$-4H@RedirectedFieldpExtraBytes@tagWND@@QEAAAEBHAEBH@Z.c)
 *     ??4?$RedirectedFieldLength@K@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAAEBKAEBK@Z @ 0x1C01FFB28 (--4-$RedirectedFieldLength@K@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAAEBKAEBK@Z.c)
 *     ??4?$RedirectedFieldhIcon@PEAUHICON__@@@tagWND@@QEAAAEBQEAUHICON__@@AEBQEAU2@@Z @ 0x1C01FFB44 (--4-$RedirectedFieldhIcon@PEAUHICON__@@@tagWND@@QEAAAEBQEAUHICON__@@AEBQEAU2@@Z.c)
 *     ??4?$RedirectedFieldlpfnWndProc@P6A_JPEAUtagWND@@I_K_J@Z@tagWND@@QEAAAEBQ6A_JPEAU1@I_K_J@ZAEBQ6A_J0I12@Z@Z @ 0x1C01FFB60 (--4-$RedirectedFieldlpfnWndProc@P6A_JPEAUtagWND@@I_K_J@Z@tagWND@@QEAAAEBQ6A_JPEAU1@I_K_J@ZAEBQ6A.c)
 *     ??4?$SharedUserObjPointerFieldspmenu@UtagMENU@@@tagWND@@QEAAPEAUtagMENU@@PEBU2@@Z @ 0x1C01FFB7C (--4-$SharedUserObjPointerFieldspmenu@UtagMENU@@@tagWND@@QEAAPEAUtagMENU@@PEBU2@@Z.c)
 *     ??F?$RedirectedFieldcntMBox@H@tagKERNELDESKTOPINFO@@QEAAHH@Z @ 0x1C01FFBB0 (--F-$RedirectedFieldcntMBox@H@tagKERNELDESKTOPINFO@@QEAAHH@Z.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01FFBD8 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@@Z @ 0x1C01FFC3C (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z @ 0x1C01FFC50 (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z.c)
 *     ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x1C01FFC6C (-UnlockPointer@@YAPEAPEAXPEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z.c)
 *     SafeLockWindow @ 0x1C01FFC80 (SafeLockWindow.c)
 *     CleanupShadow @ 0x1C0220D2C (CleanupShadow.c)
 *     GreDeleteWnd @ 0x1C0287890 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxFreeWindow(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rsi
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  EPOINTFIX *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // rax
  EPOINTFIX *v21; // rcx
  EPOINTFIX *v22; // rax
  __int64 v23; // rdx
  EPOINTFIX *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  EPOINTFIX *v27; // rax
  __int64 v28; // rax
  EPOINTFIX *v29; // rcx
  EPOINTFIX *v30; // rax
  __int64 v31; // rax
  struct tagWND *v32; // rdx
  ShellWindowManagement *v33; // rcx
  EPOINTFIX *v34; // rcx
  EPOINTFIX *v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  EPOINTFIX *v38; // rcx
  EPOINTFIX *v39; // rax
  unsigned __int16 v40; // r8
  struct tagWND **v41; // r8
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v43; // rdi
  __int64 v44; // rcx
  _QWORD *v45; // rax
  EPOINTFIX *v46; // rax
  unsigned __int16 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  EPOINTFIX *v58; // r12
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  EPOINTFIX *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r9
  __int64 v89; // rax
  EPOINTFIX *v90; // rax
  __int64 v91; // r8
  EPOINTFIX *v92; // rax
  EPOINTFIX *v93; // rax
  EPOINTFIX *v94; // rax
  tagQ *v95; // rax
  tagQ *v96; // rax
  tagTHREADINFO *v97; // rcx
  struct tagQ *v98; // rax
  EPOINTFIX *v99; // rax
  tagQ *v100; // rax
  tagQ *v101; // rax
  tagTHREADINFO *v102; // rcx
  __int64 v103; // r9
  struct tagQ *v104; // rax
  EPOINTFIX *v105; // rax
  EPOINTFIX *v106; // rax
  __int64 v107; // rax
  EPOINTFIX *v108; // rax
  EPOINTFIX *v109; // rcx
  EPOINTFIX *v110; // rax
  struct tagWND **v111; // rcx
  EPOINTFIX *v112; // rax
  __int64 v113; // rax
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  __int64 Prop; // rdi
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rax
  void *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rdi
  EPOINTFIX *v126; // rax
  EPOINTFIX *v127; // rax
  _DWORD *v128; // rax
  _DWORD *v129; // rcx
  _DWORD *v130; // rax
  _DWORD *v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rax
  struct tagMLIST *v135; // rdx
  __int64 QMsg; // rax
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rdi
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rcx
  EWNDOBJ *v149; // rdi
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 *v152; // r14
  __int64 v153; // rdi
  int v154; // eax
  struct tagWND *v155; // rdx
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rax
  char *Spb; // rax
  EPOINTFIX *v162; // rax
  char *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rdx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  EPOINTFIX *v185; // rax
  __int64 v186; // r8
  int v187; // eax
  bool v188; // zf
  EPOINTFIX *v189; // rax
  __int64 v190; // rax
  EPOINTFIX *v191; // rax
  __int64 v192; // rax
  EPOINTFIX *v193; // rax
  __int64 v194; // rax
  EPOINTFIX *v195; // rax
  __int64 v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // rdi
  void *v200; // rax
  __int64 v201; // rax
  __int64 ProcessWindowStation; // rax
  _QWORD *v203; // rdi
  EPOINTFIX *v204; // rax
  EPOINTFIX *v205; // rax
  EPOINTFIX *v206; // rax
  __int64 v207; // rdx
  struct tagWND *v208; // rcx
  __int64 v209; // r8
  __int64 v210; // rax
  __int64 v211; // rdi
  __int64 v212; // rax
  _DWORD *v213; // rax
  void *v214; // rcx
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // rdi
  void *v220; // rax
  EPOINTFIX *v221; // rax
  __int64 v222; // rax
  void *v223; // rcx
  __int64 v224; // rcx
  __int64 v225; // r9
  __int64 v226; // rax
  __int64 v227; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 *ClassPtr; // rax
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r9
  __int64 v234; // rax
  _BYTE v235[16]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v236; // [rsp+50h] [rbp-39h] BYREF
  __int64 v237; // [rsp+60h] [rbp-29h] BYREF
  __int64 v238; // [rsp+70h] [rbp-19h] BYREF
  __int128 v239; // [rsp+80h] [rbp-9h] BYREF
  __int64 v240; // [rsp+90h] [rbp+7h]
  __int128 v241; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v242; // [rsp+A8h] [rbp+1Fh]
  __int64 v243; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v244; // [rsp+F8h] [rbp+6Fh] BYREF

  v244 = a2;
  v241 = 0LL;
  v242 = 0LL;
  v3 = PtiCurrent();
  v6 = *(_QWORD *)(v5 + 40);
  v7 = v3;
  v8 = 0;
  if ( *(char *)(v6 + 20) >= 0 && !(unsigned int)IsMotherDesktopWindow((__int64)a1) )
  {
    LODWORD(v244) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4498LL);
  }
  if ( (unsigned int)Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage(v6, v4) )
    xxxFW_DestroyIMEWindowIfRequired(a1, v7);
  v11 = (struct tagWND *)*((_QWORD *)a1 + 3);
  if ( v11 )
  {
    if ( a1 == (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                                  *((_QWORD *)v11 + 1) + 168LL,
                                  v11,
                                  v9,
                                  v10) )
    {
      CleanupIAMAccess((struct tagDESKTOP *)v12);
      v15 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 168LL));
      v16 = UnlockPointer(v15);
      HMAssignmentUnlock(v16);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v17 = tagKERNELDESKTOPINFO::RedirectedFielddwDesktopId<unsigned __int64>::operator unsigned __int64(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 16LL);
        v20 = (void *)ReferenceDwmApiPort(v19, v18);
        DwmAsyncShellWindowChange(v20, 0LL, v17);
      }
      if ( (unsigned int)tagKERNELDESKTOPINFO::RedirectedFieldfDeferredDesktopRotation<unsigned int>::operator unsigned int(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 250LL) )
        v8 = 1;
    }
    v21 = (EPOINTFIX *)(*(_QWORD *)(v12 + 8) + 184LL);
    if ( *(struct tagWND **)v21 == a1 )
    {
      v22 = EPOINTFIX::EPOINTFIX(v21);
      HMAssignmentUnlock(v22);
    }
    if ( (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                            *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL,
                            v12,
                            v13,
                            v14) == a1 )
    {
      v27 = EPOINTFIX::EPOINTFIX(v24);
      v28 = UnlockPointer(v27);
      HMAssignmentUnlock(v28);
    }
    if ( (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                            *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 200LL,
                            v23,
                            v25,
                            v26) == a1 )
    {
      v30 = EPOINTFIX::EPOINTFIX(v29);
      v31 = UnlockPointer(v30);
      HMAssignmentUnlock(v31);
    }
    if ( IsCancelRotationDelayWindow((__int64)a1) )
    {
      v34 = (EPOINTFIX *)(*((_QWORD *)a1 + 3) + 304LL);
    }
    else
    {
      if ( ShellWindowManagement::IsManagementWindow(v33, v32) )
      {
        ShellWindowManagement::SetWindow((ShellWindowManagement *)v41, 0LL, (struct tagWND *)v41);
        goto LABEL_21;
      }
      v34 = (EPOINTFIX *)(v41 + 37);
      if ( a1 != v41[37] )
      {
        ActivationFilterWindow = FindActivationFilterWindow((__int64)a1);
        v43 = ActivationFilterWindow;
        if ( ActivationFilterWindow )
        {
          v44 = *ActivationFilterWindow;
          if ( *(_QWORD **)(*ActivationFilterWindow + 8LL) != ActivationFilterWindow
            || (v45 = (_QWORD *)ActivationFilterWindow[1], (_QWORD *)*v45 != v43) )
          {
            __fastfail(3u);
          }
          *v45 = v44;
          *(_QWORD *)(v44 + 8) = v45;
          v46 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v43 + 2));
          HMAssignmentUnlock(v46);
          Win32FreePool(v43);
        }
        goto LABEL_21;
      }
    }
    v35 = EPOINTFIX::EPOINTFIX(v34);
    HMAssignmentUnlock(v35);
LABEL_21:
    UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    v11 = (struct tagWND *)*((_QWORD *)a1 + 3);
    v38 = (EPOINTFIX *)(*((_QWORD *)v11 + 1) + 232LL);
    if ( *(struct tagWND **)v38 == a1 )
    {
      v39 = EPOINTFIX::EPOINTFIX(v38);
      HMAssignmentUnlock(v39);
      v11 = (struct tagWND *)*((_QWORD *)a1 + 3);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x40) != 0 )
    {
      DeregisterShellHookWindow(a1, (__int64)v11, v36, v37);
      v11 = (struct tagWND *)*((_QWORD *)a1 + 3);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x20) != 0 )
    {
      tagKERNELDESKTOPINFO::RedirectedFieldcntMBox<int>::operator--(*((_QWORD *)v11 + 1) + 248LL);
      ClrWF(a1, 32LL);
    }
  }
  if ( *((_DWORD *)a1 + 65) )
    CleanupInputDelegation(a1);
  InputTransform::ClearTransforms(a1, v11);
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 && v7 != *((struct tagTHREADINFO **)a1 + 2) )
    HMChangeOwnerThread(a1, v7);
  if ( v8 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 130LL, 0LL, 0LL);
  xxxRemoveFullScreen(a1);
  if ( ((unsigned __int16)tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x2FFFu) >= 0x29A
    && (tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x4000) == 0 )
  {
    if ( v40 > 0x2A0u )
    {
      if ( v40 <= 0x2AAu && !(unsigned int)operator&(*((unsigned int *)v7 + 122), 1LL) )
        SfnDWORD((_DWORD)a1, 112, 0, 0, 0LL, *(_QWORD *)(gpsi + 8LL * v47 - 4608));
    }
    else
    {
      (*((void (__fastcall **)(struct tagWND *, __int64, _QWORD))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
       + (((_BYTE)v40 + 6) & 0x1F)))(
        a1,
        112LL,
        0LL);
    }
    LOWORD(v244) = 0x4000;
    tagWND::RedirectedFieldfnid<unsigned short>::operator|=((char *)a1 + 87, &v244);
  }
  LOWORD(v244) = 0x8000;
  tagWND::RedirectedFieldfnid<unsigned short>::operator|=((char *)a1 + 87, &v244);
  v244 = 0LL;
  if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>((char *)a1 + 315, &v244) )
  {
    v244 = -1LL;
    if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>(v48, &v244) )
    {
      v51 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v51 & 0x10) != 0 )
      {
        v113 = tagWND::RedirectedFieldpExtraBytes::operator<unsigned __int64> unsigned __int64(
                 v49,
                 v51,
                 *(_QWORD *)(*((_QWORD *)a1 + 3) + 136LL));
        Win32HeapFree(v114, v114 + v113);
        LODWORD(v244) = 0;
        tagWND::RedirectedFieldpExtraBytes::operator=<int>((char *)a1 + 315, &v244);
      }
      else
      {
        v52 = tagWND::RedirectedFieldpExtraBytes::operator<unsigned __int64> unsigned __int64(v49, v51, v50);
        LODWORD(v243) = 0;
        v53 = v52;
        tagWND::RedirectedFieldpExtraBytes::operator=<int>(v54, &v243);
        if ( (*(_DWORD *)(PsGetCurrentProcess(v56, v55, v57) + 1124) & 0x40000008) == 0
          && !(unsigned int)operator&(*((unsigned int *)v7 + 122), 1LL) )
        {
          xxxClientFreeWindowClassExtraBytes((__int64)a1, v53);
        }
      }
    }
  }
  LODWORD(v243) = 0;
  tagWND::RedirectedFieldcbwndExtra<int>::operator=((char *)a1 + 177, &v243);
  v58 = (struct tagWND *)((char *)a1 + 120);
  if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120, v59, v60, v61) )
  {
    v66 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v63, v62, v64, v65);
    if ( (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(v66 + 200, v67, v68, v69) == a1 )
    {
      v73 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120, v70, v71, v72);
      v77 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v74, v73, v75, v76);
      v78 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v77 + 200));
      SafeLockWindow(v78);
      v82 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120, v79, v80, v81);
      v86 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v82 + 200, v83, v84, v85);
      v89 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 120, v87, v86, v88);
      v90 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v89 + 200));
      v236 = *(_OWORD *)LockPointer(&v237, (__int64)v90, v91);
      HMAssignmentLock(&v236, 0LL);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *((struct tagWND **)v7 + 98) )
  {
    v92 = EPOINTFIX::EPOINTFIX((struct tagTHREADINFO *)((char *)v7 + 784));
    HMAssignmentUnlock(v92);
  }
  if ( *((struct tagWND **)v7 + 179) == a1 )
  {
    v93 = EPOINTFIX::EPOINTFIX((struct tagTHREADINFO *)((char *)v7 + 1432));
    HMAssignmentUnlock(v93);
  }
  if ( *((struct tagWND **)v7 + 188) == a1 )
  {
    v94 = EPOINTFIX::EPOINTFIX((struct tagTHREADINFO *)((char *)v7 + 1504));
    HMAssignmentUnlock(v94);
  }
  v95 = tagTHREADINFO::GetQ(v7);
  if ( a1 == tagQ::GetFocusWnd(v95) )
  {
    v96 = tagTHREADINFO::GetQ(v7);
    tagQ::UnlockFocusWnd(v96);
    if ( tagTHREADINFO::GetQ(v7) == (struct tagQ *)gpqForeground )
      zzzInputFocusLostWindowEvent(a1, 10LL);
  }
  if ( a1 == *((struct tagWND **)tagTHREADINFO::GetQ(v7) + 17) )
  {
    v98 = tagTHREADINFO::GetQ(v97);
    v99 = EPOINTFIX::EPOINTFIX((struct tagQ *)((char *)v98 + 136));
    HMAssignmentUnlock(v99);
  }
  v100 = tagTHREADINFO::GetQ(v7);
  if ( a1 == tagQ::GetActiveWindow(v100) )
  {
    v101 = tagTHREADINFO::GetQ(v7);
    tagQ::SetActiveWindow(v101, 0LL);
  }
  if ( a1 == *((struct tagWND **)tagTHREADINFO::GetQ(v7) + 18) )
  {
    v104 = tagTHREADINFO::GetQ(v102);
    ClearDelegationCapture((__int64)v104);
  }
  if ( a1 == (struct tagWND *)gspwndActivate )
  {
    v105 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndActivate);
    HMAssignmentUnlock(v105);
  }
  if ( a1 == (struct tagWND *)gspwndBSDR )
  {
    v106 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndBSDR);
    HMAssignmentUnlock(v106);
  }
  v107 = *((_QWORD *)a1 + 3);
  if ( v107 )
  {
    if ( a1 == *(struct tagWND **)(v107 + 88) )
    {
      v108 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v107 + 88));
      HMAssignmentUnlock(v108);
    }
    v109 = (EPOINTFIX *)(*((_QWORD *)a1 + 3) + 96LL);
    if ( a1 == *(struct tagWND **)v109 )
    {
      v110 = EPOINTFIX::EPOINTFIX(v109);
      HMAssignmentUnlock(v110);
    }
    v111 = (struct tagWND **)*((_QWORD *)a1 + 3);
    if ( a1 == v111[24] )
    {
      NotifyShell::HitTestPartUpdate((NotifyShell *)v111, a1, 0LL, v103);
      xxxOnTrackingWindowDestroyed(v7, *((struct tagDESKTOP **)a1 + 3));
      v112 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(*((_QWORD *)a1 + 3) + 192LL));
      HMAssignmentUnlock(v112);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFF23F;
    }
  }
  if ( a1 == *((struct tagWND **)tagTHREADINFO::GetQ(v7) + 14) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
    CleanupShadow(a1);
  else
    xxxRemoveShadow((__int64)a1);
  DestroyWindowSmIcon(a1);
  v243 = 0LL;
  tagWND::RedirectedFieldhIcon<HICON__ *>::operator=((char *)a1 + 313, &v243);
  v116 = *((_QWORD *)a1 + 18);
  if ( v116 && *(_QWORD *)(v116 + 24) )
  {
    v240 = 0LL;
    v239 = 0LL;
    Prop = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL, v115);
    if ( Prop )
    {
      *(_QWORD *)&v239 = *((_QWORD *)v7 + 52);
      *((_QWORD *)v7 + 52) = &v239;
      *((_QWORD *)&v239 + 1) = Prop;
      HMLockObject(Prop);
      xxxDDETrackWindowDying(v118, Prop);
      ThreadUnlock1(v120, v119, v121);
    }
    v122 = InternalRemoveProp((__int64)a1, (unsigned __int16)atomDDEImp, 1u);
    v123 = (void *)v122;
    if ( v122 )
    {
      *(_WORD *)(v122 + 88) = 0;
      if ( !*(_WORD *)(v122 + 90) )
      {
        SeDeleteClientSecurity(v122 + 16);
        Win32FreePool(v123);
      }
    }
    InternalRemoveProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, 1u);
  }
  if ( tagWND::HasState((__int64)a1, 512) )
    PostIAMShellHookMessage(0x12u);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v244);
  HandleFullWindowDestruction(a1);
  if ( (tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x2FFF) == 0x2A0 )
  {
    v124 = safe_cast_fnid_to_PSWITCHWND(a1);
    v125 = v124;
    if ( v124 )
    {
      v243 = *(_QWORD *)(v124 + 8);
      if ( v243 )
      {
        RemoveSwitchWindowInfo(&v243);
        *(_QWORD *)(v125 + 8) = 0LL;
      }
    }
  }
  if ( a1 == (struct tagWND *)gspwndCursor )
  {
    v126 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndCursor);
    HMAssignmentUnlock(v126);
  }
  if ( a1 == (struct tagWND *)gspwndCursorNC )
  {
    v127 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndCursorNC);
    HMAssignmentUnlock(v127);
  }
  MagpDestroyLensContext(gMagnContext, v7, a1);
  DestroyWindowsTimers();
  DestroyWindowsHotKeys(a1);
  v128 = (_DWORD *)*((_QWORD *)a1 + 36);
  if ( v128 )
  {
    --*v128;
    v129 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( !*v129 )
      Win32FreePool(v129);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  v130 = (_DWORD *)*((_QWORD *)a1 + 37);
  if ( v130 )
  {
    --*v130;
    v131 = (_DWORD *)*((_QWORD *)a1 + 37);
    if ( !*v131 )
      Win32FreePool(v131);
    *((_QWORD *)a1 + 37) = 0LL;
  }
  if ( !*(&WPP_MAIN_CB.ActiveThreadCount + 1) )
    ClearSendMessages();
  CleanupWindowRedirection(a1);
  v243 = 0LL;
  if ( tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator!=((__int64)a1 + 176, &v243)
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) != 0 )
  {
    DecPaintCount((__int64)a1);
    v134 = tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator HRGN__ *((char *)a1 + 176);
    DeleteMaybeSpecialRgn(v134);
    v243 = 0LL;
    tagWND::RedirectedFieldhrgnUpdate<HRGN__ *>::operator=((char *)a1 + 176, &v243);
    ClrWF(a1, 272LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0xA) != 0 )
  {
    ClrWF(a1, 264LL);
    ClrWF(a1, 258LL);
  }
  v135 = (struct tagTHREADINFO *)((char *)v7 + 808);
  if ( *((_QWORD *)v7 + 101) )
  {
    QMsg = FindQMsg(v7, v135, 18, 1);
    if ( QMsg )
      PostQuitMessage(*(unsigned int *)(QMsg + 32));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40
    && !(unsigned __int8)SharedPointerBase<tagWND>::operator==((char *)a1 + 168, v135, v132, v133) )
  {
    LODWORD(v243) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4938LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)a1 + 168, v135) )
    {
      v140 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v137, v135, v138, v139);
      if ( UnlockWndMenu(a1) )
        DestroyMenu(v140);
    }
  }
  if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)a1 + 160, v135) )
  {
    v145 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v142, v141, v143, v144);
    if ( v145 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuSys(a1);
    }
    else if ( UnlockWndMenuSys(a1) )
    {
      DestroyMenu(v145);
    }
  }
  v146 = *((_QWORD *)a1 + 3);
  if ( v146 )
  {
    v147 = *(_QWORD *)(v146 + 56);
    if ( v147 && a1 == *(struct tagWND **)(v147 + 80) )
    {
      v148 = *(_QWORD *)(v146 + 56);
LABEL_146:
      UnlockNotifyWindow((struct tagMENU *)v148);
      goto LABEL_147;
    }
    v148 = *(_QWORD *)(v146 + 64);
    if ( v148 && a1 == *(struct tagWND **)(v148 + 80) )
      goto LABEL_146;
  }
LABEL_147:
  if ( WPP_MAIN_CB.AlignmentRequirement )
  {
    v149 = (EWNDOBJ *)InternalRemoveProp((__int64)a1, (unsigned __int16)atomWndObj, 1u);
    if ( v149 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreDeleteWnd(v149);
      --WPP_MAIN_CB.AlignmentRequirement;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v152 = (__int64 *)(gpDispInfo + 24LL);
  v153 = *(_QWORD *)(gpDispInfo + 24LL);
  if ( v153 )
  {
    while ( 1 )
    {
      v154 = *(_DWORD *)(v153 + 64);
      if ( (v154 & 0x400800) != 0 )
      {
LABEL_166:
        v160 = *(_QWORD *)v153;
        v152 = (__int64 *)v153;
        goto LABEL_167;
      }
      v155 = *(struct tagWND **)(v153 + 16);
      if ( v155 == a1 || *(struct tagWND **)(v153 + 24) == a1 || *(struct tagWND **)(v153 + 32) == a1 )
        break;
LABEL_165:
      v160 = *v152;
      if ( v153 == *v152 )
        goto LABEL_166;
LABEL_167:
      v153 = v160;
      if ( !v160 )
      {
        v58 = (struct tagWND *)((char *)a1 + 120);
        goto LABEL_169;
      }
    }
    if ( (v154 & 2) == 0 )
    {
      if ( v153 == *(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                                 (char *)v155 + 136,
                                 v155,
                                 v150,
                                 v151)
                             + 40)
        || v153 != *(_QWORD *)(v156 + 248) )
      {
        if ( !gbIgnoreStressedOutStuff
          && v153 == *(_QWORD *)(SharedPointerBase<tagSBINFO>::operator unsigned __int64(v157, v156, v158, v159) + 40) )
        {
          LODWORD(v243) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5041LL);
        }
        if ( (*(_DWORD *)(v153 + 64) & 0xC0) != 0 )
          DeleteHrgnClip(v153);
LABEL_164:
        InvalidateDCE(v153);
        goto LABEL_165;
      }
      *(_QWORD *)(v156 + 248) = 0LL;
      goto LABEL_191;
    }
    if ( (v154 & 0x1000) != 0 )
    {
      if ( *(struct tagTHREADINFO **)(v153 + 72) != v7 )
      {
LABEL_191:
        DestroyCacheDC(v152, *(_QWORD *)(v153 + 8));
        goto LABEL_165;
      }
      v187 = ReleaseCacheDC(*(_QWORD *)(v153 + 8), 0LL);
      if ( v187 == 1 )
        goto LABEL_165;
      v188 = v187 == 2;
    }
    else
    {
      v188 = (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v153 + 8), 2147483666LL, 0LL, 0LL) == 0;
    }
    if ( !v188 )
      goto LABEL_164;
    goto LABEL_191;
  }
LABEL_169:
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 == (struct tagWND *)gspwndLockUpdate )
  {
    Spb = (char *)FindSpb(a1);
    FreeSpb(Spb);
    v162 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)&gspwndLockUpdate);
    HMAssignmentUnlock(v162);
    gptiLockUpdate = 0LL;
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 16LL) < 0 )
  {
    v163 = (char *)FindSpb(a1);
    FreeSpb(v163);
  }
  if ( (tagWND::RedirectedFieldfnid<unsigned short>::operator unsigned short((char *)a1 + 87) & 0x2FFF) != 0x29D )
    tagWND::ClearClipRgnOrMaxClip(a1);
  if ( SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 152, v164, v165, v166) )
  {
    v170 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 152, v167, v168, v169);
    Win32HeapFree(*(_QWORD *)(*((_QWORD *)a1 + 3) + 136LL), v170);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=((_QWORD *)a1 + 19, 0LL);
  }
  if ( tagWND::HasState((__int64)a1, 0x10000) )
    NotifyOverlayWindow(v172, 0LL);
  if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)a1 + 184, v171) )
  {
    v176 = SharedPointerBase<tagSBINFO>::operator unsigned __int64((char *)a1 + 184, v173, v174, v175);
    Win32HeapFree(*(_QWORD *)(*((_QWORD *)a1 + 3) + 136LL), v176);
    tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(
      (char *)a1 + 184,
      0LL);
    LODWORD(v243) = 0;
    tagWND::ProtectedLargeUnicodeStringWNDstrName::RedirectedFieldLength<unsigned long>::operator=(
      (char *)a1 + 192,
      &v243);
  }
  ResetWindowTransform((__int64)a1);
  v180 = *((_QWORD *)a1 + 3);
  if ( !v180
    || a1 == (struct tagWND *)SharedPointerBase<tagSBINFO>::operator unsigned __int64(
                                *(_QWORD *)(v180 + 8) + 24LL,
                                v177,
                                v178,
                                v179) )
  {
    v189 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 104));
    v190 = UnlockPointer(v189);
    HMAssignmentUnlock(v190);
  }
  else
  {
    SharedPointerBase<tagSBINFO>::operator unsigned __int64(v182, v181, v183, v184);
    v185 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 104));
    v236 = *(_OWORD *)LockPointer(&v238, (__int64)v185, v186);
    HMAssignmentLock(&v236, 1LL);
  }
  v191 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 112));
  v192 = UnlockPointer(v191);
  HMAssignmentUnlock(v192);
  v193 = EPOINTFIX::EPOINTFIX(v58);
  v194 = UnlockPointer(v193);
  HMAssignmentUnlock(v194);
  v195 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 200));
  v196 = UnlockPointer(v195);
  HMAssignmentUnlock(v196);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v199 = *(_QWORD *)a1;
    v200 = (void *)ReferenceDwmApiPort(v198, v197);
    DwmAsyncOwnerChange(v200, v199, 0LL);
  }
  DereferenceClass(*((struct tagPROCESSINFO **)v7 + 53), (__int64)a1);
  HMMarkObjectDestroy(a1);
  v201 = _HMPheFromObject(a1);
  *(_BYTE *)(v201 + 25) |= 2u;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  v203 = (_QWORD *)ProcessWindowStation;
  if ( ProcessWindowStation )
  {
    if ( *(struct tagWND **)(ProcessWindowStation + 96) == a1 )
    {
      v204 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(ProcessWindowStation + 96));
      HMAssignmentUnlock(v204);
      v203[10] = 0LL;
    }
    if ( (struct tagWND *)v203[14] == a1 )
    {
      v205 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v203 + 14));
      HMAssignmentUnlock(v205);
    }
    if ( (struct tagWND *)v203[13] == a1 )
    {
      v206 = EPOINTFIX::EPOINTFIX((EPOINTFIX *)(v203 + 13));
      HMAssignmentUnlock(v206);
    }
  }
  if ( tagWND::HasState((__int64)a1, 0x800000) )
    _RemoveClipboardFormatListener(v208);
  if ( ThreadUnlock1(v208, v207, v209) )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 18) )
      {
        DeleteProperties(a1);
        Win32FreePool(*((void **)a1 + 18));
        *((_QWORD *)a1 + 18) = 0LL;
      }
      v210 = safe_cast_fnid_to_PMENUWND(a1);
      v211 = v210;
      if ( v210 && *(_QWORD *)(v210 + 16) )
      {
        SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v235);
        if ( (*(_DWORD *)SmartObjStackRefBase<tagPOPUPMENU>::operator->(v235) & 0x20000000) != 0 )
        {
          v213 = (_DWORD *)SmartObjStackRefBase<tagPOPUPMENU>::operator->(v235);
          *v213 &= ~0x40000000u;
        }
        else if ( (void *const)SmartObjStackRefBase<tagPOPUPMENU>::operator->(v235) == gpopupMenu )
        {
          gdwPUDFlags &= ~0x800000u;
          ClearStackReferences<tagPOPUPMENU>(gpopupMenu);
        }
        else
        {
          v212 = SmartObjStackRefBase<tagPOPUPMENU>::operator->(v235);
          FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(v212);
          *(_QWORD *)(v211 + 16) = 0LL;
        }
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v235);
      }
      v214 = (void *)*((_QWORD *)a1 + 35);
      if ( v214 )
      {
        Win32FreePool(v214);
        *((_QWORD *)a1 + 35) = 0LL;
      }
      LODWORD(v243) = 0;
      tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator=((char *)a1 + 316, &v243);
      --*((_DWORD *)v7 + 226);
      if ( !(unsigned int)Feature_Servicing_ImeRefcountingBugcheckHang__private_IsEnabledDeviceUsage(v216, v215)
        && tagWND::HasState((__int64)a1, 0x10000000) )
      {
        tagWND::RemoveState();
        --*((_DWORD *)v7 + 228);
      }
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v219 = *(_QWORD *)a1;
        v220 = (void *)ReferenceDwmApiPort(v218, v217);
        DwmAsyncChildDestroy(v220, v219);
      }
      v221 = EPOINTFIX::EPOINTFIX((struct tagWND *)((char *)a1 + 104));
      v222 = UnlockPointer(v221);
      HMAssignmentUnlock(v222);
      PushW32ThreadLock(*((_QWORD *)a1 + 3), &v241, UserDereferenceObject);
      v223 = (void *)*((_QWORD *)a1 + 3);
      if ( v223 )
        ObfReferenceObject(v223);
      tagObjLock::LockUnInitializeThreadCreator((struct tagWND *)((char *)a1 + 56));
      HMFreeObject(a1);
      PopAndFreeW32ThreadLock((__int64)&v241);
    }
    else
    {
      v243 = 0LL;
      tagWND::RedirectedFieldlpfnWndProc<__int64 (*)(tagWND *,unsigned int,unsigned __int64,__int64)>::operator=(
        (char *)a1 + 212,
        &v243);
      v226 = *((_QWORD *)a1 + 3);
      if ( v226 )
      {
        v227 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v226 + 40) + 56LL) + 16LL) + 424LL);
      }
      else
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v224);
        v227 = (__int64)CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
          v227 = 0LL;
      }
      ClassPtr = (__int64 *)GetClassPtr(*(unsigned __int16 *)(gpsi + 910LL), v227, hModuleWin, v225);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((_QWORD *)a1 + 17, *ClassPtr);
      v234 = SharedPointerBase<tagSBINFO>::operator unsigned __int64(v231, v230, v232, v233);
      ++*(_DWORD *)(v234 + 72);
      SetWF(a1, 516LL);
      ClrWF(a1, 544LL);
      ClrWF(a1, 4032LL);
      SetWF(a1, 3840LL);
      tagWND::SharedUserObjPointerFieldspmenu<tagMENU>::operator=((char *)a1 + 168);
    }
  }
  AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v244);
}
