/*
 * XREFs of MiIsPageAGapPage @ 0x1402D046C
 * Callers:
 *     MiComputePxeWalkAction @ 0x1402B48B0 (MiComputePxeWalkAction.c)
 *     MiCreateSystemPageTable @ 0x1402D0110 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPageAGapPage(PVOID a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  __int64 v4; // r9
  int v5; // eax
  __int64 i; // rdx

  v2 = 0;
  v3 = 3;
  if ( a2 <= 3 )
    v3 = a2;
  v4 = v3;
  v5 = 0;
  if ( a2 <= 3 )
    v5 = a2;
LABEL_5:
  if ( v2 >= 2 )
    return 0LL;
  for ( i = v5; ; ++i )
  {
    if ( i > v4 )
    {
      ++v2;
      goto LABEL_5;
    }
    if ( a1 == *(&qword_140E37100[7 * v2] + i) )
      break;
  }
  return 1LL;
}
