/*
 * XREFs of ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180037040
 * Callers:
 *     ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1800369FC (--$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180036F40 (-AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180037280 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800373FC (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___ @ 0x180096F38 (std--call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCMouseProcessor::RuntimeClassInitialize(
        MPCMouseProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, char *); // rdi
  int v11; // eax
  char *v12; // r15
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v15)(_QWORD, GUID *, char *); // rbx
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v18)(_QWORD, GUID *, char *); // rbx
  int v19; // eax
  __int128 v20; // [rsp+20h] [rbp-30h] BYREF
  MPCMouseProcessor *v21; // [rsp+30h] [rbp-20h]
  __int128 v22; // [rsp+38h] [rbp-18h] BYREF
  char *v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LARGE_INTEGER Frequency; // [rsp+80h] [rbp+30h] BYREF
  MPCMouseProcessor *v26; // [rsp+88h] [rbp+38h] BYREF

  v20 = *(_OWORD *)a2;
  v26 = (MPCMouseProcessor *)*((_QWORD *)a2 + 2);
  v21 = v26;
  *((_DWORD *)this + 930) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 32LL))(*((_QWORD *)a2 + 1));
  *((_DWORD *)this + 931) = 2;
  *(_QWORD *)&v20 = (char *)this + 3720;
  Frequency.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  *((_QWORD *)this + 680) = 500 * qword_180246DE8 / 1000;
  v22 = v20;
  v4 = (__int64)this + 16;
  v23 = (char *)this + 16;
  if ( !this )
    v4 = 16LL;
  v5 = MPCInputProviderBase::RuntimeClassInitialize(
         (MPCInputProviderBase *)v4,
         (const struct InputProcessorCreateParams *)&v20);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v26 = this;
    std::call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___(v6, &v26);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7));
    v10 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 461);
    v11 = v10(v9, (char *)this + 3688);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x49,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v11,
        v20);
    MPCMouseProcessor::AttachMouse(this, *(struct DeviceInfo **)a2);
    v12 = (char *)this + 3696;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 462);
    v13 = CreateChildInputProcessor(2LL, &v22, (char *)this + 3696);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x52,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v13,
        v20);
    v14 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v12;
    v15 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v12;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 463);
    v16 = v15(v14, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 3704);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v16,
        v20);
    v17 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v12;
    v18 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v12;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 464);
    v19 = v18(v17, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8, (char *)this + 3712);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x55,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v19,
        v20);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v5,
      v20);
    return v7;
  }
}
