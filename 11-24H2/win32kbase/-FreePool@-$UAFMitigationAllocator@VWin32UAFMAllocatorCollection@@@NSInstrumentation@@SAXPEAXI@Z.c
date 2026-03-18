/*
 * XREFs of ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401BF440
 * Callers:
 *     Win32UAFMFreePagedLookasideList @ 0x1401BEFA0 (Win32UAFMFreePagedLookasideList.c)
 *     Win32UAFMFreePool @ 0x1401BEFE0 (Win32UAFMFreePool.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14001C090 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401BF418 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreePool(
        ULONG_PTR a1,
        unsigned int a2)
{
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  *(_DWORD *)(a1 - 4) = 0;
  UserSessionState = W32GetUserSessionState(v3);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
    (_DWORD *)(a1 - 16));
}
