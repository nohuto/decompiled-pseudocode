/*
 * XREFs of MiGetPreviousVad @ 0x1402A971C
 * Callers:
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiLocateLowestConflictingVad @ 0x140447C18 (MiLocateLowestConflictingVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14047A134 (MiDeleteEmptyPageTableCommit.c)
 *     MiReturnPageTablePageCommitment @ 0x1409E3F50 (MiReturnPageTablePageCommitment.c)
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
