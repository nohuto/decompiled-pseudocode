/*
 * XREFs of MiMakeCombineCandidateClean @ 0x1402FA1D0
 * Callers:
 *     MiCrcStillIntact @ 0x1402FA610 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 */

void __fastcall MiMakeCombineCandidateClean(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8

  v4 = (*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL;
  MiWriteValidPteNewProtection(a1, *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFBDuLL);
  MiLockPageAndSetDirty(48 * v4 - 0x220000000000LL, 1LL, v5);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x600000) == 0x600000 )
      MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
}
