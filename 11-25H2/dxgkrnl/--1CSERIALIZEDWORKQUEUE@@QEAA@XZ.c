/*
 * XREFs of ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1400726D8
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401CD6B4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1401F32E4 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE(CSERIALIZEDWORKQUEUE *this)
{
  if ( *((_BYTE *)this + 64) || *((CSERIALIZEDWORKQUEUE **)this + 6) != (CSERIALIZEDWORKQUEUE *)((char *)this + 48) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 812;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!m_WorkItemActive && IsListEmpty(&m_WorkItemList)",
      812LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
