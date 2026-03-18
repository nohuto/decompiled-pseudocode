/*
 * XREFs of ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x140092EAC
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14009194C (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x140091D68 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxAddShadow @ 0x14015CF84 (xxxAddShadow.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D226C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14009377C (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 */

__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  unsigned int v5; // ebx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70856);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
  v5 = zzzSetWindowCompositionCloakWorker(a1, v2);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v7);
  zzzEndDeferWinEventNotify();
  return v5;
}
