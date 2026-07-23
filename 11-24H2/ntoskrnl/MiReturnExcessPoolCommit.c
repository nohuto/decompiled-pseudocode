/*
 * XREFs of MiReturnExcessPoolCommit @ 0x14034BE10
 * Callers:
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 * Callees:
 *     MiFreeLargePageChain @ 0x1402648B8 (MiFreeLargePageChain.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnPhysicalPoolPages @ 0x14034B914 (MiReturnPhysicalPoolPages.c)
 *     MiReturnExcessPoolCharges @ 0x14044F9D8 (MiReturnExcessPoolCharges.c)
 */

void __fastcall MiReturnExcessPoolCommit(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx

  v1 = *(_WORD *)(a1 + 100);
  if ( (v1 & 2) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    v4 = *(_QWORD *)(a1 + 8);
    if ( v3 != v4 )
      MiReturnCommit(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 174LL)), v4 - v3, 0);
  }
  else if ( (v1 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 32) )
      MiFreeLargePageChain(a1 + 16, *(_BYTE *)(a1 + 102));
    v5 = *(_QWORD *)(a1 + 48);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v5 != v6 )
      MiReturnExcessPoolCharges(v6 - v5, 0LL);
  }
  else if ( (v1 & 0x100) == 0 )
  {
    MiReturnPhysicalPoolPages(a1 + 16, 0LL);
  }
}
