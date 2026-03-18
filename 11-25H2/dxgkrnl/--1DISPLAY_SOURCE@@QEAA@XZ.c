/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1401948C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *((_QWORD *)this + 100) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4339;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_PristineCursor.pPixels == NULL",
      4339LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 106) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4340;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SavedCursor.pPixels == NULL", 4340LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 111) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4341;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_ClippedCursor.pPixels == NULL",
      4341LL,
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
  DXGFASTMUTEX::~DXGFASTMUTEX((DISPLAY_SOURCE *)((char *)this + 3768));
}
