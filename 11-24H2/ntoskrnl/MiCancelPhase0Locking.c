/*
 * XREFs of MiCancelPhase0Locking @ 0x140A340D0
 * Callers:
 *     MmResetDriverPaging @ 0x140A33220 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140A34020 (MmPageEntireDriver.c)
 * Callees:
 *     MiLockPagableSections @ 0x140C5DB28 (MiLockPagableSections.c)
 */

__int64 __fastcall MiCancelPhase0Locking(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
  {
    result = MiLockPagableSections(a1, 0LL);
    *(_DWORD *)(a1 + 104) &= ~0x400000u;
  }
  return result;
}
