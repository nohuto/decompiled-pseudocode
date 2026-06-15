/*
 * XREFs of ?_Change_array@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@AEAAXQEAUSpatialAudioAppDetails@@_K1@Z @ 0x18015F594
 * Callers:
 *     ??$_Emplace_reallocate@USpatialAudioAppDetails@@@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@AEAAPEAUSpatialAudioAppDetails@@QEAU2@$$QEAU2@@Z @ 0x18014F2BC (--$_Emplace_reallocate@USpatialAudioAppDetails@@@-$vector@USpatialAudioAppDetails@@V-$allocator@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetails@@QEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x18014F158 (--$_Destroy_range@V-$allocator@USpatialAudioAppDetails@@@std@@@std@@YAXPEAUSpatialAudioAppDetail.c)
 */

void __fastcall std::vector<SpatialAudioAppDetails>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx

  v6 = *(char **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<SpatialAudioAppDetails>>(
      (SpatialAudioAppDetails *)v6,
      *(SpatialAudioAppDetails **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
