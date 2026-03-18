/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1402DA6EC
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1403EF9A0 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1402DA8D0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v4; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct _KPROCESS *v6; // rbx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r14
  int v10; // eax
  unsigned int v11; // ebx
  bool v12; // di
  unsigned int i; // ebx
  int v14; // eax
  unsigned int v15; // esi
  bool v16[8]; // [rsp+20h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-48h] BYREF
  char v18; // [rsp+58h] [rbp-18h]

  v18 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 3761;
LABEL_7:
    if ( v18 )
      KeUnstackDetachProcess(&ApcState);
    return 3221225485LL;
  }
  v6 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v4) != v6 )
  {
    KeStackAttachProcess(v6, &ApcState);
    v18 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v7);
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3778;
    goto LABEL_7;
  }
  v10 = DxgkAcquireSessionModeChangeLock(1);
  v11 = v10;
  v12 = v10 >= 0;
  v16[0] = v10 >= 0;
  if ( v10 >= 0 )
  {
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 8) + 40LL); ++i )
    {
      v14 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, i);
      v15 = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry2(2LL, i, v14);
        WdLogGlobalForLineNumber = 3810;
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v16);
        CPROCESSATTACHHELPER::Detach(&ApcState);
        return v15;
      }
    }
    if ( v12 )
      DxgkReleaseSessionModeChangeLock();
    if ( v18 )
      KeUnstackDetachProcess(&ApcState);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 3798;
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v16);
    CPROCESSATTACHHELPER::Detach(&ApcState);
    return v11;
  }
}
