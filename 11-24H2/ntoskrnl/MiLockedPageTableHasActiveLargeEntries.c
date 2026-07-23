/*
 * XREFs of MiLockedPageTableHasActiveLargeEntries @ 0x14020050C
 * Callers:
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockedPageTableHasActiveLargeEntries(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ecx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx

  v1 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = a1;
  while ( 1 )
  {
    v5 = (__int64)(v5 << 25) >> 16;
    if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v3;
  }
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    while ( v1 < 0x200 )
    {
      if ( (MI_READ_PTE_LOCK_FREE(a1, v5, v4) & 0x1000000000000081LL) == 0x1000000000000081LL )
        return 1LL;
      a1 += 8LL;
      ++v1;
    }
  }
  return 0LL;
}
