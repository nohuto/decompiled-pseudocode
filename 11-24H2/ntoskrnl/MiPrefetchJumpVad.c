/*
 * XREFs of MiPrefetchJumpVad @ 0x1404C7128
 * Callers:
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 * Callees:
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     MiUpdatePrefetchPriority @ 0x1403DCA60 (MiUpdatePrefetchPriority.c)
 *     MiLeapPrefetch @ 0x1404BA7C0 (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 result; // rax

  v4 = a3;
  v7 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
  {
    v8 = *(_DWORD *)(a2 + 48) & 0x70;
    if ( v8 != 48 && v8 != 16 && !MiIsVadLargePrivate(a2) )
    {
      v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v10 > (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
        v10 = ((((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      while ( v9 < v10 )
      {
        v11 = *(_QWORD *)v9;
        v9 += 8LL;
        if ( v11 )
        {
          if ( (v11 & 1) != 0 )
            goto LABEL_14;
          if ( (v11 & 0x400) != 0 )
            break;
          if ( (v11 & 0x800) != 0 )
          {
LABEL_14:
            MiUpdatePrefetchPriority(a1, v4, a2);
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v11) )
          {
            break;
          }
        }
        v4 += 4096LL;
      }
      v7 = (__int64)(v9 << 25) >> 16;
    }
  }
  else
  {
    result = *(unsigned int *)(a2 + 64);
    if ( (result & 1) == 0 )
      return result;
  }
  result = MiLeapPrefetch((_QWORD *)a1, v7, a3, a4);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
