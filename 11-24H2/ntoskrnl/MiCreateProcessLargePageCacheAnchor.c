/*
 * XREFs of MiCreateProcessLargePageCacheAnchor @ 0x140692234
 * Callers:
 *     MiAllocateLargeProcessPagesFromCache @ 0x14069197C (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateProcessLargePageCacheAnchor(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  void *v4; // rsi
  unsigned __int64 *v5; // rdi
  KIRQL v6; // r15
  _QWORD *v7; // rcx

  result = MiAllocatePool(0x40uLL, 192LL * (unsigned __int16)KeNumberNodes + 32, 1884055885);
  v3 = (_QWORD *)result;
  if ( result )
  {
    v4 = 0LL;
    v5 = &KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[2].StaticBitmap[29];
    *(_QWORD *)(result + 16) = v5;
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16448));
    if ( v5[35] )
    {
      v4 = v3;
      v3 = (_QWORD *)v5[35];
    }
    else
    {
      v5[35] = (unsigned __int64)v3;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v5 + 72);
    v7 = *(_QWORD **)(a1 + 16464);
    if ( *v7 != a1 + 16456 )
      __fastfail(3u);
    v3[1] = v7;
    *v3 = a1 + 16456;
    *v7 = v3;
    *(_QWORD *)(a1 + 16464) = v3;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5 + 72);
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16448), v6);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    return (__int64)v3;
  }
  return result;
}
