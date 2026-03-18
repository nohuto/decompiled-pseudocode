/*
 * XREFs of SmKmAllocateMdlForLock @ 0x14037C85C
 * Callers:
 *     SmFpAllocate @ 0x14037C660 (SmFpAllocate.c)
 *     SmFpPreAllocate @ 0x1404C3258 (SmFpPreAllocate.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x140212800 (MmChargeResources.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SmKmAllocateMdlForLock(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 Pool2; // rax

  v2 = 0LL;
  if ( (unsigned int)MmChargeResources(*(__int64 **)(a1 + 2096), a2 >> 12, 3) )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_WORD *)(Pool2 + 10) = 0;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_DWORD *)(Pool2 + 44) = 0;
      v2 = Pool2;
      *(_WORD *)(Pool2 + 8) = 8 * (((a2 + 4095) >> 12) + 6);
      *(_DWORD *)(Pool2 + 40) = a2;
    }
    else
    {
      SmAcquireReleaseCharges(a1, a2, 3, 1);
    }
  }
  return v2;
}
