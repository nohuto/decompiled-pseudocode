/*
 * XREFs of ?TargetInfoSort@@YAHPEBU_TargetInfo@@0_J@Z @ 0x180674CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OutputTechPriority@@YAHW4DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x180674BC0 (-OutputTechPriority@@YAHW4DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall TargetInfoSort(_DWORD *p1, _DWORD *p2, LPARAM lParam)
{
  unsigned int v3; // eax
  unsigned int v4; // r9d
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // r8d

  v3 = p1[5];
  if ( v3 == p2[5] )
  {
    return *p1 < *p2 ? -1 : 1;
  }
  else
  {
    OutputTechPriority(v3);
    v5 = OutputTechPriority(v4);
    v6 = -1;
    if ( v7 >= v5 )
      return 1;
  }
  return v6;
}
