/*
 * XREFs of Win32UAFMFreePagedLookasideList @ 0x1401BEFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x14008A560 (-FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z.c)
 *     ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401BF440 (-FreePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z.c)
 */

__int64 __fastcall Win32UAFMFreePagedLookasideList(void **a1, unsigned int a2)
{
  Win32UAFMAllocatorCollection::FreePagedLookasideList(*a1);
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreePool(a1, a2);
}
