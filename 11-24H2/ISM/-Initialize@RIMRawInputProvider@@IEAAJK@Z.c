/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18007AA60
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18007A960 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Initialize@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18000AD8C (-Initialize@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x180049500 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180049740 (-Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPE.c)
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800499E8 (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18004A474 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x180083504 (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A76F4 (-InternalRelease@-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB118 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA.c)
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x1800D5AE8 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DA098 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DB210 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DC6B0 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DCA8C (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DD270 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DE3F0 (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 *     ?Create@HapticDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DF970 (-Create@HapticDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, int a2)
{
  struct IMessageSession **v2; // r12
  int v5; // ebx
  const char *v6; // r9
  __int64 v7; // rdx
  struct IRawInputClient **v9; // rsi
  int (*v10)(void *, unsigned int, void *); // r8
  struct IRawInputClient **v11; // rbx
  int (*v12)(void *, unsigned int, void *); // r8
  int v13; // esi
  int (*v14)(void *, unsigned int, void *); // r8
  __int64 v15; // rdx
  int (*v16)(void *, unsigned int, void *); // r8
  int (*v17)(void *, unsigned int, void *); // r8
  int (*v18)(void *, unsigned int, void *); // r8
  struct IRawInputClient **v19; // r15
  void **v20; // r15
  int (*v21)(void *, unsigned int, void *); // r8
  struct IRawInputClient **v22; // rsi
  int (*v23)(void *, unsigned int, void *); // r8
  int (*v24)(void *, unsigned int, void *); // r8
  int (*v25)(void *, unsigned int, void *); // r8
  int (*v26)(void *, unsigned int, void *); // r8
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-50h]
  _QWORD v29[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  void *v31; // [rsp+A0h] [rbp+30h] BYREF

  v31 = 0LL;
  v2 = (struct IMessageSession **)((char *)this + 32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  v5 = CoreUICreate(v2);
  if ( v5 < 0 )
  {
    v7 = 103LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v5,
      v28);
    return (unsigned int)v5;
  }
  v9 = (struct IRawInputClient **)((char *)this + 24);
  if ( (a2 & 0x400) != 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
    v5 = AugmentedInputDeviceCollection::Create(*v9, &v31, (struct AugmentedInputDeviceCollection **)this + 6);
    if ( v5 < 0 )
    {
      v7 = 110LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v10, *((void **)this + 6));
    if ( v5 < 0 )
    {
      v7 = 115LL;
      goto LABEL_3;
    }
  }
  v11 = (struct IRawInputClient **)((char *)this + 24);
  if ( (a2 & 0x2000) != 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
    v5 = SpatialRimDeviceCollection::Create(*v9, this, *v2, &v31, (struct SpatialRimDeviceCollection **)this + 7);
    if ( v5 < 0 )
    {
      v7 = 125LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v12, *((void **)this + 7));
    if ( v5 < 0 )
    {
      v7 = 130LL;
      goto LABEL_3;
    }
    v11 = (struct IRawInputClient **)((char *)this + 24);
  }
  if ( (a2 & 0x80u) != 0 )
  {
    if ( IsEdition(253345LL) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
      v13 = MobileButtonDeviceCollection::Create(*v9, this, &v31, (struct MobileButtonDeviceCollection **)this + 5);
      if ( v13 < 0 )
      {
        v15 = 149LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
          (const char *)(unsigned int)v13,
          v28);
        return (unsigned int)v13;
      }
      v13 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v14, *((void **)this + 5));
      if ( v13 < 0 )
      {
        v15 = 154LL;
        goto LABEL_19;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
      v5 = ConsumerControlDeviceCollection::Create(
             *v11,
             this,
             &v31,
             (struct ConsumerControlDeviceCollection **)this + 8);
      if ( v5 < 0 )
      {
        v7 = 160LL;
        goto LABEL_3;
      }
      v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v16, *((void **)this + 8));
      if ( v5 < 0 )
      {
        v7 = 165LL;
        goto LABEL_3;
      }
      v11 = (struct IRawInputClient **)((char *)this + 24);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
    v13 = SystemControlDeviceCollection::Create(*v11, this, &v31, (struct SystemControlDeviceCollection **)this + 9);
    if ( v13 < 0 )
    {
      v15 = 172LL;
      goto LABEL_19;
    }
    v13 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v17, *((void **)this + 9));
    if ( v13 < 0 )
    {
      v15 = 177LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
    v13 = CallControlDeviceCollection::Create(*v11, this, &v31, (struct CallControlDeviceCollection **)this + 15);
    if ( v13 < 0 )
    {
      v15 = 183LL;
      goto LABEL_19;
    }
    v13 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v18, *((void **)this + 15));
    if ( v13 < 0 )
    {
      v15 = 188LL;
      goto LABEL_19;
    }
  }
  v19 = v11;
  if ( (a2 & 0x800) != 0 )
  {
    v20 = (void **)((char *)this + 80);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
    v13 = HeatDeviceCollection::Create(*v11, this, &v31, (struct HeatDeviceCollection **)this + 10);
    if ( v13 < 0 )
    {
      v15 = 197LL;
      goto LABEL_19;
    }
    v13 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v20 + 48LL))(*v20, &v31);
    if ( v13 < 0 )
    {
      v15 = 204LL;
      goto LABEL_19;
    }
    v13 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v21, *v20);
    if ( v13 < 0 )
    {
      v15 = 209LL;
      goto LABEL_19;
    }
    v19 = (struct IRawInputClient **)((char *)this + 24);
  }
  v22 = v19;
  if ( (a2 & 0x4000) != 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
    v5 = GazeDeviceCollection::Create(*v11, this, &v31, (struct GazeDeviceCollection **)this + 11);
    if ( v5 < 0 )
    {
      v7 = 218LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v23, *((void **)this + 11));
    if ( v5 < 0 )
    {
      v7 = 223LL;
      goto LABEL_3;
    }
    v22 = (struct IRawInputClient **)((char *)this + 24);
  }
  if ( (a2 & 0x100000) != 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 13);
    v5 = DockDeviceCollection::Create(*v19, this, &v31, (struct DockDeviceCollection **)this + 13);
    if ( v5 < 0 )
    {
      v7 = 232LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v24, *((void **)this + 13));
    if ( v5 < 0 )
    {
      v7 = 237LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
    v5 = DockableDeviceCollection::Create(*v22, this, &v31, (struct DockableDeviceCollection **)this + 14);
    if ( v5 < 0 )
    {
      v7 = 243LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v25, *((void **)this + 14));
    if ( v5 < 0 )
    {
      v7 = 248LL;
      goto LABEL_3;
    }
    v22 = (struct IRawInputClient **)((char *)this + 24);
  }
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v6);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
    v5 = PenDeviceCollection::Create(*v22, this, &v31, (struct PenDeviceCollection **)this + 12);
    if ( v5 < 0 )
    {
      v7 = 257LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v26, *((void **)this + 12));
    if ( v5 < 0 )
    {
      v7 = 262LL;
      goto LABEL_3;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MouseHaptics2>::GetImpl'::`2'::impl) )
    {
      Microsoft::WRL::ComPtr<GamepadInterceptionHelper>::InternalRelease((char *)this + 128);
      v5 = HapticDeviceCollection::Create(
             *((struct IRawInputClient **)this + 3),
             this,
             &v31,
             (struct HapticDeviceCollection **)this + 16);
      if ( v5 < 0 )
      {
        v7 = 270LL;
        goto LABEL_3;
      }
    }
    v29[1] = this;
    v29[0] = off_1801E4418;
    v29[7] = v29;
    KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::Initialize((_QWORD *)this + 17, v2, v27, (__int64)v29);
  }
  return 0LL;
}
