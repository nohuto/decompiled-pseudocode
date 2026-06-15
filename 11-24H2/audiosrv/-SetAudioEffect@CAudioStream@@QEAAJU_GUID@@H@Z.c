/*
 * XREFs of ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800C9A98
 * Callers:
 *     ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x18010DE20 (-SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180051914 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?_Tidy@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ @ 0x1800A2F28 (-_Tidy@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ.c)
 *     ?UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800CA7CC (-UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::SetAudioEffect(CAudioStream *this, struct _GUID *a2, int a3)
{
  char *v5; // r12
  const unsigned __int16 *v6; // rax
  int EndpointCharacteristicsDescriptor; // eax
  unsigned int v8; // ebx
  char *v9; // r13
  __int64 (__fastcall *v10)(char *, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 **v17; // rsi
  __int64 **v18; // r14
  __int128 v19; // rax
  int v20; // r12d
  unsigned int v21; // r13d
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(struct IAudioResourceManager *, __int128 *, __int64, char *); // rbx
  __int64 v26; // rax
  __int64 v28; // [rsp+40h] [rbp-49h] BYREF
  int v29; // [rsp+48h] [rbp-41h]
  __int128 v30; // [rsp+50h] [rbp-39h] BYREF
  __int64 v31; // [rsp+60h] [rbp-29h]
  struct _GUID v32; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp-9h] BYREF
  __int64 v34; // [rsp+88h] [rbp-1h] BYREF
  __int128 v35; // [rsp+90h] [rbp+7h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v29 = a3;
  v35 = 0LL;
  v36 = 0LL;
  v5 = (char *)this + 16;
  v6 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        v6,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)&v35);
  v8 = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor >= 0 )
  {
    v28 = 0LL;
    v9 = (char *)this + 8;
    v10 = *(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 1) + 120LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v28);
    v11 = v10((char *)this + 8, &v28);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7DE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v11);
LABEL_5:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
      goto LABEL_30;
    }
    v30 = 0LL;
    v31 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v28 + 456LL))(v28, &v30);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v14 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v14 > 4u )
      {
        v33 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)&v30 + 1) - v30) >> 3);
        v34 = (__int64)(*((_QWORD *)this + 30) - *((_QWORD *)this + 29)) >> 3;
        *(_QWORD *)&v32.Data1 = *((_QWORD *)this + 52);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)v14,
          byte_1801AAAAC,
          v15,
          v16,
          (__int64)&v32,
          (__int64)&v34,
          (__int64)&v33);
      }
      v17 = (__int64 **)*((_QWORD *)this + 29);
      v18 = (__int64 **)*((_QWORD *)this + 30);
      if ( v17 == v18 )
      {
        v19 = v30;
        if ( (_QWORD)v30 == *((_QWORD *)&v30 + 1) )
        {
          std::vector<AudioEffectInternal>::_Tidy((__int64)&v30);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
          v8 = -2004287423;
          goto LABEL_30;
        }
        v8 = -2004287423;
      }
      else
      {
        v20 = -2004287423;
        v21 = v29;
        do
        {
          v22 = *v17;
          v23 = **v17;
          v32 = *a2;
          v8 = (*(unsigned int (__fastcall **)(__int64 *, struct _GUID *, _QWORD))(v23 + 64))(v22, &v32, v21) != 0
             ? v20
             : 0;
          ++v17;
          v20 = v8;
        }
        while ( v17 != v18 );
        v19 = v30;
        v9 = (char *)this + 8;
        v5 = (char *)this + 16;
      }
      while ( (_QWORD)v19 != *((_QWORD *)&v19 + 1) )
      {
        v24 = *(_QWORD *)v19 - *(_QWORD *)&a2->Data1;
        if ( *(_QWORD *)v19 == *(_QWORD *)&a2->Data1 )
          v24 = *(_QWORD *)(v19 + 8) - *(_QWORD *)a2->Data4;
        if ( !v24 )
          break;
        *(_QWORD *)&v19 = v19 + 24;
      }
      if ( (_QWORD)v19 == *((_QWORD *)&v19 + 1) )
        goto LABEL_9;
      if ( !*(_DWORD *)(v19 + 16) )
      {
        std::vector<AudioEffectInternal>::_Tidy((__int64)&v30);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        v8 = -2004287422;
        goto LABEL_30;
      }
      v32 = *a2;
      CAudioStream::UpdatePMPStreamingEffectsOverride(this, &v32, v29);
      v25 = *(__int64 (__fastcall **)(struct IAudioResourceManager *, __int128 *, __int64, char *))(*(_QWORD *)g_AudioResourceManager
                                                                                                  + 64LL);
      v26 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))(v5);
      v12 = v25(g_AudioResourceManager, &v35, v26, v9);
      v8 = v12;
      if ( v12 >= 0 )
      {
        std::vector<AudioEffectInternal>::_Tidy((__int64)&v30);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
        v8 = 0;
        goto LABEL_30;
      }
      v13 = 2059LL;
    }
    else
    {
      v13 = 2016LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v12);
LABEL_9:
    std::vector<AudioEffectInternal>::_Tidy((__int64)&v30);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7DA,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
LABEL_30:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v35);
  return v8;
}
