/*
 * XREFs of KiFindRankBiasedIdleSmtSet @ 0x140368B7C
 * Callers:
 *     KiSelectIdleProcessor @ 0x1403690F0 (KiSelectIdleProcessor.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiChooseTargetProcessor @ 0x1404DE410 (KiChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

char __fastcall KiFindRankBiasedIdleSmtSet(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  int v4; // r10d
  unsigned __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v2 = 0LL;
  v3 = *a2 & *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 0;
  v4 = *(unsigned __int16 *)(a1 + 136) << 6;
  do
  {
    _BitScanForward64(&v5, v3);
    v6 = 1LL << v5;
    v3 ^= 1LL << v5;
    v7 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (unsigned int)(v4 + v5))];
    v8 = *(_QWORD *)(v7 + 36448) & ~*(_QWORD *)(v7 + 200);
    if ( (v3 & v8) == v8 )
    {
      v3 ^= v8;
    }
    else
    {
      _BitScanForward64(&v9, v8);
      if ( (*(_DWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F22998 + (unsigned int)(v4 + v9))] + 236) & 0x200) != 0 )
        v2 |= v6;
    }
  }
  while ( v3 );
  if ( !v2 )
    return 0;
  *a2 = v2;
  return 1;
}
