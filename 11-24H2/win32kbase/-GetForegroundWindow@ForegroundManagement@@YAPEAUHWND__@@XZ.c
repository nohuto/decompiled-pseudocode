/*
 * XREFs of ?GetForegroundWindow@ForegroundManagement@@YAPEAUHWND__@@XZ @ 0x1401A6CF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall ForegroundManagement::GetForegroundWindow(ForegroundManagement *this)
{
  __int64 v1; // rdi
  CPushLock *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)(W32GetUserSessionState(this) + 18920);
  v2 = (CPushLock *)(v1 + 16);
  RIMLockShared(v1 + 16);
  v3 = *(_QWORD *)(v1 + 32);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 72);
  CPushLock::ReleaseLock(v2);
  return v4;
}
