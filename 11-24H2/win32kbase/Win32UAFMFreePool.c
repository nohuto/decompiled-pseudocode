/*
 * XREFs of Win32UAFMFreePool @ 0x1401BEFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401BF440 (-FreePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z.c)
 */

__int64 __fastcall Win32UAFMFreePool(__int64 a1, __int64 a2)
{
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreePool(a1, a2);
}
