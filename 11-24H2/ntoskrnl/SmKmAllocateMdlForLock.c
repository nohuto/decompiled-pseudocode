/*
 * XREFs of SmKmAllocateMdlForLock @ 0x1402E98DC
 * Callers:
 *     SmFpAllocate @ 0x1402E96E0 (SmFpAllocate.c)
 *     SmFpPreAllocate @ 0x1404BE790 (SmFpPreAllocate.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x14033BB60 (MmChargeResources.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SmKmAllocateMdlForLock(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rdi
  __int64 Pool2; // rax

  v2 = 0LL;
  if ( (unsigned int)MmChargeResources(*(_QWORD *)(a1 + 2096), a2 >> 12, 3LL) )
  {
    v5 = (a2 + 4095) >> 12;
    Pool2 = ExAllocatePool2(0x40uLL, 8 * v5 + 48, 0x4C506D73u);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_WORD *)(Pool2 + 10) = 0;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_DWORD *)(Pool2 + 44) = 0;
      v2 = Pool2;
      *(_WORD *)(Pool2 + 8) = 8 * (v5 + 6);
      *(_DWORD *)(Pool2 + 40) = a2;
    }
    else
    {
      SmAcquireReleaseCharges(a1, a2, 3LL);
    }
  }
  return v2;
}
