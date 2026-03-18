/*
 * XREFs of PfSnAltProfileTreeCompareByScenarioId @ 0x1409619C0
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PfSnAltProfileFindByScenarioId @ 0x14096192C (PfSnAltProfileFindByScenarioId.c)
 * Callees:
 *     wcsncmp @ 0x1404FFFD0 (wcsncmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByScenarioId(wchar_t *Str2, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v4; // eax

  v2 = *(_DWORD *)(a2 + 92);
  if ( v2 > *((_DWORD *)Str2 + 15) )
    return 1;
  if ( v2 < *((_DWORD *)Str2 + 15) )
    return -1;
  v4 = *(_DWORD *)(a2 + 96);
  if ( v4 > *((_DWORD *)Str2 + 16) )
    return 1;
  if ( v4 >= *((_DWORD *)Str2 + 16) )
    return wcsncmp((const wchar_t *)(a2 + 32), Str2, 0x1EuLL);
  else
    return -1;
}
