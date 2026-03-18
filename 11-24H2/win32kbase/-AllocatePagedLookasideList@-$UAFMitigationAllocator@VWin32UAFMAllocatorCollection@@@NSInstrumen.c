/*
 * XREFs of ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_KIIIPEAI@Z @ 0x1401BF24C
 * Callers:
 *     Win32UAFMAllocPagedLookasideList @ 0x1401BED20 (Win32UAFMAllocPagedLookasideList.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140079318 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z @ 0x14008A560 (-FreePagedLookasideList@Win32UAFMAllocatorCollection@@SAXPEAX@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1401BF230 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1401BF2E8 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 */

_QWORD *__fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePagedLookasideList(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        USHORT a4)
{
  __int64 v7; // rcx
  SIZE_T v8; // rbx
  __int64 UserSessionState; // rax
  _BYTE *PagedLookasideList; // rbx
  _QWORD *result; // rax

  v8 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a1);
  if ( !v8 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v7);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(UserSessionState + 72288),
                         v8,
                         a2,
                         a3,
                         a4);
  if ( !PagedLookasideList )
    return 0LL;
  result = (_QWORD *)NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(0x40uLL);
  if ( !result )
  {
    Win32UAFMAllocatorCollection::FreePagedLookasideList(PagedLookasideList);
    return 0LL;
  }
  *result = PagedLookasideList;
  return result;
}
