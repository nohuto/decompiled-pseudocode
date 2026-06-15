/*
 * XREFs of ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180071860
 * Callers:
 *     AudioServerGetAllVolumes @ 0x1800716B0 (AudioServerGetAllVolumes.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAllStreamVolumes@CAudioStream@@QEAAJIPEAM@Z @ 0x180071948 (-GetAllStreamVolumes@CAudioStream@@QEAAJIPEAM@Z.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetAllVolumes(struct _RTL_CRITICAL_SECTION *this, unsigned int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  CAudioStream *OwningThread; // rcx
  int AllStreamVolumes; // ebx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids, this);
  }
  v6 = this + 5;
  EnterCriticalSection(this + 5);
  OwningThread = (CAudioStream *)this[4].OwningThread;
  if ( OwningThread && LODWORD(this[4].DebugInfo) )
  {
    AllStreamVolumes = CAudioStream::GetAllStreamVolumes(OwningThread, a2, a3);
    if ( AllStreamVolumes >= 0 )
      goto LABEL_6;
  }
  else
  {
    AllStreamVolumes = -2004287487;
  }
  AudSrvTraceLoggingErrorHelper("CVADServer::GetAllVolumes", 2455, AllStreamVolumes);
LABEL_6:
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)AllStreamVolumes;
}
