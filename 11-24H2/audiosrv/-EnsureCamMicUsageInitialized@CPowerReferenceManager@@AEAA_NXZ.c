/*
 * XREFs of ?EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ @ 0x18006A734
 * Callers:
 *     _lambda_c90e8a76b02d1fc01a85dd002f968322_::operator() @ 0x180109C40 (_lambda_c90e8a76b02d1fc01a85dd002f968322_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005F5D8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0C70 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180109480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CPowerReferenceManager::EnsureCamMicUsageInitialized(CPowerReferenceManager *this)
{
  __int64 *v1; // r14
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int ActivationFactory; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64 *); // rdi
  __int64 v6; // rax
  int v7; // eax
  const char *v8; // r9
  bool v9; // bl
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+28h] [rbp-50h]
  __int64 *v13; // [rsp+30h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+38h] [rbp-40h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 424);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 384);
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 384);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 384));
  v14 = v2;
  v13 = v1;
  if ( !*v1 )
  {
    v11 = 0LL;
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.CapabilityAccess.Management.CapabilityUsage",
      0x3Du,
      0x3Cu);
    ActivationFactory = RoGetActivationFactory(v16, &GUID_42947746_4ea0_48c2_9274_062ed61f8daa, &v11);
    try
    {
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)(unsigned int)ActivationFactory,
          v11);
      v4 = v11;
      v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 48LL);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v1);
      v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader);
      v7 = v5(v4, *(_QWORD *)(v6 + 24), v1);
      if ( v7 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)(unsigned int)v7,
          v11);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x2D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        v8);
      v2 = v12;
      v1 = v13;
    }
  }
  v9 = *v1 != 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  return v9;
}
