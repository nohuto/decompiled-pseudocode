/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006937C
 * Callers:
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180069214 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18010C4C0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x18010C8B0 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x18010D3D0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x18010D520 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x18010D6D0 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180052294 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180052470 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     WPP_SF_qdg @ 0x180086310 (WPP_SF_qdg.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     pow @ 0x1800A8B64 (pow.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  char *v2; // r14
  unsigned int v3; // esi
  double v4; // xmm0_8
  _DWORD *v5; // rbx
  float v6; // xmm6_4
  CVolumeUnit *v7; // rax
  float Wiper; // xmm0_4
  float v9; // xmm1_4
  __int64 v10; // rax
  double v11; // xmm0_8

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids,
      this,
      *((_DWORD *)this + 29));
  }
  v2 = (char *)this + 80;
  v3 = 0;
  if ( !*((_QWORD *)this + 11) )
    goto LABEL_20;
  v4 = pow(10.0, *(float *)(*(_QWORD *)v2 + 4LL) / 20.0);
  *((_DWORD *)this + 28) = 0;
  v5 = WPP_GLOBAL_Control;
  v6 = v4;
  if ( *((_DWORD *)this + 29) )
  {
    while ( 1 )
    {
      if ( v5 != (_DWORD *)&WPP_GLOBAL_Control && (v5[7] & 0x10000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
      {
        v7 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                              (_QWORD *)this + 10,
                              v3);
        Wiper = CVolumeUnit::GetWiper(v7);
        WPP_SF_qdg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17LL,
          &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids,
          this,
          v3,
          Wiper);
        v5 = WPP_GLOBAL_Control;
      }
      if ( (unsigned __int64)v3 >= *((_QWORD *)this + 11) )
        break;
      v9 = pow(10.0, *(float *)(((unsigned __int64)v3 << 6) + *(_QWORD *)v2 + 4) / 20.0);
      if ( v9 > v6 )
      {
        v10 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v3);
        v11 = pow(10.0, *(float *)(v10 + 4) / 20.0);
        *((_DWORD *)this + 28) = v3;
        v5 = WPP_GLOBAL_Control;
        v6 = v11;
      }
      if ( ++v3 >= *((_DWORD *)this + 29) )
        goto LABEL_15;
    }
LABEL_20:
    ATL::AtlThrowImpl(-2147024809);
  }
LABEL_15:
  if ( v5 != (_DWORD *)&WPP_GLOBAL_Control && (v5[7] & 0x10000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
    WPP_SF_qdg(
      *((_QWORD *)v5 + 2),
      18LL,
      &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids,
      this,
      *((_DWORD *)this + 28),
      v6);
}
