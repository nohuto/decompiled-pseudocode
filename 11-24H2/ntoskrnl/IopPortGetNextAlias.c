/*
 * XREFs of IopPortGetNextAlias @ 0x14072606C
 * Callers:
 *     IopPortAddAllocation @ 0x140725E20 (IopPortAddAllocation.c)
 *     IopPortBacktrackAllocation @ 0x140725F00 (IopPortBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

char __fastcall IopPortGetNextAlias(char a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax

  if ( (a1 & 4) != 0 )
  {
    v3 = 1024LL;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return 0;
    v3 = 4096LL;
  }
  if ( (unsigned __int64)(v3 + a2) <= 0xFFFF )
  {
    *a3 = v3 + a2;
    return 1;
  }
  return 0;
}
