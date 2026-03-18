/*
 * XREFs of MiPrepareAttachThread @ 0x1402C9EE0
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MmQueryCommitReleaseState @ 0x14047CE80 (MmQueryCommitReleaseState.c)
 *     MmReleaseCommitForMemResetPages @ 0x14065EFDC (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPrepareAttachThread(__int64 a1, __int64 a2)
{
  int v3; // [rsp+8h] [rbp+8h]

  v3 = *(_DWORD *)(a2 + 184);
  if ( (*(_DWORD *)(a1 + 500) & 0xC00u) < 0xC00
    || *(_QWORD *)(a2 + 104)
    || (BYTE1(v3) & 0xF0) == 0xF0
    || *(_QWORD *)(a2 + 144) <= 1uLL )
  {
    return 0LL;
  }
  BYTE1(v3) = (BYTE1(v3) + 16) ^ (BYTE1(v3) ^ (BYTE1(v3) + 16)) & 0xF;
  *(_WORD *)(a2 + 184) = v3;
  return 1LL;
}
