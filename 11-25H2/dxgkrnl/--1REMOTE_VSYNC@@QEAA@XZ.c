/*
 * XREFs of ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1401EE074
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401CD6B4 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall REMOTE_VSYNC::~REMOTE_VSYNC(REMOTE_VSYNC *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( *((_QWORD *)this + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 34;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pEmulation == NULL", 34LL, 0LL, 0LL, 0LL, 0LL);
  }
}
