/*
 * XREFs of ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1400D9E04
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188294 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14020DD9C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400D9E50 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

bool __fastcall CInertiaManager::QueryInertiaStatus(CInertiaManager *this)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(this);
  return CInertiaManager::QueryInertia(this, *(_QWORD *)(UserSessionState + 19240), 15LL) != 0;
}
