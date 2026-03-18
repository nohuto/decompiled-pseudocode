/*
 * XREFs of MiPrefetchJumpVad @ 0x1404CDD58
 * Callers:
 *     MiZeroFault @ 0x1402FEA50 (MiZeroFault.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x14025FD90 (MiIsVadLargePrivate.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUpdatePrefetchPriority @ 0x1403FE3E8 (MiUpdatePrefetchPriority.c)
 *     MiLeapPrefetch @ 0x1404BF28C (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 result; // rax

  v3 = a3;
  v6 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 48) & 0x70;
    if ( v7 != 48 && v7 != 16 && !MiIsVadLargePrivate(a2) )
    {
      v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v9 > (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
        v9 = ((((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      while ( v8 < v9 )
      {
        v10 = *(_QWORD *)v8;
        v8 += 8LL;
        if ( v10 )
        {
          if ( (v10 & 1) != 0 )
            goto LABEL_14;
          if ( (v10 & 0x400) != 0 )
            break;
          if ( (v10 & 0x800) != 0 )
          {
LABEL_14:
            MiUpdatePrefetchPriority(a1, v3, a2);
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v10) )
          {
            break;
          }
        }
        v3 += 4096LL;
      }
      v6 = (__int64)(v8 << 25) >> 16;
    }
  }
  else
  {
    result = *(unsigned int *)(a2 + 64);
    if ( (result & 1) == 0 )
      return result;
  }
  result = MiLeapPrefetch((_QWORD *)a1, v6, a3);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
