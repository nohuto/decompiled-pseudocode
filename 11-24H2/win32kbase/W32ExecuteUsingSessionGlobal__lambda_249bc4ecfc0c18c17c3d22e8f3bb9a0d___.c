/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_249bc4ecfc0c18c17c3d22e8f3bb9a0d___ @ 0x1401BF054
 * Callers:
 *     Win32FreePoolWithSessionHint @ 0x1401BECE0 (Win32FreePoolWithSessionHint.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14001C090 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_249bc4ecfc0c18c17c3d22e8f3bb9a0d_(
        unsigned int a1,
        _DWORD ***a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v7; // rdi
  __int64 UserSessionState; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    UserSessionState = W32GetUserSessionState(v4);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
      **a2);
    return 0LL;
  }
  else
  {
    v10 = 0LL;
    v5 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, &v10);
    v7 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v5 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v5 >= 0 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)(v10 + 72288),
          **a2);
        v5 = 0;
        PsReleaseProcessExitSynchronization(v7);
      }
      ObfDereferenceObjectWithTag(v7, 0x47727355u);
    }
    return (unsigned int)v5;
  }
}
