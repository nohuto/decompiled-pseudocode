/*
 * XREFs of HalpMmAllocateAndInsertPageTablePage @ 0x140540574
 * Callers:
 *     HalpMmGetPteAddressSafe @ 0x140540784 (HalpMmGetPteAddressSafe.c)
 * Callees:
 *     HalpMmZeroPageWithTemporaryMapping @ 0x140540938 (HalpMmZeroPageWithTemporaryMapping.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C69568 (HalpAllocPhysicalMemoryEx.c)
 */

char __fastcall HalpMmAllocateAndInsertPageTablePage(_BYTE *a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rbx
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  v3 = 0;
  v4 = HalpAllocPhysicalMemoryEx(HalpMmLoaderBlock, 0, 1, 0, a2);
  v5 = v4;
  if ( v4 )
  {
    if ( (*a1 & 1) != 0 )
      return 1;
    if ( (int)HalpMmZeroPageWithTemporaryMapping(v4) >= 0 )
    {
      _InterlockedOr(v7, 0);
      *(_QWORD *)a1 = v5 & 0xFFFFFFFFFF000LL | 0x8000000000000003uLL;
      return 1;
    }
  }
  return v3;
}
