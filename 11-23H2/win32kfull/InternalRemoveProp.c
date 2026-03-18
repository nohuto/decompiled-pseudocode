/*
 * XREFs of InternalRemoveProp @ 0x1C0026C40
 * Callers:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     NtUserModifyWindowTouchCapability @ 0x1C0016FB0 (NtUserModifyWindowTouchCapability.c)
 *     _SetTouchWindowFlags @ 0x1C0017050 (_SetTouchWindowFlags.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0026BF4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C003B0B0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C003BA60 (NtUserRegisterTouchHitTestingWindow.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C005BDFC (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     NtUserShutdownReasonDestroy @ 0x1C009B7E0 (NtUserShutdownReasonDestroy.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00B51AC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     UserAssociateHwnd @ 0x1C01BD530 (UserAssociateHwnd.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01CB4B0 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3794 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3C74 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3EF8 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4878 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4B48 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F9418 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     UserRemoveWindowedSwapChain @ 0x1C021BA50 (UserRemoveWindowedSwapChain.c)
 *     SetDisplayAffinity @ 0x1C022C52C (SetDisplayAffinity.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C003C1E4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C01231D8 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalRemoveProp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  _BYTE v8[16]; // [rsp+20h] [rbp-58h] BYREF
  tagObjLock *v9; // [rsp+30h] [rbp-48h]
  char v10; // [rsp+40h] [rbp-38h]
  char v11; // [rsp+48h] [rbp-30h]

  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    v8,
    *(_QWORD *)(a1 + 144));
  if ( (_WORD)a2 == word_1C035E338 )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  }
  v6 = RealInternalRemoveProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( v11 && v10 && v9 )
    tagObjLock::UnLockExclusive(v9);
  return v6;
}
