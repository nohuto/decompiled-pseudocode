/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800776E0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180009C2C (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x18001C2C0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002DFA0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x18006DBD8 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?EnsurePropertyStore@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x1800C15F0 (-EnsurePropertyStore@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1800C23D0 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh@@@details@wil@@QEAA_NXZ @ 0x1800C3030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPrope.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int EndpointCharacteristicsDescriptor; // eax
  int MixFormat; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // rax
  void *v12; // rcx
  __int64 i; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  int SessionConfiguration; // eax
  struct _GUID v18; // [rsp+40h] [rbp-40h] BYREF
  EffectPack *v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h]
  unsigned __int16 **v21; // [rsp+68h] [rbp-18h] BYREF
  struct tWAVEFORMATEX *v22; // [rsp+70h] [rbp-10h] BYREF
  char v23; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned __int16 *v25; // [rsp+A0h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+B0h] [rbp+30h] BYREF

  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 584));
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        Buffer,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v19);
  MixFormat = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor >= 0 )
  {
    v25 = 0LL;
    v21 = &v25;
    v22 = 0LL;
    v23 = 1;
    v18 = GUID_00000000_0000_0000_0000_000000000000;
    MixFormat = EffectPack::GetMixFormat(v19[1], eHostProcessConnector, &v18, &v22);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v21);
    if ( MixFormat < 0 )
    {
      v7 = (unsigned int)MixFormat;
      v8 = 1568LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)v7);
LABEL_6:
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v25,
        0LL);
      goto LABEL_20;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v26 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
    v9 = v25[1];
    *((_DWORD *)this + 222) = v9;
    v10 = 4 * v9;
    if ( !is_mul_ok(v9, 4uLL) )
      v10 = -1LL;
    v11 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = (void *)*((_QWORD *)this + 112);
    *((_QWORD *)this + 112) = v11;
    if ( v12 )
      operator delete(v12);
    if ( !*((_QWORD *)this + 112) )
    {
      MixFormat = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x628,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
      goto LABEL_6;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 222); i = (unsigned int)(i + 1) )
      *(_DWORD *)(*((_QWORD *)this + 112) + 4 * i) = 1065353216;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
    *((_BYTE *)this + 920) = (a2 & 2) != 0;
    if ( *((_DWORD *)v19[0] + 16) == 3 )
      *((_BYTE *)this + 920) = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableAudioSessionPropertyStoreRefresh>::GetImpl'::`2'::impl) )
    {
      CPerStreamVolumeAudioSession::EnsurePropertyStore(this);
    }
    else if ( *((_BYTE *)this + 920) )
    {
      v15 = *((_QWORD *)this + 116);
      *((_QWORD *)this + 116) = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v16 = CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(
              (const void **)this,
              (struct IPropertyStore **)this + 116);
      if ( wil::details::in1diag3::Log_IfFailedWithExpected(
             retaddr,
             (void *)0x64E,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
             (const char *)v16,
             2,
             0x80070002,
             -2147024891) >= 0 )
      {
        if ( *((_QWORD *)this + 116) )
        {
          SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
          MixFormat = SessionConfiguration;
          if ( SessionConfiguration < 0 )
          {
            v7 = (unsigned int)SessionConfiguration;
            v8 = 1618LL;
            goto LABEL_5;
          }
        }
      }
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v25,
      0LL);
    MixFormat = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x616,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
LABEL_20:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v19);
  return (unsigned int)MixFormat;
}
