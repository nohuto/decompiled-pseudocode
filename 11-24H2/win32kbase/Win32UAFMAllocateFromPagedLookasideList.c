/*
 * XREFs of Win32UAFMAllocateFromPagedLookasideList @ 0x1401BEF40
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x14003FBE0 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1401BF47C (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

_QWORD *__fastcall Win32UAFMAllocateFromPagedLookasideList(char **a1, _DWORD *a2)
{
  char *v2; // rbx
  __int64 UserSessionState; // rax
  _QWORD *v5; // rbx
  _QWORD *result; // rax
  int Cookie; // eax

  v2 = *a1;
  UserSessionState = W32GetUserSessionState(a1);
  v5 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
         (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
         v2);
  result = 0LL;
  if ( v5 )
  {
    Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
    *((_DWORD *)v5 + 3) = Cookie;
    *a2 = Cookie - 1;
    return v5 + 2;
  }
  return result;
}
