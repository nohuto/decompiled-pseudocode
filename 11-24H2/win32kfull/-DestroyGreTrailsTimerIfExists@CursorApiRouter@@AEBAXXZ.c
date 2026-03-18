/*
 * XREFs of ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x1402D9D08
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140093C68 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?SetMouseTrails@CursorApiRouter@@QEBAXI@Z @ 0x1402DAEC8 (-SetMouseTrails@CursorApiRouter@@QEBAXI@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??0LeaveEnterCritShared@@QEAA@XZ @ 0x140290A00 (--0LeaveEnterCritShared@@QEAA@XZ.c)
 *     _lambda_49ba710cdad7805a04ef9893981131b8_::operator() @ 0x1402D9C6C (_lambda_49ba710cdad7805a04ef9893981131b8_--operator().c)
 */

void __fastcall CursorApiRouter::DestroyGreTrailsTimerIfExists(CursorApiRouter *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CursorApiRouter *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)this, a2, a3) )
  {
    lambda_49ba710cdad7805a04ef9893981131b8_::operator()(v4, v3);
  }
  else
  {
    LeaveEnterCritShared::LeaveEnterCritShared((LeaveEnterCritShared *)&v8, v3);
    EnterCrit(1LL, 0LL);
    lambda_49ba710cdad7805a04ef9893981131b8_::operator()(v6, v5);
    UserSessionSwitchLeaveCrit(v7);
    EnterSharedCrit(0LL, (unsigned int)v8);
  }
}
