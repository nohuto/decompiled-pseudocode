/*
 * XREFs of PhkFirstValid @ 0x1C003CE54
 * Callers:
 *     xxxCallMouseHook @ 0x1C000E564 (xxxCallMouseHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C003CC84 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     EditionKeyEventLLHook @ 0x1C003CDC0 (EditionKeyEventLLHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014EA9E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionLLMouseButtonHook @ 0x1C01ABA90 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1C01ABC70 (EditionLLMouseWheelHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01BB48C (zzzUnhookWindowsHook.c)
 *     xxxPointerCallHook @ 0x1C01C4580 (xxxPointerCallHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C003CEB4 (PhkNextValid.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C0117EDC (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = a2;
  LockRefactorStagingAssertAny(gDomainHookLock);
  v4 = *(_QWORD *)(a1 + 8 * v3 + 928);
  if ( (v4 || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v3 + 48)) != 0) && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4);
  return v4;
}
