/*
 * XREFs of ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18003ACF8
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180046C10 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioEncoderProperties @ 0x18003AF30 (Create_SpatialAudioEncoderProperties.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceProperties(
        SpatialAudioDevicePropertyReader *this,
        int *a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // ebx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  _OWORD *v16; // rax
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-28h] BYREF
  _OWORD *v18; // [rsp+50h] [rbp-18h]
  int v19; // [rsp+90h] [rbp+28h] BYREF
  int v20; // [rsp+98h] [rbp+30h] BYREF
  const char *v21; // [rsp+A0h] [rbp+38h] BYREF
  const char *v22; // [rsp+A8h] [rbp+40h] BYREF

  *a2 = 1;
  *(_OWORD *)pvar = 0LL;
  v18 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
         *((_QWORD *)this + 51),
         &PKEY_SpatialAudio_Metadata_DeviceProperties,
         pvar);
  v8 = v4;
  if ( v4 >= 0 )
  {
    if ( LODWORD(pvar[1]) == 146 && LOWORD(pvar[0]) == 65 )
    {
      v16 = v18;
      *(_OWORD *)((char *)this + 104) = *v18;
      *(_OWORD *)((char *)this + 120) = v16[1];
      *(_OWORD *)((char *)this + 136) = v16[2];
      *(_OWORD *)((char *)this + 152) = v16[3];
      *(_OWORD *)((char *)this + 168) = v16[4];
      *(_OWORD *)((char *)this + 184) = v16[5];
      *(_OWORD *)((char *)this + 200) = v16[6];
      *(_OWORD *)((char *)this + 216) = v16[7];
      *(_OWORD *)((char *)this + 232) = v16[8];
      *((_WORD *)this + 124) = *((_WORD *)v16 + 72);
      if ( *((_DWORD *)this + 26) == 1509949442 )
      {
        *a2 = 0;
        v8 = 0;
      }
    }
    if ( *a2 )
      goto LABEL_4;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v21);
    v11 = Create_SpatialAudioEncoderProperties((char *)this + 108, v10, &v21);
    v8 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 > 2 )
      {
        v20 = 346;
LABEL_17:
        v19 = v11;
        v22 = "SpatialAudioDevicePropertyReader::LoadDeviceProperties";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v12,
          (unsigned int)&unk_1801A3DE9,
          v13,
          v14,
          (__int64)&v22,
          (__int64)&v20,
          (__int64)&v19);
      }
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(const char *, char *))(*(_QWORD *)v21 + 32LL))(v21, (char *)this + 250);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v15 = (__int64)v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_4;
      }
      if ( (unsigned int)dword_1801CC2E8 > 2 )
      {
        v20 = 349;
        goto LABEL_17;
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v21);
    goto LABEL_4;
  }
  if ( (unsigned int)dword_1801CC2E8 > 2 )
  {
    v19 = v4;
    v20 = 327;
    v21 = "SpatialAudioDevicePropertyReader::LoadDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (unsigned int)&unk_1801A3DE9,
      v6,
      v7,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
LABEL_4:
  PropVariantClear(pvar);
  return v8;
}
