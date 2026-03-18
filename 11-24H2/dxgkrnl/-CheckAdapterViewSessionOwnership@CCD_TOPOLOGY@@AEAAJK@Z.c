/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x140345B00
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403478E4 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x140268188 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x140344CB0 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x140346FA8 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rbx
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // r8
  __int64 v6; // r14
  __int64 v7; // rdx
  SESSION_ADAPTER *SessionAdapterFromLuid; // r15
  unsigned int v9; // ebx
  unsigned int i; // edi
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v15; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v6 = 340 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionData,
                               (const struct _LUID *)(340 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)));
    if ( SessionAdapterFromLuid )
    {
      v9 = *(_DWORD *)(v7 + 84);
      for ( i = 0; v9; v9 >>= 1 )
      {
        if ( (v9 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, i) )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry5(
            2LL,
            *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6 + 4),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6),
            i,
            CurrentProcessSessionId,
            -1073741790LL);
          v15 = *((_QWORD *)this + 8);
          WdLogGlobalForLineNumber = 2218;
          *(_DWORD *)(*(_QWORD *)(v15 + 48) + v6 + 84) &= ~(1 << i);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (const struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
            i,
            -1073741790);
        }
        ++i;
      }
      return 0LL;
    }
    else
    {
      v12 = PsGetCurrentProcessSessionId();
      WdLogSingleEntry4(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v2 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v2),
        v12,
        -1073741790LL);
      result = 3221225506LL;
      WdLogGlobalForLineNumber = 2195;
    }
  }
  else
  {
    v13 = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, v13, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 2180;
  }
  return result;
}
