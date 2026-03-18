/*
 * XREFs of PsIsJobParentImmutable @ 0x140A0F0E8
 * Callers:
 *     PspIsJobMovable @ 0x140767E44 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     PspGetJobAssignmentDisposition @ 0x140A0E808 (PspGetJobAssignmentDisposition.c)
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
