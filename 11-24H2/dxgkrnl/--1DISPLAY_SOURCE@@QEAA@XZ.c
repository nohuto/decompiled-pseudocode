/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x140196C40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *((_QWORD *)this + 100) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4337;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_PristineCursor.pPixels == NULL",
      4337LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 106) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4338;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_SavedCursor.pPixels == NULL",
      4338LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 111) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4339;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_ClippedCursor.pPixels == NULL",
      4339LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = (void *)*((_QWORD *)this + 113);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 114);
  if ( v3 )
    ObfDereferenceObject(v3);
  DXGFASTMUTEX::~DXGFASTMUTEX((DISPLAY_SOURCE *)((char *)this + 3808));
}
