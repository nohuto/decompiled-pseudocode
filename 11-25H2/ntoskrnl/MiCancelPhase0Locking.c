/*
 * XREFs of MiCancelPhase0Locking @ 0x140A3A4A0
 * Callers:
 *     MmResetDriverPaging @ 0x140A395F0 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140A3A3F0 (MmPageEntireDriver.c)
 * Callees:
 *     MiLockPagableSections @ 0x140C4A60C (MiLockPagableSections.c)
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
