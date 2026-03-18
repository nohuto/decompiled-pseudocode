/*
 * XREFs of ?Close@DXGPROTECTEDSESSION@@QEAA_NI@Z @ 0x14018680C
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x14018670C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGPROTECTEDSESSION::Close(DXGPROTECTEDSESSION *this, unsigned int a2)
{
  DXGPROCESS *Current; // rax

  if ( a2 )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGPROCESS::FreeHandleSafe(Current, a2);
  }
  if ( !*((_DWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1172;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"0 != m_cReference", 1172LL, 0LL, 0LL, 0LL, 0LL);
  }
  return _InterlockedAdd((volatile signed __int32 *)this + 20, 0xFFFFFFFF) == 0;
}
