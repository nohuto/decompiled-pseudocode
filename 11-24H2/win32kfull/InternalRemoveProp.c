/*
 * XREFs of InternalRemoveProp @ 0x140031360
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400312D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1400315C4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x14003A1C4 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     NtUserShutdownBlockReasonCreate @ 0x14012B7F0 (NtUserShutdownBlockReasonCreate.c)
 *     UserRemoveWindowedSwapChain @ 0x140169910 (UserRemoveWindowedSwapChain.c)
 *     ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x14017CDB0 (-RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     SetDisplayAffinity @ 0x1401C14B8 (SetDisplayAffinity.c)
 *     _SetTargetingWindowValue @ 0x1401D70C8 (_SetTargetingWindowValue.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAX@Z @ 0x1401FB400 (-DDEImpDecRefInitWorker@@YAXPEAX@Z.c)
 *     NtUserModifyWindowTouchCapability @ 0x1401FC410 (NtUserModifyWindowTouchCapability.c)
 *     NtUserShutdownReasonDestroy @ 0x14020BE60 (NtUserShutdownReasonDestroy.c)
 *     NtUserRemoveProp @ 0x140244FE0 (NtUserRemoveProp.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     _SetTouchWindowFlags @ 0x140269E44 (_SetTouchWindowFlags.c)
 *     ?RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x14026BFC8 (-RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     UserAssociateHwnd @ 0x1402859A0 (UserAssociateHwnd.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402AFE6C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1402C3C60 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1400638D0 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140083708 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x140085600 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InternalRemoveProp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _BYTE v10[48]; // [rsp+20h] [rbp-58h] BYREF

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    v10,
    *(_QWORD *)(a1 + 144));
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 && (_WORD)a2 == *(_WORD *)(W32GetUserSessionState(v7, v6) + 69372) )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  }
  v8 = RealInternalRemoveProp(*(_QWORD *)(a1 + 144), a2, a3);
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v10);
  return v8;
}
