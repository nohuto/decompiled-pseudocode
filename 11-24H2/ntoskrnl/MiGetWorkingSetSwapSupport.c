/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1403C84EC
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140215F40 (MiOutPageSingleKernelStack.c)
 *     MmInSwapWorkingSet @ 0x1403C6A50 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1403C81C8 (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutlawInswaps @ 0x1403C83E8 (MiOutlawInswaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  void *v1; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    return 0LL;
  v1 = &unk_140E38898;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (void *)(a1 + 216);
  return *(_QWORD *)v1;
}
