/*
 * XREFs of PfSnAltProfileFindByScenarioId @ 0x1408271AC
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     PfSnBeginAppLaunch @ 0x1408261B4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x140827240 (PfSnAltProfileTreeCompareByScenarioId.c)
 */

unsigned __int64 __fastcall PfSnAltProfileFindByScenarioId(wchar_t *Str2)
{
  unsigned __int64 Root; // rbx
  int v3; // edi
  int v4; // eax
  unsigned __int64 v5; // rax

  Root = (unsigned __int64)Tree.Root;
  if ( (*(_BYTE *)&Tree.0 & 1) != 0 && Tree.Root )
    Root = (unsigned __int64)&Tree ^ (unsigned __int64)Tree.Root;
  v3 = *(_BYTE *)&Tree.0 & 1;
  while ( Root )
  {
    v4 = PfSnAltProfileTreeCompareByScenarioId(Str2);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        return (Root - 24) & -(__int64)(Root != 0);
      v5 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v5 = *(_QWORD *)Root;
    }
    if ( v3 && v5 )
      Root ^= v5;
    else
      Root = v5;
  }
  return (Root - 24) & -(__int64)(Root != 0);
}
