/*
 * XREFs of ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180046C10
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18003ACF8 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ @ 0x180046E58 (-CleanUp@SpatialAudioDevicePropertyReader@@AEAAXXZ.c)
 *     ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180046EF0 (-AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180047180 (-LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x1800476EC (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 *     ?GetStaticMaskPC@SpatialAudio@@YA?AW4AudioObjectType@@AEBU_GUID@@@Z @ 0x1800A6484 (-GetStaticMaskPC@SpatialAudio@@YA-AW4AudioObjectType@@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::ReloadProperties(SpatialAudioDevicePropertyReader *this)
{
  int DeviceSettings; // eax
  const struct _GUID *v3; // rdx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const struct _GUID *v7; // rdx
  unsigned __int16 MaxDynamicObjectCountPC; // ax
  __int16 v9; // ax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int PositionTable; // eax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // ebx
  const char *v23; // [rsp+40h] [rbp-10h] BYREF
  int v24; // [rsp+78h] [rbp+28h] BYREF
  int v25; // [rsp+80h] [rbp+30h] BYREF
  const char *v26; // [rsp+88h] [rbp+38h] BYREF

  v24 = 1;
  SpatialAudioDevicePropertyReader::CleanUp(this);
  DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceProperties(this, &v24);
  if ( DeviceSettings < 0 )
  {
    if ( (unsigned int)dword_1801CC2E8 <= 2 )
      goto LABEL_11;
    LODWORD(v26) = 286;
    goto LABEL_10;
  }
  DeviceSettings = SpatialAudioDevicePropertyReader::LoadDeviceSettings(this);
  if ( DeviceSettings < 0 )
  {
    if ( (unsigned int)dword_1801CC2E8 <= 2 )
      goto LABEL_11;
    LODWORD(v26) = 290;
    goto LABEL_10;
  }
  DeviceSettings = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 24LL))(*((_QWORD *)this + 52));
  if ( DeviceSettings < 0 && (unsigned int)dword_1801CC2E8 > 2 )
  {
    LODWORD(v26) = 293;
LABEL_10:
    v25 = DeviceSettings;
    v23 = "SpatialAudioDevicePropertyReader::ReloadProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (unsigned int)&unk_1801A3DE9,
      v5,
      v6,
      (__int64)&v23,
      (__int64)&v26,
      (__int64)&v25);
  }
LABEL_11:
  if ( v24 )
  {
    *(_OWORD *)((char *)this + 108) = MULTICHANNEL_SPATIAL_ENCODER;
    *((_DWORD *)this + 31) = SpatialAudio::GetStaticMaskPC((SpatialAudioDevicePropertyReader *)((char *)this + 108), v3);
    MaxDynamicObjectCountPC = SpatialAudio::GetMaxDynamicObjectCountPC(
                                (SpatialAudioDevicePropertyReader *)((char *)this + 108),
                                v7);
    *((_DWORD *)this + 32) = 0;
    *(_OWORD *)((char *)this + 134) = xmmword_180185B10;
    *((_WORD *)this + 66) = MaxDynamicObjectCountPC;
    *(_OWORD *)((char *)this + 150) = xmmword_180185B20;
    *(_OWORD *)((char *)this + 166) = xmmword_180185B30;
    *(_OWORD *)((char *)this + 182) = xmmword_180185B40;
    *(_OWORD *)((char *)this + 198) = xmmword_180185B50;
    *(_OWORD *)((char *)this + 214) = xmmword_180185B60;
    *(_OWORD *)((char *)this + 230) = xmmword_180185B70;
    *(_DWORD *)((char *)this + 246) = 0;
    v9 = *((_WORD *)this + 124);
    v10 = *(_OWORD *)((char *)this + 120);
    *(_OWORD *)((char *)this + 250) = *(_OWORD *)((char *)this + 104);
    v11 = *(_OWORD *)((char *)this + 136);
    *(_OWORD *)((char *)this + 266) = v10;
    v12 = *(_OWORD *)((char *)this + 152);
    *(_OWORD *)((char *)this + 282) = v11;
    v13 = *(_OWORD *)((char *)this + 168);
    *(_OWORD *)((char *)this + 298) = v12;
    v14 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 314) = v13;
    v15 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 330) = v14;
    v16 = *(_OWORD *)((char *)this + 232);
    *(_OWORD *)((char *)this + 346) = v15;
    *(_OWORD *)((char *)this + 362) = *(_OWORD *)((char *)this + 216);
    *(_OWORD *)((char *)this + 378) = v16;
    *((_WORD *)this + 197) = v9;
  }
  PositionTable = SpatialAudioDevicePropertyReader::AllocatePositionTable(this);
  v21 = PositionTable;
  if ( PositionTable < 0 && (unsigned int)dword_1801CC2E8 > 2 )
  {
    v24 = PositionTable;
    v25 = 311;
    v26 = "SpatialAudioDevicePropertyReader::ReloadProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      (unsigned int)&unk_1801A3DE9,
      v19,
      v20,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
  }
  return v21;
}
