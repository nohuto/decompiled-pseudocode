/*
 * XREFs of ?Close@DXGPROTECTEDSESSION@@QEAA_NI@Z @ 0x1401844BC
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1401843BC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGPROTECTEDSESSION::Close(DXGPROTECTEDSESSION *this, unsigned int a2)
{
  DXGPROCESS *Current; // rax

  if ( a2 )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGPROCESS::FreeResourceHandleNoRefSafe(Current, a2);
  }
  if ( !*((_DWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1172;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 != m_cReference", 1172LL, 0LL, 0LL, 0LL, 0LL);
  }
  return _InterlockedAdd((volatile signed __int32 *)this + 20, 0xFFFFFFFF) == 0;
}
