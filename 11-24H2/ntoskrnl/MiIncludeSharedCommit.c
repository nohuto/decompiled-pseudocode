/*
 * XREFs of MiIncludeSharedCommit @ 0x1404152F0
 * Callers:
 *     MiRemoveSharedCommitNode @ 0x140895560 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x140975220 (MiUpdateProcessSharedCommit.c)
 *     MiVadHasSharedCommit @ 0x140A47B8C (MiVadHasSharedCommit.c)
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
    if ( (v1 & 0x400) != 0 || a1 == qword_140E2D848 || *(_QWORD *)(a1 + 64) )
      return 0LL;
    for ( i = 0; !i; i = 1 )
    {
      if ( a1 == unk_140E2D7E0 )
        return 0LL;
    }
  }
  return 1LL;
}
