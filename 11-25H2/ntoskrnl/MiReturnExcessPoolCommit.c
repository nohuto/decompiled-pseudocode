/*
 * XREFs of MiReturnExcessPoolCommit @ 0x1402C3C24
 * Callers:
 *     MiCommitPoolMemory @ 0x1402C2C90 (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x1402C4578 (MiReturnPhysicalPoolPages.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiReturnExcessPoolCharges @ 0x140378924 (MiReturnExcessPoolCharges.c)
 *     MiFreeLargePageChain @ 0x1404AE044 (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiReturnExcessPoolCommit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = *(unsigned __int16 *)(a1 + 100);
  if ( (result & 2) != 0 )
  {
    result = *(_QWORD *)(a1 + 48);
    v4 = *(_QWORD *)(a1 + 8);
    if ( result != v4 )
      return MiReturnCommit(
               *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 174LL)),
               v4 - result,
               0LL);
  }
  else if ( (result & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 102);
      MiFreeLargePageChain(a1 + 16, a2);
    }
    result = *(_QWORD *)(a1 + 48);
    v5 = *(_QWORD *)(a1 + 8);
    if ( result != v5 )
      return MiReturnExcessPoolCharges(v5 - result, 0LL);
  }
  else if ( (result & 0x100) == 0 )
  {
    return MiReturnPhysicalPoolPages(a1 + 16, 0LL);
  }
  return result;
}
