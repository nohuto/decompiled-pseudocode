/*
 * XREFs of PhkFirstGlobalValid @ 0x1C003C7B4
 * Callers:
 *     zzzCancelJournalling @ 0x1C003C590 (zzzCancelJournalling.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C003CC84 (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     zzzUnhookWindowsHookEx @ 0x1C003D1C4 (zzzUnhookWindowsHookEx.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BAF2C (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01BB354 (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C003CEB4 (PhkNextValid.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C0117EDC (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = a2;
  LockRefactorStagingAssertAny(gDomainHookLock);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v3 + 48);
  if ( v4 && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4);
  return v4;
}
