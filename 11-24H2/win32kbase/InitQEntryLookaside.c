/*
 * XREFs of InitQEntryLookaside @ 0x1402E542C
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140079318 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

__int64 __fastcall InitQEntryLookaside(__int64 a1)
{
  __int64 UserSessionState; // rax
  _BYTE *PagedLookasideList; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(UserSessionState + 72288),
                         0xA8uLL,
                         0x616C7355u,
                         0x6D717355u,
                         0x10u);
  *(_QWORD *)(W32GetUserSessionState(v3) + 16872) = PagedLookasideList;
  if ( !*(_QWORD *)(W32GetUserSessionState(v4) + 16872) )
    return 3221225495LL;
  v6 = W32GetUserSessionState(v5);
  v7 = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
         (NSInstrumentation::CPointerHashTable **)(v6 + 72288),
         0x230uLL,
         0x616C7355u,
         0x75717355u,
         0x10u);
  *(_QWORD *)(W32GetUserSessionState(v8) + 16864) = v7;
  return *(_QWORD *)(W32GetUserSessionState(v9) + 16864) == 0LL ? 0xC0000017 : 0;
}
