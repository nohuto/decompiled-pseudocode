/*
 * XREFs of MiSectionOpen @ 0x1408E2BC0
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x14084FB60 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiSectionOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r10

  v4 = MiSectionControlArea(a4);
  return MiInsertSharedCommitNode(v4, v5, 0LL);
}
