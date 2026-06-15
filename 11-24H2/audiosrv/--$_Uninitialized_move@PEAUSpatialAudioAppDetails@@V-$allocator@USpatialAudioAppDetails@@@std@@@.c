/*
 * XREFs of ??$_Uninitialized_move@PEAUSpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAPEAUSpatialAudioAppDetails@@QEAU1@0PEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18014F518
 * Callers:
 *     ??$_Emplace_reallocate@USpatialAudioAppDetails@@@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@AEAAPEAUSpatialAudioAppDetails@@QEAU2@$$QEAU2@@Z @ 0x18014F2BC (--$_Emplace_reallocate@USpatialAudioAppDetails@@@-$vector@USpatialAudioAppDetails@@V-$allocator@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetails@@QEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18014F158 (--$_Destroy_range@V-$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetail.c)
 */

SpatialAudioAppDetails *__fastcall std::_Uninitialized_move<SpatialAudioAppDetails *>(
        _QWORD *a1,
        _QWORD *a2,
        SpatialAudioAppDetails *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9
  __int64 v6; // rcx

  v4 = a1;
  if ( a1 != a2 )
  {
    v5 = (char *)(a3 - (SpatialAudioAppDetails *)a1);
    do
    {
      *(_QWORD *)a3 = *v4;
      a3 = (SpatialAudioAppDetails *)((char *)a3 + 16);
      v6 = v4[1];
      *v4 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 8) = v6;
      v4[1] = 0LL;
      v4 += 2;
    }
    while ( v4 != a2 );
  }
  std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(a3, a3);
  return a3;
}
