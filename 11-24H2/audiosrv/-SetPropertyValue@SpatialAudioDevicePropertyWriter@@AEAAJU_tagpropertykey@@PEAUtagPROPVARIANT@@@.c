/*
 * XREFs of ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012BD68
 * Callers:
 *     ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x18012AF70 (-AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryDat.c)
 *     ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18012B440 (-ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 *     ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x18012B930 (-SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z.c)
 *     ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x18012BA60 (-SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialA.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z @ 0x18012BDB4 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJW4SignalingKeySource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetPropertyValue(
        SpatialAudioDevicePropertyWriter *this,
        struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  __int64 v3; // r10

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, char *, _QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v3 + 96LL))(
             v3,
             (char *)this + 112,
             0LL,
             a2,
             a3);
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *, struct _tagpropertykey *))(**((_QWORD **)this + 11) + 48LL))(
             *((_QWORD *)this + 11),
             a2,
             a3,
             a2);
}
