/*
 * XREFs of ??1SESSION_VIEW@@QEAA@XZ @ 0x1404015BC
 * Callers:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x140058CD4 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall SESSION_VIEW::~SESSION_VIEW(SESSION_VIEW *this)
{
  if ( *((_DWORD *)this + 10) || *((SESSION_VIEW **)this + 6) != (SESSION_VIEW *)((char *)this + 48) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1978;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(m_NumDisplaySources == 0) && (IsListEmpty(&m_DisplaySourceListHead))",
      1978LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
