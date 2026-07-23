/*
 * XREFs of PfSnAltProfileFindByScenarioId @ 0x1409493EC
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PfSnBeginAppLaunch @ 0x1409483F4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x140949480 (PfSnAltProfileTreeCompareByScenarioId.c)
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
