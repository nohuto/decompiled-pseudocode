/*
 * XREFs of ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14008495C
 * Callers:
 *     FreeHook @ 0x1400837F0 (FreeHook.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140084510 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400845B0 (-FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     DestroyEventHook @ 0x1400849F0 (DestroyEventHook.c)
 *     _SetWinEventHook @ 0x140084C1C (_SetWinEventHook.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1400857EC (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x140085A80 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     _FreeTouchInputInfo @ 0x140085CA0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x140266FF0 (_FreeGestureInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(
        __int64 a1)
{
  unsigned int DLT; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  DLT = DLT_HANDLEMANAGER::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 1;
  UserSessionState = W32GetUserSessionState(v4, v3);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42424;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  return a1;
}
