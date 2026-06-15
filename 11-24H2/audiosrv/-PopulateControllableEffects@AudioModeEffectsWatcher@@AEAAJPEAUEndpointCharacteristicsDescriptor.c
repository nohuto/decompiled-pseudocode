/*
 * XREFs of ?PopulateControllableEffects@AudioModeEffectsWatcher@@AEAAJPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180028A68
 * Callers:
 *     ?RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@@Z @ 0x1800288E4 (-RuntimeClassInitialize@AudioModeEffectsWatcher@@QEAAJPEAUEndpointCharacteristicsDescriptor@@U_G.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x180001644 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlgWriteTem.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180033CA0 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall AudioModeEffectsWatcher::PopulateControllableEffects(
        AudioModeEffectsWatcher *this,
        struct EndpointCharacteristicsDescriptor *a2)
{
  EffectPack *v3; // rdi
  struct ICompositeSystemEffect **v4; // rsi
  __int64 v5; // rcx
  int ModeEffect; // eax
  unsigned int v7; // edi
  __int64 *v9; // rcx
  __int64 *v10; // rdx
  struct ICompositeSystemEffect *v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  _QWORD *v14; // rdx
  _DWORD *v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r9
  struct IAudioProcessingObject *v19; // [rsp+40h] [rbp-98h] BYREF
  __int64 v20; // [rsp+48h] [rbp-90h] BYREF
  __int64 v21; // [rsp+50h] [rbp-88h] BYREF
  const WCHAR *v22; // [rsp+58h] [rbp-80h] BYREF
  struct _GUID v23; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v24[7]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD *v25; // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v3 = (EffectPack *)*((_QWORD *)a2 + 1);
  v19 = 0LL;
  v4 = (struct ICompositeSystemEffect **)((char *)this + 80);
  v5 = *((_QWORD *)this + 10);
  *v4 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v23 = (struct _GUID)*((_OWORD *)this + 3);
  ModeEffect = EffectPack::GetModeEffect(v3, &v23, 1, eHostProcessConnector, v4, &v19, 0LL);
  v7 = ModeEffect;
  if ( ModeEffect >= 0 )
  {
    v9 = (__int64 *)*((_QWORD *)this + 11);
    v10 = (__int64 *)*((_QWORD *)this + 12);
    if ( v9 != v10 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(v9, v10);
      *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
    }
    v11 = *v4;
    v12 = *(_QWORD *)*v4;
    v24[0] = off_18017AC48;
    v24[1] = this;
    v25 = v24;
    v13 = (*(__int64 (__fastcall **)(struct ICompositeSystemEffect *, _QWORD *))(v12 + 40))(v11, v24);
    if ( v25 )
    {
      v14 = v24;
      LOBYTE(v14) = v25 != v24;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v25 + 32LL))(v25, v14);
    }
    if ( v13 >= 0 )
    {
      v15 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v15 > 4u && (unsigned __int8)tlgKeywordOn(v15, 256LL) )
      {
        v20 = (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
        v21 = (__int64)this + 48;
        v22 = (const WCHAR *)*((_QWORD *)this + 5);
        *(_QWORD *)&v23.Data1 = *v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
          v16,
          (int)&unk_1801A9083,
          v17,
          v18,
          (__int64)&v23,
          &v22,
          &v21,
          (__int64)&v20);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiomodeeffectsdiscovery.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
      return (unsigned int)v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiomodeeffectsdiscovery.cpp",
      (const char *)(unsigned int)ModeEffect);
    if ( v19 )
      ((void (__fastcall *)(struct IAudioProcessingObject *, struct IAudioProcessingObjectVtbl *))v19->lpVtbl->Release)(
        v19,
        v19->lpVtbl);
    return v7;
  }
}
