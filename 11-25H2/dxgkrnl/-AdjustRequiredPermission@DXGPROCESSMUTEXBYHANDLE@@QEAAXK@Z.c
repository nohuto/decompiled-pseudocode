/*
 * XREFs of ?AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z @ 0x14006AC78
 * Callers:
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14030A210 (DxgkQueryVidPnExclusiveOwnership.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::AdjustRequiredPermission(DXGPROCESSMUTEXBYHANDLE *this)
{
  if ( *((_BYTE *)this + 28) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1863;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_Acquired == FALSE", 1863LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)this + 6) = 1024;
}
