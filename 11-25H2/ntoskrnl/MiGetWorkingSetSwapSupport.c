/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1403D82C4
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1403D8014 (MmQueryProcessWorkingSetSwapPages.c)
 *     MiOutlawInswaps @ 0x1403D81C0 (MiOutlawInswaps.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x140454FFC (MmInSwapWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  void *v1; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    return 0LL;
  v1 = &unk_140E38518;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (void *)(a1 + 216);
  return *(_QWORD *)v1;
}
