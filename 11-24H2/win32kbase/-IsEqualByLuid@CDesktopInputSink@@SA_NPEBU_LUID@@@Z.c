/*
 * XREFs of ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x14020FF28
 * Callers:
 *     NtUserAddVisualIdentifier @ 0x1401B9580 (NtUserAddVisualIdentifier.c)
 *     NtUserRemoveVisualIdentifier @ 0x1401BCD30 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CDesktopInputSink::IsEqualByLuid(const struct _LUID *a1)
{
  CPushLock *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx

  v2 = *(CPushLock **)(W32GetUserSessionState(a1) + 19184);
  RIMLockShared((__int64)v2);
  v4 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3) + 19184) + 24LL);
  CPushLock::ReleaseLock(v2);
  return v4 == *a1;
}
