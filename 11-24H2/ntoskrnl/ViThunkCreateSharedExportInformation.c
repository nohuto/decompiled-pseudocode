/*
 * XREFs of ViThunkCreateSharedExportInformation @ 0x140BA638C
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140BA64F4 (VfThunkAddTargetNotify.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x14042B450 (RtlNumberOfClearBits.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ViThunkSnapSharedExports @ 0x140BA643C (ViThunkSnapSharedExports.c)
 *     ViThunkFreeSharedThunksArray @ 0x140BA65A0 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall ViThunkCreateSharedExportInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        RTL_BITMAP *a4,
        ULONG_PTR *a5)
{
  unsigned int v8; // ebx
  ULONG v9; // eax
  ULONG v10; // esi
  ULONG_PTR Pool2; // rax

  v8 = 1;
  v9 = RtlNumberOfClearBits(a4);
  v10 = v9;
  if ( v9 )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 24LL * v9, 0x54496656uLL);
    *a5 = Pool2;
    if ( Pool2 )
    {
      if ( !(unsigned int)ViThunkSnapSharedExports(a1, a2, 56LL, a4, v10, Pool2) )
        ViThunkFreeSharedThunksArray(a5);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return v8;
}
