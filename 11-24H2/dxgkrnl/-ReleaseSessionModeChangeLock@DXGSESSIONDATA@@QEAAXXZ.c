/*
 * XREFs of ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x140039140
 * Callers:
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1403C2FA8 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionModeChangeLock(DXGSESSIONDATA *this)
{
  struct _KTHREAD *v1; // rdx
  char *v2; // rcx

  v1 = (struct _KTHREAD *)*((_QWORD *)this + 2320);
  v2 = (char *)this + 18552;
  if ( v1 == KeGetCurrentThread() )
  {
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)v2 + 4);
    ExReleasePushLockSharedEx(v2, 0LL);
  }
  KeLeaveCriticalRegion();
}
