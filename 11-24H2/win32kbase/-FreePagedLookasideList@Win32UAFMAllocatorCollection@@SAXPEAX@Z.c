/*
 * XREFs of ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x14008A560
 * Callers:
 *     Win32UAFMFreePagedLookasideList @ 0x1401BEFA0 (Win32UAFMFreePagedLookasideList.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401BF24C (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 * Callees:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x14008A594 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall Win32UAFMAllocatorCollection::FreePagedLookasideList(void *a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
    (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
    a1);
}
