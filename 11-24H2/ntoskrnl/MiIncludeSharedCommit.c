/*
 * XREFs of MiIncludeSharedCommit @ 0x14041FB70
 * Callers:
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x1408F7FA0 (MiUpdateProcessSharedCommit.c)
 *     MiVadHasSharedCommit @ 0x1409C29F4 (MiVadHasSharedCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax
  int i; // eax

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) == 0 )
  {
    if ( (v1 & 0x400) != 0 || a1 == qword_140E2D708 || *(_QWORD *)(a1 + 64) )
      return 0LL;
    for ( i = 0; !i; i = 1 )
    {
      if ( a1 == unk_140E2D6A0 )
        return 0LL;
    }
  }
  return 1LL;
}
