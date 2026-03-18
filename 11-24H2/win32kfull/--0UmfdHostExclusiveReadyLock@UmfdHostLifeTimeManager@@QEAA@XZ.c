/*
 * XREFs of ??0UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x140268618
 * Callers:
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x14025E194 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     <none>
 */

UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *__fastcall UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock(
        UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *this,
        __int64 a2)
{
  __int64 v3; // rcx
  bool v4; // zf
  struct W32_PUSH_LOCK *v5; // rcx

  v3 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  v4 = v3 == -24256;
  v5 = (struct W32_PUSH_LOCK *)(v3 + 24256);
  *(_QWORD *)this = v5;
  if ( !v4 )
    GreAcquirePushLockExclusive(v5);
  return this;
}
