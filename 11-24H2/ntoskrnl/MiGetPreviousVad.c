/*
 * XREFs of MiGetPreviousVad @ 0x140261500
 * Callers:
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MiLocateLowestConflictingVad @ 0x140445494 (MiLocateLowestConflictingVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140477174 (MiDeleteEmptyPageTableCommit.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPreviousVad(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 i; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    for ( ; *(_QWORD *)(v1 + 8); v1 = *(_QWORD *)(v1 + 8) )
      ;
  }
  else
  {
    for ( i = a1[2]; ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(unsigned __int64 **)(v1 + 8) == a1 )
        break;
      a1 = (unsigned __int64 *)v1;
    }
  }
  return v1;
}
