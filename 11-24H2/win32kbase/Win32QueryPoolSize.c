/*
 * XREFs of Win32QueryPoolSize @ 0x1401BF9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z @ 0x1401D0858 (-QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z.c)
 */

unsigned __int64 __fastcall Win32QueryPoolSize(void *a1, unsigned int a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return NSInstrumentation::CLeakTrackingAllocator::QueryPoolSize(
           (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
           a1,
           a2);
}
