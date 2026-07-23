/*
 * XREFs of PfSnAltProfileTreeCompareByScenarioId @ 0x140949480
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PfSnAltProfileFindByScenarioId @ 0x1409493EC (PfSnAltProfileFindByScenarioId.c)
 * Callees:
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
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
