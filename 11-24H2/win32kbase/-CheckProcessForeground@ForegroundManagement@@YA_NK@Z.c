/*
 * XREFs of ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1401A6B80
 * Callers:
 *     NtUserConfigureActivationObject @ 0x14013A410 (NtUserConfigureActivationObject.c)
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall ForegroundManagement::CheckProcessForeground(ForegroundManagement *this)
{
  int v1; // esi
  __int64 v2; // rdi
  CPushLock *v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // edi

  v1 = (int)this;
  v2 = *(_QWORD *)(W32GetUserSessionState(this) + 18920);
  v3 = (CPushLock *)(v2 + 16);
  RIMLockShared(v2 + 16);
  v4 = *(_QWORD *)(v2 + 32);
  if ( v4 )
    v5 = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v4 + 24)) & 0xFFFFFFFC;
  else
    v5 = 0;
  CPushLock::ReleaseLock(v3);
  return v1 == v5;
}
