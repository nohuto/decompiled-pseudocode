/*
 * XREFs of MiCancelPhase0Locking @ 0x140A3E7C0
 * Callers:
 *     MmResetDriverPaging @ 0x140A3D910 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140A3E710 (MmPageEntireDriver.c)
 * Callees:
 *     MiLockPagableSections @ 0x140C5B998 (MiLockPagableSections.c)
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
