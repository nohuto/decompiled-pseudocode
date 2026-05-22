/*
 * XREFs of ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x1800118A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x1800119F0 (-SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 *     ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x180012674 (-MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z @ 0x1800808D4 (-OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCInputRouter::SupportedInputUpdatedForTarget(
        MPCInputRouter *this,
        struct IDWMSupportedInputTarget *a2)
{
  int v3; // eax
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  ISMTracing *v6; // rcx
  __int64 (__fastcall *v7)(struct IDWMSupportedInputTarget *, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  unsigned int v12; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+28h] BYREF

  DWMInputRouter::SupportedInputUpdatedForTarget(this, a2);
  if ( MPCManager::s_instance )
  {
    v12 = 0;
    v3 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, unsigned int *))(*(_QWORD *)a2 + 40LL))(a2, &v12);
    LOBYTE(v5) = (_BYTE)retaddr;
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2AB,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v3,
        v10[0]);
    if ( (v12 & 0x18040) != 0 )
    {
      v10[0] = 0LL;
      v7 = **(__int64 (__fastcall ***)(struct IDWMSupportedInputTarget *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
      v8 = v7(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v10);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B1,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v8,
          v10[0]);
      v13 = 0;
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10[0] + 32LL))(v10[0], &v13);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B5,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v9,
          v10[0]);
      v4 = v13;
      if ( v13 )
        MPCManager::OnGamepadIsSupportedForProcess(MPCManager::s_instance, v13);
      v5 = v10[0];
      if ( v10[0] )
      {
        v10[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    if ( ISMTracing::IsEnabled(v5, v4) )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_SupportedInputUpdatedForTarget_(v6, v12, (struct IUnknown *)a2);
    }
  }
}
