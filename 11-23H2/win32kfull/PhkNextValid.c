/*
 * XREFs of PhkNextValid @ 0x1C003CEB4
 * Callers:
 *     fnHkINLPCWPEXSTRUCT @ 0x1C000A110 (fnHkINLPCWPEXSTRUCT.c)
 *     xxxCallNextHookEx @ 0x1C000A1E4 (xxxCallNextHookEx.c)
 *     zzzSetDesktop @ 0x1C002B850 (zzzSetDesktop.c)
 *     zzzCancelJournalling @ 0x1C003C590 (zzzCancelJournalling.c)
 *     PhkFirstGlobalValid @ 0x1C003C7B4 (PhkFirstGlobalValid.c)
 *     PhkFirstValid @ 0x1C003CE54 (PhkFirstValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C003D1C4 (zzzUnhookWindowsHookEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0117C14 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     GetJournallingQueue @ 0x1C0117E60 (GetJournallingQueue.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011FE30 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C0156F10 (fnHkINLPCWPRETEXSTRUCT.c)
 *     zzzUnhookWindowsHook @ 0x1C01BB48C (zzzUnhookWindowsHook.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C0117EDC (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 */

__int64 __fastcall PhkNextValid(__int64 a1)
{
  LockRefactorStagingAssertAny(gDomainHookLock);
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      a1 = *(_QWORD *)(a1 + 40);
      goto LABEL_4;
    }
    if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
      return 0LL;
    a1 = *(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 8LL * *(int *)(a1 + 48) + 48);
    if ( !a1 )
      return a1;
LABEL_4:
    if ( (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
}
