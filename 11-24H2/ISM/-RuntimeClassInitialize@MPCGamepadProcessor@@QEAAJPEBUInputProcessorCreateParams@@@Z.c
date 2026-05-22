/*
 * XREFs of ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C02D0
 * Callers:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801BE11C (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180033D10 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180033E8C (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeConstants@MPCGamepadProcessor@@AEAAXXZ @ 0x1801BEDFC (-InitializeConstants@MPCGamepadProcessor@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCGamepadProcessor::RuntimeClassInitialize(
        MPCGamepadProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  unsigned __int64 v2; // rdi
  int v5; // eax
  char *v6; // r14
  int ChildInputProcessor; // eax
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v9)(_QWORD, GUID *, char *); // rdi
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rdi
  int v13; // eax
  int v15[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (unsigned __int64)this + 8;
  v5 = MPCInputProviderBase::RuntimeClassInitialize((MPCGamepadProcessor *)((char *)this + 8), a2);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v5,
      v15[0]);
  MPCGamepadProcessor::InitializeConstants(this);
  v6 = (char *)this + 3672;
  *(_OWORD *)v15 = *(_OWORD *)a2;
  v16 = v2 & -(__int64)(this != 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 459);
  ChildInputProcessor = CreateChildInputProcessor(0x40u, v15, (__int64)this + 3672);
  if ( ChildInputProcessor < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x28,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor,
      v15[0]);
  v8 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v6;
  v9 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 460);
  v10 = v9(v8, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 3680);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v10,
      v15[0]);
  v11 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v6;
  v12 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 461);
  v13 = v12(v11, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, (char *)this + 3688);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x30,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v13,
      v15[0]);
  return 0LL;
}
