/*
 * XREFs of ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9A64
 * Callers:
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1400C9744 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEA_KPEAU?$AlpcReply@$07@1@@Z @ 0x1400C9970 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEA_KPEAU-$AlpcRepl.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x14014EDA0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1401A8CE4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

void __fastcall LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired(LeaveEnterUserCritIfAcquired *this)
{
  unsigned int v1; // edi
  _QWORD *UserSessionState; // rbx
  __int64 v3; // rax

  if ( *(_DWORD *)this )
  {
    v1 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)this == 1 )
    {
      EnterSharedCrit(0, v1);
    }
    else
    {
      UserSessionState = (_QWORD *)W32GetUserSessionState(this);
      v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
             UserSessionState,
             0LL,
             v1,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      UserSessionState[3] = v3;
      if ( v3 )
      {
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
      }
    }
  }
}
