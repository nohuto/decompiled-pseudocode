/*
 * XREFs of ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180071B0C
 * Callers:
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180085A90 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1801133B0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?InitializeAPOs_old@CVolumeSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180113D74 (-InitializeAPOs_old@CVolumeSoftware@@QEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180114144 (-LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18011547C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // [rsp+38h] [rbp+10h]

  v6 = a1[1];
  v11 = v6;
  if ( a2 >= v6 && !(unsigned __int8)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(a1, a2 + 1) )
    ATL::AtlThrowImpl(-2147024882);
  try
  {
    v8 = *a1 + (a2 << 6);
    *(_DWORD *)v8 = *(_DWORD *)a3;
    *(_QWORD *)(v8 + 56) = *(_QWORD *)(a3 + 56);
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(a3 + 4);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(v8 + 40) = *(_QWORD *)(a3 + 40);
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(a3 + 48);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(v8 + 12) = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(a3 + 16);
    result = *(unsigned int *)(a3 + 20);
    *(_DWORD *)(v8 + 20) = result;
  }
  catch ( ... )
  {
    if ( a1[1] != v11 )
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(a1, v11);
    throw;
  }
  return result;
}
