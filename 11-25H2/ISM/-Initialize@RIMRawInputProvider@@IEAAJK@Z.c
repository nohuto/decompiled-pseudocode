/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004CDA8
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18004CCB0 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Initialize@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18000A630 (-Initialize@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18004CA70 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18004D264 (-Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPE.c)
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18004D50C (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18004DF94 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x18004E3A4 (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x1800D28A8 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D6EA8 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D8020 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D94C0 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D989C (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DA080 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DB200 (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, int a2)
{
  struct IMessageSession **v2; // r12
  int v5; // edi
  const char *v6; // r9
  __int64 v7; // rdx
  struct IRawInputClient **v9; // rsi
  int (*v10)(void *, unsigned int, void *); // r8
  struct IRawInputClient **v11; // rdi
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
    v7 = 90LL;
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
      v7 = 97LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v10, *((void **)this + 6));
    if ( v5 < 0 )
    {
      v7 = 102LL;
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
      v7 = 112LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v12, *((void **)this + 7));
    if ( v5 < 0 )
    {
      v7 = 117LL;
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
        v15 = 136LL;
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
        v15 = 141LL;
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
        v7 = 147LL;
        goto LABEL_3;
      }
      v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v16, *((void **)this + 8));
      if ( v5 < 0 )
      {
        v7 = 152LL;
        goto LABEL_3;
      }
      v11 = (struct IRawInputClient **)((char *)this + 24);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
    v13 = SystemControlDeviceCollection::Create(*v11, this, &v31, (struct SystemControlDeviceCollection **)this + 9);
    if ( v13 < 0 )
    {
      v15 = 159LL;
      goto LABEL_19;
    }
    v13 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v17, *((void **)this + 9));
    if ( v13 < 0 )
    {
      v15 = 164LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
    v13 = CallControlDeviceCollection::Create(*v11, this, &v31, (struct CallControlDeviceCollection **)this + 15);
    if ( v13 < 0 )
    {
      v15 = 170LL;
      goto LABEL_19;
    }
    v13 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v18, *((void **)this + 15));
    if ( v13 < 0 )
    {
      v15 = 175LL;
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
      v15 = 184LL;
      goto LABEL_19;
    }
    v13 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v20 + 48LL))(*v20, &v31);
    if ( v13 < 0 )
    {
      v15 = 191LL;
      goto LABEL_19;
    }
    v13 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v21, *v20);
    if ( v13 < 0 )
    {
      v15 = 196LL;
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
      v7 = 205LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v23, *((void **)this + 11));
    if ( v5 < 0 )
    {
      v7 = 210LL;
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
      v7 = 219LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v24, *((void **)this + 13));
    if ( v5 < 0 )
    {
      v7 = 224LL;
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
    v5 = DockableDeviceCollection::Create(*v22, this, &v31, (struct DockableDeviceCollection **)this + 14);
    if ( v5 < 0 )
    {
      v7 = 230LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v25, *((void **)this + 14));
    if ( v5 < 0 )
    {
      v7 = 235LL;
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
      v7 = 244LL;
      goto LABEL_3;
    }
    v5 = RIMRawInputProvider::RegisterWaitHandler(this, v31, v26, *((void **)this + 12));
    if ( v5 < 0 )
    {
      v7 = 249LL;
      goto LABEL_3;
    }
    v29[1] = this;
    v29[0] = off_1801DC678;
    v29[7] = v29;
    KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::Initialize((_QWORD *)this + 16, v2, v27, (__int64)v29);
  }
  return 0LL;
}
