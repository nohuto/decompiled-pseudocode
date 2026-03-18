/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1403A1398
 * Callers:
 *     OutputDuplProcessTerminateForSession @ 0x1403A12E0 (OutputDuplProcessTerminateForSession.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(OUTPUTDUPL_SESSION_MGR *this, struct _EPROCESS *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rdi
  unsigned int i; // eax
  __int64 v7; // rbx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = *((_DWORD *)this + 1);
  v5 = **((_QWORD **)this + 7);
  for ( i = 0; i < v4; ++i )
  {
    v7 = 32LL * i;
    if ( a2 == *(struct _EPROCESS **)(v7 + v5 + 8) )
    {
      if ( *(_DWORD *)(v7 + v5) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4379;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pProcesses[i].RefCount == 0",
          4379LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_QWORD *)(v7 + v5 + 8) = 0LL;
      break;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
}
