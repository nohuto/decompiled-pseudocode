/*
 * XREFs of PsIsJobParentImmutable @ 0x140A17B38
 * Callers:
 *     PspIsJobMovable @ 0x140777924 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     PspGetJobAssignmentDisposition @ 0x140A17278 (PspGetJobAssignmentDisposition.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1556) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1304) )
    return 1;
  return result;
}
