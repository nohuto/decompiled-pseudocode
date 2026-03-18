/*
 * XREFs of CmpCleanUpKcbCachedSymlink @ 0x14087C900
 * Callers:
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmpMarkKeyUnbacked @ 0x14087B8F8 (CmpMarkKeyUnbacked.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087C024 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A2F314 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A2F460 (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x14087E570 (CmpDelayDerefKeyControlBlock.c)
 */

__int64 __fastcall CmpCleanUpKcbCachedSymlink(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 184) & 0x400000) == 0 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(a1 + 104));
      *(_QWORD *)(a1 + 104) = 0LL;
      result = 65527LL;
      *(_WORD *)(a1 + 8) &= ~8u;
    }
  }
  return result;
}
