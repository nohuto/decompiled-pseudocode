/*
 * XREFs of MmInPageKernelStack @ 0x1402DCBD0
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C1EB0 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 */

void __fastcall MmInPageKernelStack(ULONG_PTR BugCheckParameter3)
{
  __int128 v2; // [rsp+30h] [rbp-30h]

  if ( (MiFlags & 0x40) != 0 )
  {
    for ( *((_QWORD *)&v2 + 1) = *(_QWORD *)(BugCheckParameter3 + 40); ; v2 = *(_OWORD *)(*((_QWORD *)&v2 + 1) + 32LL) )
    {
      MiInPageSingleKernelStack(BugCheckParameter3);
      if ( !*(_QWORD *)(*((_QWORD *)&v2 + 1) + 16LL) )
        break;
    }
    if ( (*(_DWORD *)(BugCheckParameter3 + 116) & 0x800000) != 0 )
      MiInPageSingleKernelStack(BugCheckParameter3);
  }
}
