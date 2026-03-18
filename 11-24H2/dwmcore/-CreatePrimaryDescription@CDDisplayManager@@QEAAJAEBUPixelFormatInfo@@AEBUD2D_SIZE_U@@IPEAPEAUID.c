/*
 * XREFs of ?CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x1801B5D70
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801B5880 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$MakeAndInitialize@V?$ValueReference@I@@U?$IReference@I@Foundation@Windows@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAU?$IReference@I@Foundation@Windows@@AEAI@Z @ 0x180229AD4 (--$MakeAndInitialize@V-$ValueReference@I@@U-$IReference@I@Foundation@Windows@@AEAI@Details@WRL@M.c)
 *     ??1?$com_ptr_t@V?$AgileHashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$0A@@Internal@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802C1578 (--1-$com_ptr_t@V-$AgileHashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collec.c)
 *     ?GetView@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUIInspectable@@@345@@Z @ 0x1802C39C0 (-GetView@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Founda.c)
 *     ?Insert@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAUIInspectable@@PEAE@Z @ 0x1802C4320 (-Insert@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundat.c)
 *     ?Make@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@SAJAEBU?$DefaultHash@U_GUID@@@2345@AEBU?$DefaultEqualityPredicate@U_GUID@@@2345@PEAPEAV12345@@Z @ 0x1802C4A8C (-Make@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundatio.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C4F00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IMap@U_G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::CreatePrimaryDescription(
        CDDisplayManager *this,
        const struct PixelFormatInfo *a2,
        const struct D2D_SIZE_U *a3,
        int a4,
        struct Windows::Devices::Display::Core::IDisplayPrimaryDescription **a5)
{
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v6; // rcx
  __int64 v7; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  int View; // eax
  int v15; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64, int, int, char, __int64, struct Windows::Devices::Display::Core::IDisplayPrimaryDescription **); // rsi
  int v18; // edx
  int v19; // r10d
  __int64 height; // r9
  __int64 width; // r8
  int v22; // eax
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v23; // rcx
  char v25; // [rsp+38h] [rbp-31h]
  __int64 v26; // [rsp+58h] [rbp-11h] BYREF
  __int64 v27; // [rsp+60h] [rbp-9h] BYREF
  __int64 v28; // [rsp+68h] [rbp-1h] BYREF
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v29; // [rsp+70h] [rbp+7h] BYREF
  __int64 v30; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v31; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v32; // [rsp+C8h] [rbp+5Fh] BYREF
  int v33; // [rsp+E0h] [rbp+77h] BYREF

  v33 = a4;
  v32 = (__int64)this;
  v6 = 0LL;
  v7 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( !a4 )
    goto LABEL_8;
  v26 = 0LL;
  LOBYTE(v32) = 0;
  v28 = 0LL;
  v27 = 0LL;
  v9 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Make(
         0LL,
         a2,
         &v27);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x23Du, 0LL);
    goto LABEL_14;
  }
  v11 = Microsoft::WRL::Details::MakeAndInitialize<ValueReference<unsigned int>,Windows::Foundation::IReference<unsigned int>,unsigned int &>(
          &v26,
          &v33);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x240u, 0LL);
    goto LABEL_14;
  }
  v12 = v27;
  v31 = DisplayPrimaryDescription_Usage;
  v13 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Insert(
          v27,
          &v31,
          v26,
          &v32);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x241u, 0LL);
    goto LABEL_14;
  }
  View = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::GetView(
           v12,
           &v28);
  v10 = View;
  if ( View < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, View, 0x242u, 0LL);
LABEL_14:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
    wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>,wil::err_returncode_policy>(&v27);
    goto LABEL_21;
  }
  v15 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::QueryInterface(
          v12,
          &GUID_f3b20528_e3b3_5331_b2d0_0c2623aee785,
          &v30);
  v10 = v15;
  if ( v15 >= 0 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
    wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>,wil::err_returncode_policy>(&v27);
    v6 = v29;
    v7 = v30;
LABEL_8:
    v16 = qword_1803FAB88;
    v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int, char, __int64, struct Windows::Devices::Display::Core::IDisplayPrimaryDescription **))(*(_QWORD *)qword_1803FAB88 + 48LL);
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *))(*(_QWORD *)v6 + 16LL))(v6);
    v18 = *((_DWORD *)a2 + 2);
    v19 = *(_DWORD *)a2;
    height = a3->height;
    width = a3->width;
    v32 = 1LL;
    v25 = 0;
    v22 = v17(v16, v7, width, height, v19, v18, v25, 1LL, &v29);
    v10 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x24Fu, 0LL);
    }
    else
    {
      v23 = v29;
      v29 = 0LL;
      *a5 = v23;
    }
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x243u, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>,wil::err_returncode_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileHashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>,wil::err_returncode_policy>(&v27);
  v7 = v30;
LABEL_19:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_21:
  if ( v29 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *))(*(_QWORD *)v29 + 16LL))(v29);
  return v10;
}
