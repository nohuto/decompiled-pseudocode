/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x14031F83C
 * Callers:
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x140198B48 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x14019B480 (-IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     DxgkSessionConnected @ 0x14031F330 (DxgkSessionConnected.c)
 *     DxgkSessionDisconnected @ 0x14031F4E0 (DxgkSessionDisconnected.c)
 *     DxgkSessionReconnected @ 0x14031F680 (DxgkSessionReconnected.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 DxgkIncreaseSessionAdapterUniqueness()
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v3; // eax
  volatile signed __int32 *v5; // rax

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v5 = (volatile signed __int32 *)*((_QWORD *)SessionData + 2317);
    if ( v5 )
      _InterlockedIncrement(v5);
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 1110;
    v3 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v3,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
