/*
 * XREFs of ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x140077EEC
 * Callers:
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1400780A8 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

void __fastcall DXGPROTECTEDSESSION::~DXGPROTECTEDSESSION(DXGPROTECTEDSESSION *this)
{
  DXGGLOBAL *Global; // rax
  void *v3; // rcx
  void *v4; // rcx

  if ( *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 44;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"0 == m_cReference", 44LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 19) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 45;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_hDriverHandle", 45LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 6) != 3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 46;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"EXECUTION_STOPPED == m_ExecutionState",
      46LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 144) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 47;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"false == m_bDelaySignal", 47LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 15) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 15), 0, 0);
    *((_QWORD *)this + 15) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGPROTECTEDSESSION *)((char *)this + 32));
  *((_QWORD *)this + 2) = 0LL;
}
