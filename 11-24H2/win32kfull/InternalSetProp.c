/*
 * XREFs of InternalSetProp @ 0x140031458
 * Callers:
 *     SetRedrawProp @ 0x140031254 (SetRedrawProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400312D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14003140C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x14003A1C4 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     NtUserShutdownBlockReasonCreate @ 0x14012B7F0 (NtUserShutdownBlockReasonCreate.c)
 *     FeedbackSetWindowSetting @ 0x1401BD3B8 (FeedbackSetWindowSetting.c)
 *     SetDisplayAffinity @ 0x1401C14B8 (SetDisplayAffinity.c)
 *     _SetTargetingWindowValue @ 0x1401D70C8 (_SetTargetingWindowValue.c)
 *     NtUserfnDDEINIT @ 0x1401D9EC0 (NtUserfnDDEINIT.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x140221DA4 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     _SetBrokeredForeground @ 0x1402290C8 (_SetBrokeredForeground.c)
 *     NtUserSetProp @ 0x140246760 (NtUserSetProp.c)
 *     NtUserSetProp2 @ 0x140246810 (NtUserSetProp2.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     FeedbackClearWindowSetting @ 0x140263F64 (FeedbackClearWindowSetting.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     _SetTouchWindowFlags @ 0x140269E44 (_SetTouchWindowFlags.c)
 *     UserAssociateHwnd @ 0x1402859A0 (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x14029C660 (NtUserSetAppImeLevel.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402ACF68 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1402AF780 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402AFE6C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 * Callees:
 *     UserGetGlobalAtomTableOfWindow @ 0x1400312A8 (UserGetGlobalAtomTableOfWindow.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1400638D0 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140083708 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x140085600 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     SetSharedPropForFilteredProcesses @ 0x1402BF27C (SetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 GlobalAtomTableOfWindow; // rax
  unsigned int v12; // esi
  __int64 v13; // rax
  int v14; // ebx
  _KAPC_STATE ApcState; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v17[48]; // [rsp+50h] [rbp-78h] BYREF

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    v17,
    *(_QWORD *)(a1 + 144));
  UserSessionState = W32GetUserSessionState(v9, v8);
  if ( !*(_WORD *)(UserSessionState + 69372) )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
      *(_WORD *)(UserSessionState + 69372) = UserFindAtomFromAtomTable(
                                               GlobalAtomTableOfWindow,
                                               L"Microsoft.Windows.WindowFactory.ViewId");
  }
  v12 = 1;
  if ( (a4 & 1) != 0 )
    goto LABEL_10;
  LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 && (_WORD)a2 == *(_WORD *)(UserSessionState + 69372) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
LABEL_10:
    v12 = RealInternalSetProp(*(_QWORD *)(a1 + 144), a2, a3, a4);
    goto LABEL_11;
  }
  if ( (*(_BYTE *)(a1 + 384) & 1) == 0 )
    goto LABEL_10;
  v13 = *(_QWORD *)(a1 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**(PRKPROCESS **)(v13 + 464), &ApcState);
  v14 = SetSharedPropForFilteredProcesses(a1, a2, a3);
  KeUnstackDetachProcess(&ApcState);
  if ( v14 != 1 )
    goto LABEL_10;
LABEL_11:
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v17);
  return v12;
}
