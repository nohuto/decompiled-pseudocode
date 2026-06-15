/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003C990
 * Callers:
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003C4EC (Create_SpatialAudioDevicePropertyReader.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180038C7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x18003BE54 (Create_SpatialAudioDeviceStateReader.c)
 *     Create_SpatialAudioPositionCalc @ 0x18003C724 (Create_SpatialAudioPositionCalc.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x180051EE4 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SpatialAudioDevicePropertyReader::RuntimeClassInitialize(
        SpatialAudioDevicePropertyReader *this,
        unsigned __int16 *a2,
        struct IPropertyStore *a3,
        __int64 a4)
{
  __int64 v7; // rcx
  int SpatialAudioDeviceStateReader; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  HRESULT v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  LPVOID v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  LPVOID v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  LPVOID v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  LPVOID v36; // rcx
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64, _QWORD, char *); // r14
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  LPVOID v43; // rcx
  __int64 v44; // rcx
  LPVOID v45; // rcx
  __int64 v46; // rcx
  int SpatialAudioPositionCalc; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v52; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v53; // [rsp+44h] [rbp-55h] BYREF
  __int64 v54; // [rsp+48h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-29h] BYREF
  __int128 v58; // [rsp+80h] [rbp-19h]
  __int128 v59; // [rsp+90h] [rbp-9h]
  __int128 v60; // [rsp+A0h] [rbp+7h]
  __int64 *v61; // [rsp+B0h] [rbp+17h]
  __int64 v62; // [rsp+B8h] [rbp+1Fh]

  v7 = *((_QWORD *)this + 52);
  if ( v7 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  SpatialAudioDeviceStateReader = Create_SpatialAudioDeviceStateReader(a2, a3, (_QWORD *)this + 52, a4);
  v9 = SpatialAudioDeviceStateReader;
  if ( SpatialAudioDeviceStateReader < 0 )
  {
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      LODWORD(v54) = SpatialAudioDeviceStateReader;
      v52 = 210;
      v61 = &v54;
      v62 = 4LL;
      *(_QWORD *)&v60 = &v52;
      *((_QWORD *)&v60 + 1) = 4LL;
      *(_QWORD *)&v59 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      *((_QWORD *)&v59 + 1) = 57LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 2;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = (ULONGLONG)off_1801D82F0;
      UserData.Size = *(unsigned __int16 *)off_1801D82F0;
      UserData.Reserved = 2;
      *(_QWORD *)&v58 = &unk_1801AED75;
      *((_QWORD *)&v58 + 1) = 0x100000026LL;
      v53 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    return v9;
  }
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((char *)this + 408, a3);
    goto LABEL_56;
  }
  ppv = 0LL;
  v54 = 0LL;
  v13 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
  v9 = v13;
  if ( v13 < 0 )
  {
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      v53 = v13;
      v52 = 222;
      *(_QWORD *)&EventDescriptor.Id = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v14,
        (unsigned __int8 *)&unk_1801AED6A,
        v15,
        v16,
        (const CHAR **)&EventDescriptor,
        (__int64)&v52,
        (__int64)&v53);
    }
    v17 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v9;
  }
  UserData = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  LODWORD(v62) = 0;
  WORD2(v62) = 0;
  v19 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, (LPOLESTR)&UserData, 39);
  v9 = v19;
  if ( v19 < 0 )
  {
    if ( (unsigned int)dword_1801D82E8 > 2 )
    {
      v53 = v19;
      v52 = 226;
      *(_QWORD *)&EventDescriptor.Id = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v20,
        (unsigned __int8 *)&unk_1801AED6A,
        v21,
        v22,
        (const CHAR **)&EventDescriptor,
        (__int64)&v52,
        (__int64)&v53);
    }
    v23 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return v9;
  }
  if ( a2 && (unsigned int)_o__wcsicmp(a2, &UserData) )
  {
    v25 = (*(__int64 (__fastcall **)(LPVOID, unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v54);
    v9 = v25;
    if ( v25 < 0 )
    {
      if ( (unsigned int)dword_1801D82E8 > 2 )
      {
        v53 = v25;
        v52 = 236;
        *(_QWORD *)&EventDescriptor.Id = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v26,
          (unsigned __int8 *)&unk_1801AED6A,
          v27,
          v28,
          (const CHAR **)&EventDescriptor,
          (__int64)&v52,
          (__int64)&v53);
      }
      v29 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v30 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v30 + 16LL))(v30);
      }
      return v9;
    }
  }
  else
  {
    v31 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 1LL, &v54);
    v9 = v31;
    if ( v31 < 0 )
    {
      if ( (unsigned int)dword_1801D82E8 > 2 )
      {
        v53 = v31;
        v52 = 231;
        *(_QWORD *)&EventDescriptor.Id = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v32,
          (unsigned __int8 *)&unk_1801AED6A,
          v33,
          v34,
          (const CHAR **)&EventDescriptor,
          (__int64)&v52,
          (__int64)&v53);
      }
      v35 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v36 + 16LL))(v36);
      }
      return v9;
    }
  }
  v37 = v54;
  v38 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v54 + 32LL);
  v39 = *((_QWORD *)this + 51);
  if ( v39 )
  {
    *((_QWORD *)this + 51) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  v40 = v38(v37, 0LL, (char *)this + 408);
  v9 = v40;
  if ( v40 >= 0 )
  {
    v44 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v45 + 16LL))(v45);
    }
LABEL_56:
    v46 = *((_QWORD *)this + 50);
    if ( v46 )
    {
      *((_QWORD *)this + 50) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc((_QWORD *)this + 50, v10, v11, v12);
    v9 = SpatialAudioPositionCalc;
    if ( SpatialAudioPositionCalc >= 0 )
    {
      SpatialAudioPositionCalc = (*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)this + 24LL))(this);
      v9 = SpatialAudioPositionCalc;
      if ( SpatialAudioPositionCalc >= 0 || (unsigned int)dword_1801D82E8 <= 2 )
        return v9;
      v52 = 249;
    }
    else
    {
      if ( (unsigned int)dword_1801D82E8 <= 2 )
        return v9;
      v52 = 245;
    }
    v53 = SpatialAudioPositionCalc;
    *(_QWORD *)&EventDescriptor.Id = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v48,
      (unsigned __int8 *)&unk_1801AED6A,
      v49,
      v50,
      (const CHAR **)&EventDescriptor,
      (__int64)&v52,
      (__int64)&v53);
    return v9;
  }
  if ( (unsigned int)dword_1801D82E8 > 2 )
  {
    v53 = v40;
    v52 = 240;
    *(_QWORD *)&EventDescriptor.Id = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v41,
      (unsigned __int8 *)&unk_1801AED6A,
      v11,
      v12,
      (const CHAR **)&EventDescriptor,
      (__int64)&v52,
      (__int64)&v53);
  }
  v42 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v43 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v43 + 16LL))(v43);
  }
  return v9;
}
