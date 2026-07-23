/*
 * XREFs of MiInitializeDpcGang @ 0x14026F77C
 * Callers:
 *     MiAllocateFastLargePagesForMdl @ 0x14026EEC8 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiZeroHotAddMemory @ 0x1407EA964 (MiZeroHotAddMemory.c)
 * Callees:
 *     MiComputeIdealDpcGang @ 0x14026F84C (MiComputeIdealDpcGang.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInitializeDpcGang(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 *v8; // r14

  memset_0(a1, 0, 0x168uLL);
  result = MiComputeIdealDpcGang(a1, a2, a3);
  v7 = result;
  if ( (a3 & 1) != 0 )
  {
    *((_DWORD *)a1 + 46) |= 1u;
    v8 = a1 + 2;
    if ( (unsigned int)result > 8 )
    {
      result = MiAllocatePool(0x40uLL, 16LL * (unsigned int)result);
      *v8 = result;
    }
    if ( !*v8 )
    {
      result = (__int64)(a1 + 3);
      goto LABEL_10;
    }
  }
  else
  {
    v8 = a1 + 1;
    if ( (unsigned int)result > 8 )
    {
      result = MiAllocatePool(0x40uLL, 8LL * (unsigned int)result);
      *v8 = result;
    }
    if ( !*v8 )
    {
      result = (__int64)(a1 + 2);
LABEL_10:
      *v8 = result;
      if ( v7 > 8 )
        v7 = 8;
    }
  }
  *((_DWORD *)a1 + 47) = v7;
  return result;
}
