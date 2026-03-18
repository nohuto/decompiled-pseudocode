/*
 * XREFs of ?Destroy@ScanLookAsideList@@QEAAXXZ @ 0x14019DDD0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14008A594 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall ScanLookAsideList::Destroy(char **this)
{
  char *v1; // rdi
  __int64 UserSessionState; // rax

  v1 = *this;
  if ( *this )
  {
    UserSessionState = W32GetUserSessionState(this);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
      v1);
    *this = 0LL;
  }
}
