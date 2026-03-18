/*
 * XREFs of ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9AEC
 * Callers:
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1400C9744 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEA_KPEAU?$AlpcReply@$07@1@@Z @ 0x1400C9970 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEA_KPEAU-$AlpcRepl.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1401A8CE4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

LeaveEnterUserCritIfAcquired *__fastcall LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired(
        LeaveEnterUserCritIfAcquired *this)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  bool v4; // zf
  int v5; // edx

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v4 = ((*(_DWORD *)(CurrentThreadWin32Thread + 24) >> 2) & 3) == 0;
  v5 = (*(_DWORD *)(CurrentThreadWin32Thread + 24) >> 2) & 3;
  *((_DWORD *)this + 1) = 1;
  *(_DWORD *)this = v5;
  if ( !v4 )
  {
    *((_DWORD *)this + 1) = *((_BYTE *)PtiCurrent(v3) + 1708) != 1;
    UserSessionSwitchLeaveCritWithNonPaged();
  }
  return this;
}
