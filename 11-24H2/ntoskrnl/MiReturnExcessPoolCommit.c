/*
 * XREFs of MiReturnExcessPoolCommit @ 0x1402EA7D0
 * Callers:
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiReturnPhysicalPoolPages @ 0x1402EA2D4 (MiReturnPhysicalPoolPages.c)
 *     MiFreeLargePageChain @ 0x1403D5A54 (MiFreeLargePageChain.c)
 *     MiReturnExcessPoolCharges @ 0x14045A588 (MiReturnExcessPoolCharges.c)
 */

void __fastcall MiReturnExcessPoolCommit(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = *(_WORD *)(a1 + 100);
  if ( (v2 & 2) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v5 = *(_QWORD *)(a1 + 8);
    if ( v4 != v5 )
      MiReturnCommit(*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 174LL)), v5 - v4, 0);
  }
  else if ( (v2 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 102);
      MiFreeLargePageChain(a1 + 16, a2);
    }
    v6 = *(_QWORD *)(a1 + 48);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v6 != v7 )
      MiReturnExcessPoolCharges(v7 - v6, 0LL);
  }
  else if ( (v2 & 0x100) == 0 )
  {
    MiReturnPhysicalPoolPages(a1 + 16, 0);
  }
}
