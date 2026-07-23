/*
 * XREFs of sub_1409DA4D0 @ 0x1409DA4D0
 * Callers:
 *     sub_1409DA1F4 @ 0x1409DA1F4 (sub_1409DA1F4.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_1409DA42C @ 0x1409DA42C (sub_1409DA42C.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409DAD30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MmAllocateVirtualMemory @ 0x1409DB280 (MmAllocateVirtualMemory.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409DA4D0(__int64 a1, PVOID **a2)
{
  __int64 Pool2; // rax
  PVOID *v4; // rdi
  __int64 v5; // rbx
  signed int VirtualMemory; // esi

  Pool2 = ExAllocatePool2(0x100uLL, 0x440uLL, 0x42524157u);
  v4 = 0LL;
  v5 = Pool2;
  if ( Pool2 )
    v4 = (PVOID *)Pool2;
  SddlpFree(0LL);
  VirtualMemory = v5 == 0 ? 0xC0000017 : 0;
  if ( v5 )
  {
    *v4 = 0LL;
    v4[1] = (PVOID)0x10000;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[135] = 0LL;
    v4[2] = KeGetCurrentThread()->ApcState.Process;
    v4[134] = 0LL;
    memset_0((char *)v4 + 44, 0, 0x400uLL);
    VirtualMemory = MmAllocateVirtualMemory(
                      -1,
                      (int)v4,
                      (int)v4 + 8,
                      4096,
                      32,
                      0LL,
                      0,
                      0,
                      0x20000000,
                      2,
                      (__int64)(v4 + 135));
    if ( VirtualMemory >= 0 )
    {
      if ( v4[135] )
      {
        VirtualMemory = WbMakeUserExecutablePagesKernelWritable(*v4, *((unsigned int *)v4 + 2), v4 + 3, v4 + 4);
        if ( VirtualMemory >= 0 && a2 )
        {
          *a2 = v4;
          v4 = 0LL;
        }
      }
      else
      {
        VirtualMemory = -1073741595;
      }
    }
  }
  sub_1409DA42C(v4);
  return (unsigned int)VirtualMemory;
}
