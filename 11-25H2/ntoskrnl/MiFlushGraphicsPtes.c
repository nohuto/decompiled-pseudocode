/*
 * XREFs of MiFlushGraphicsPtes @ 0x1404D7CB4
 * Callers:
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiFinishPteChangesInPageTable @ 0x1403FCA58 (MiFinishPteChangesInPageTable.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14026F580 (KeInvalidateRangeAllCachesNoIpi.c)
 */

char __fastcall MiFlushGraphicsPtes(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = MEMORY[0x48] & 0x300;
  if ( v2 == 256 )
  {
    _InterlockedOr(v7, 0);
  }
  else
  {
    v3 = a1 << 25 >> 16;
    if ( v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v5 = (unsigned int)(1 << MEMORY[0x48]);
      v4 = a2 / v5;
      if ( a2 % v5 )
        LODWORD(v4) = v4 + 1;
    }
    else
    {
      LODWORD(v4) = a2 * (1 << (9 - MEMORY[0x48]));
    }
    LOBYTE(v2) = KeInvalidateRangeAllCachesNoIpi(0LL, 8 * v4);
  }
  return v2;
}
