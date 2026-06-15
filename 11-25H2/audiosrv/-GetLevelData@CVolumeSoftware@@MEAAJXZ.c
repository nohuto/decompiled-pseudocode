/*
 * XREFs of ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x18010C8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180051A48 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180051A98 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006937C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800784A4 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180081A98 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180084C3C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 */

__int64 __fastcall CVolumeSoftware::GetLevelData(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rbx
  unsigned int *v2; // r14
  int v4; // edi
  __int64 *v5; // rdx
  unsigned int v6; // esi
  float v7; // xmm7_4
  __int64 v8; // xmm8_8
  int v9; // xmm9_4
  float v10; // xmm10_4
  __int64 v11; // rdx
  float v12; // xmm3_4
  int *v13; // rbx
  __int64 v14; // [rsp+0h] [rbp-F8h] BYREF
  ATL::CAtlException *v15; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v16[4]; // [rsp+40h] [rbp-B8h] BYREF
  float v17; // [rsp+44h] [rbp-B4h]
  float v18; // [rsp+48h] [rbp-B0h]
  float v19; // [rsp+54h] [rbp-A4h]
  char *v21; // [rsp+118h] [rbp+20h]

  v1 = this;
  v2 = (unsigned int *)((char *)this + 116);
  v21 = (char *)this + 116;
  if ( !*((_DWORD *)this + 29) )
    return 0LL;
  v4 = 0;
  if ( (int)CVolumeSoftware::LoadVolumeState(this) < 0 && (int)CVolumeSoftware::LoadDefaultVolumeForEndpoint(v1) < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x31u,
        (__int64)&WPP_39683fa90ec33421f15b53210ac19d77_Traceguids,
        *((const wchar_t **)v1 + 7));
    }
    v6 = 0;
    v7 = FLOAT_30_0;
    v8 = *(_QWORD *)&DOUBLE_1_75;
    v9 = LODWORD(FLOAT_1_5);
    v10 = FLOAT_N96_0;
    while ( v6 < *v2 )
    {
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v16, (__int64)v5);
      if ( *((_DWORD *)v1 + 74) == 4 )
        v12 = v7;
      else
        v12 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v16, v11, v10, v12, v9, v8);
      v17 = fmaxf(fminf(0.0, v19), v18);
      v4 = 0;
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v1 + 10, v6, (__int64)v16);
      }
      catch ( ATL::CAtlException *v15 )
      {
        v5 = &v14;
        v13 = (int *)v15;
        if ( *(_DWORD *)v15 == -1073741571 )
          _o__resetstkoflw();
        v4 = *v13;
        if ( *v13 < 0 )
          goto LABEL_19;
        v1 = this;
        v7 = FLOAT_30_0;
        v8 = *(_QWORD *)&DOUBLE_1_75;
        v9 = LODWORD(FLOAT_1_5);
        v10 = FLOAT_N96_0;
        v2 = (unsigned int *)v21;
      }
      ++v6;
    }
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v4 < 0 )
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::GetLevelData", 1957, v4);
  return (unsigned int)v4;
}
