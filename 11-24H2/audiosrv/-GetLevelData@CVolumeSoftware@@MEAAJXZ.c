/*
 * XREFs of ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180113850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180086208 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180114144 (-LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 */

__int64 __fastcall CVolumeSoftware::GetLevelData(CVolumeSoftware *this)
{
  int VolumeDefaultsForEndpoint; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 29) )
  {
    VolumeDefaultsForEndpoint = CVolumeSoftware::LoadVolumeDefaultsForEndpoint(this);
    v3 = VolumeDefaultsForEndpoint;
    if ( VolumeDefaultsForEndpoint < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)VolumeDefaultsForEndpoint);
      return v3;
    }
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  }
  return 0LL;
}
