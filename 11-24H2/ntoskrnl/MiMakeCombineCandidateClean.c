/*
 * XREFs of MiMakeCombineCandidateClean @ 0x140346988
 * Callers:
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x140345608 (MiCrcStillIntact.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 */

void __fastcall MiMakeCombineCandidateClean(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9

  v5 = (*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL;
  MiWriteValidPteNewProtection(a1, *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFBDuLL, a3);
  MiLockPageAndSetDirty(48 * v5 - 0x220000000000LL, 1LL, v6, v7);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x600000) == 0x600000 )
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
}
