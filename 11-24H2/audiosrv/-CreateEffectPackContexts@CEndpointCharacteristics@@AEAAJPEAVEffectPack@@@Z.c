/*
 * XREFs of ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x1801333B0
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x18008D140 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B6890 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?OpenAudioSystemEffectsPropertyStore@EffectPack@@SAJPEAUHKEY__@@IKPEAU_GUID@@PEAPEAUIAudioSystemEffectsPropertyStore@@@Z @ 0x180144EB0 (-OpenAudioSystemEffectsPropertyStore@EffectPack@@SAJPEAUHKEY__@@IKPEAU_GUID@@PEAPEAUIAudioSystem.c)
 *     ?OpenAudioSystemEffectsPropertyStoreRegKey@EffectPack@@QEAAJIKPEAPEAUHKEY__@@@Z @ 0x180145068 (-OpenAudioSystemEffectsPropertyStoreRegKey@EffectPack@@QEAAJIKPEAPEAUHKEY__@@@Z.c)
 *     ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x1801665D4 (-CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::CreateEffectPackContexts(
        CEndpointCharacteristics *this,
        struct EffectPack *a2,
        unsigned int a3)
{
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  HKEY v9; // rbx
  DWORD i; // r14d
  int v11; // eax
  int v12; // edi
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 **); // rcx
  __int64 (__fastcall **v15)(_QWORD, GUID *, __int64 **); // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  struct IAudioSystemEffectsPropertyStore *v25; // [rsp+38h] [rbp-28h] BYREF
  HKEY hKey[2]; // [rsp+40h] [rbp-20h] BYREF
  struct _GUID v27; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IAudioSystemEffectsPropertyStore *v29; // [rsp+A0h] [rbp+40h] BYREF
  __int64 *v30; // [rsp+A8h] [rbp+48h] BYREF

  v5 = 0;
LABEL_2:
  hKey[0] = 0LL;
  v6 = EffectPack::OpenAudioSystemEffectsPropertyStoreRegKey(a2, v5, a3, hKey);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = hKey[0];
    if ( !hKey[0] )
    {
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
      return 0LL;
    }
    for ( i = 0; ; ++i )
    {
      v27 = GUID_00000000_0000_0000_0000_000000000000;
      v29 = 0LL;
      v11 = EffectPack::OpenAudioSystemEffectsPropertyStore(v9, i, v7, &v27, &v29);
      v12 = v11;
      if ( v11 < 0 )
        break;
      if ( !v29 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
        ++v5;
        goto LABEL_2;
      }
      v24 = 0LL;
      v13 = (**(__int64 (__fastcall ***)(struct IAudioSystemEffectsPropertyStore *, GUID *, __int64 *))v29)(
              v29,
              &GUID_13dfcc0a_15ea_4b9e_a5a6_cc1e5c0bb317,
              &v24);
      v12 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6C8,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_24;
      }
      v30 = 0LL;
      v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 5);
      v15 = *v14;
      v30 = 0LL;
      v16 = (*v15)(v14, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v30);
      v12 = v16;
      if ( v16 < 0 )
      {
        v21 = (unsigned int)v16;
        v22 = 1739LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v21);
        goto LABEL_22;
      }
      if ( !v30 )
      {
        v12 = -2147418113;
        v21 = 2147549183LL;
        v22 = 1740LL;
        goto LABEL_21;
      }
      v25 = 0LL;
      v17 = *v30;
      v25 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct _GUID *, struct IAudioSystemEffectsPropertyStore **))(v17 + 144))(
              v30,
              2LL,
              &v27,
              &v25);
      v12 = v18;
      if ( v18 < 0 )
      {
        v19 = (unsigned int)v18;
        v20 = 1743LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v19);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
LABEL_22:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
LABEL_24:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
        goto LABEL_26;
      }
      if ( !v25 )
      {
        v12 = -2147024894;
        v19 = 2147942402LL;
        v20 = 1744LL;
        goto LABEL_18;
      }
      v12 = CopyAudioSystemEffectsProperties(v25, v29);
      if ( v12 < 0 )
      {
        v19 = (unsigned int)v12;
        v20 = 1746LL;
        goto LABEL_18;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C0,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11);
LABEL_26:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
    goto LABEL_31;
  }
  if ( v6 != -2147024894 && v6 != -536870396 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B3,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v6);
    v12 = v8;
LABEL_31:
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
    return (unsigned int)v12;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
  return v8;
}
