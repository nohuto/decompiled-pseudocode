/*
 * XREFs of InitSmartObjectRefLookaside @ 0x1400792B0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140079318 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

__int64 __fastcall InitSmartObjectRefLookaside(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v3; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  result = (__int64)NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                      (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
                      0x10uLL,
                      0x616C7355u,
                      0x6C6F7355u,
                      0xFFFEu);
  if ( result )
  {
    *(_QWORD *)(W32GetUserSessionState(v3) + 42624) = result;
    return 1LL;
  }
  return result;
}
