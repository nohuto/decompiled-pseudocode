/*
 * XREFs of HvlAllocateHibernateResources @ 0x14070F454
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x140752A4C (PopPreallocateHibernateMemory.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall HvlAllocateHibernateResources(char a1, int a2)
{
  unsigned int v2; // ebx
  void *IndependentPages; // rax
  int v4; // esi
  unsigned int v5; // edi

  if ( (HvlpFlags & 2) != 0 || (HvlpFlags & 0x40) != 0 )
  {
    v2 = 0;
    if ( a1 )
    {
      if ( !HvlpFallbackScratchPage )
      {
        IndependentPages = (void *)MmAllocateIndependentPagesEx(4096LL, 0xFFFFFFFFLL, 0LL, 0LL);
        HvlpFallbackScratchPage = IndependentPages;
        if ( IndependentPages )
          memset_0(IndependentPages, 0, 0x1000uLL);
        else
          return (unsigned int)-1073741670;
      }
    }
    else
    {
      v4 = a2 + 2;
      v5 = -1073741670;
      HvlpHibernateScratchPage = (PVOID)ExAllocatePool2(0x40uLL);
      if ( HvlpHibernateScratchPage )
      {
        HvlpHibernateScratchPageCount = v4;
        return 0;
      }
      return v5;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
