/*
 * XREFs of ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x140264888
 * Callers:
 *     QueryAutoRotationState @ 0x140264860 (QueryAutoRotationState.c)
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402705AC (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?RotationLockTogglePressed@CRotationMgr@@UEAAXXZ @ 0x140270660 (-RotationLockTogglePressed@CRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRotationMgr::QueryAutoRotationState(_DWORD *a1, __int64 a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // r8d
  __int64 result; // rax

  if ( a1[7] )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 24LL))(a1);
  v3 = IsRemoteConnection((__int64)a1, a2) ? 4 : 0;
  v4 = v3 | 1;
  if ( a1[2] )
    v4 = v3;
  if ( a1[9] || a1[8] )
    v4 |= 8u;
  v5 = v4 | 0x10;
  if ( a1[4] )
    v5 = v4;
  v6 = v5 | 0x40;
  if ( !a1[5] )
    v6 = v5;
  v7 = v6 | 0x80;
  if ( !a1[6] )
    v7 = v6;
  result = v7 | 0x20;
  if ( !a1[7] )
    return v7;
  return result;
}
