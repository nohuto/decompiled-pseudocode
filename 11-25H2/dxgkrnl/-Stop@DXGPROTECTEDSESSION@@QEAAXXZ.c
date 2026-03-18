/*
 * XREFs of ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401EAC50
 * Callers:
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x140198C50 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401EA414 (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x140077638 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 *     ?DestroyCoreState@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1401EA37C (-DestroyCoreState@DXGPROTECTEDSESSION@@QEAAJXZ.c)
 */

void __fastcall DXGPROTECTEDSESSION::Stop(DXGPROTECTEDSESSION *this)
{
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1193;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsCoreResourceExclusiveOwner()",
      1193LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPROTECTEDSESSION::DestroyCoreState(this);
  *((_DWORD *)this + 6) = 3;
  DXGPROTECTEDSESSION::SetSessionStatus(this, DXGK_PROTECTED_SESSION_STATUS_INVALID);
}
