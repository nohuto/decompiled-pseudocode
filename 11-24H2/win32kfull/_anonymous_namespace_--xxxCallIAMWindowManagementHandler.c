/*
 * XREFs of _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14014873C
 * Callers:
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014A0D8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x140187A98 (-xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1402C1964 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1402C1B90 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x14014893C (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402C0A44 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

char __fastcall anonymous_namespace_::xxxCallIAMWindowManagementHandler(struct tagDRAWITEMSTRUCT *a1, unsigned int a2)
{
  __int64 v4; // rax
  struct tagTHREADINFO **v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // bl
  struct tagTHREADINFO *v9; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF

  v4 = anonymous_namespace_::ResolveWindowManagementTargetWindow(a2);
  v5 = (struct tagTHREADINFO **)v4;
  if ( v4 )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v4);
    v12 = 0LL;
    if ( !xxxSendTransformableMessageTimeout(v5, 833LL, 0LL, a1, 2u, 0x7D0u, (unsigned __int64 *)&v12, 1, 1) && !a2 )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
    v8 = v12 == 1;
    v9 = PtiCurrent(v7, v6);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v9, BugCheckParameter3);
    LOBYTE(v4) = v8;
  }
  return v4;
}
