/*
 * XREFs of FreeQueue @ 0x1C0038668
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0038040 (UserDeleteW32Thread.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B1DA0 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UnlockQueue @ 0x1C012D500 (UnlockQueue.c)
 *     zzzDestroyQueue @ 0x1C012DDA0 (zzzDestroyQueue.c)
 * Callees:
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C00946EC (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 */

void __fastcall FreeQueue(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v6, *(void **)(v5 + 16864), a1);
}
