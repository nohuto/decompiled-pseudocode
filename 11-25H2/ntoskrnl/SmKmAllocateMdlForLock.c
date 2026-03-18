/*
 * XREFs of SmKmAllocateMdlForLock @ 0x1404665D8
 * Callers:
 *     SmFpAllocate @ 0x140327D80 (SmFpAllocate.c)
 *     SmFpPreAllocate @ 0x1404C4BB8 (SmFpPreAllocate.c)
 * Callees:
 *     MmChargeResources @ 0x14022E140 (MmChargeResources.c)
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SmKmAllocateMdlForLock(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 Pool2; // rax

  v4 = 0LL;
  if ( (unsigned int)MmChargeResources(*(ULONG ***)(a1 + 2096), a2 >> 12, 3, a4) )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_WORD *)(Pool2 + 10) = 0;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_DWORD *)(Pool2 + 44) = 0;
      v4 = Pool2;
      *(_WORD *)(Pool2 + 8) = 8 * (((a2 + 4095) >> 12) + 6);
      *(_DWORD *)(Pool2 + 40) = a2;
    }
    else
    {
      SmAcquireReleaseCharges(a1, a2, 3, 1LL);
    }
  }
  return v4;
}
