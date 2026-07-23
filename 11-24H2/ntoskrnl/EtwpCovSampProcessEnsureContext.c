/*
 * XREFs of EtwpCovSampProcessEnsureContext @ 0x1409247F8
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1409228E0 (EtwpCovSampImageNotify.c)
 * Callees:
 *     EtwpCovSampProcessCleanup @ 0x140924B30 (EtwpCovSampProcessCleanup.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampProcessEnsureContext(__int64 a1)
{
  unsigned int v1; // ebx
  signed __int64 Pool2; // rax
  __int64 v5; // rdx
  void *v6; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 1904) )
  {
    if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL, 0x38uLL, 0x56777445u);
      v6 = (void *)Pool2;
      if ( Pool2 )
      {
        *(_OWORD *)Pool2 = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1904), Pool2, 0LL) )
        {
          LOBYTE(v5) = 1;
          EtwpCovSampProcessCleanup(Pool2, v5);
          ExFreePoolWithTag(v6, 0x56777445u);
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v1;
}
