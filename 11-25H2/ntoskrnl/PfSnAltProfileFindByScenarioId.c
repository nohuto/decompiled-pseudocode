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
  unsigned __int64 v2; // rbx
  int v3; // edi
  int v4; // eax
  unsigned __int64 v5; // rax

  v2 = *((_QWORD *)&xmmword_140E66E60 + 1);
  if ( (qword_140E66E70 & 1) != 0 && *((_QWORD *)&xmmword_140E66E60 + 1) )
    v2 = ((unsigned __int64)&xmmword_140E66E60 + 8) ^ *((_QWORD *)&xmmword_140E66E60 + 1);
  v3 = qword_140E66E70 & 1;
  while ( v2 )
  {
    v4 = PfSnAltProfileTreeCompareByScenarioId(Str2);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        return (v2 - 24) & -(__int64)(v2 != 0);
      v5 = *(_QWORD *)(v2 + 8);
    }
    else
    {
      v5 = *(_QWORD *)v2;
    }
    if ( v3 && v5 )
      v2 ^= v5;
    else
      v2 = v5;
  }
  return (v2 - 24) & -(__int64)(v2 != 0);
}
