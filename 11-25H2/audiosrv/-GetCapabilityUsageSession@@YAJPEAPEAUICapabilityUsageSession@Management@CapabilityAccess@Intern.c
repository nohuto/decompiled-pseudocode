/*
 * XREFs of ?GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180110CC4
 * Callers:
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x180110028 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18006D8B8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180103330 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetClientPid@@YAKXZ @ 0x180110E84 (-GetClientPid@@YAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall GetCapabilityUsageSession(
        struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession **a1)
{
  int ActivationFactory; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int ClientPid; // r10d
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD, struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession **); // rax
  int v12; // eax
  struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession *v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession *v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v17 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.CapabilityAccess.Management.CapabilityUsage",
    0x3Du,
    0x3Cu);
  ActivationFactory = RoGetActivationFactory(v19, &GUID_42947746_4ea0_48c2_9274_062ed61f8daa, &v17);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_15;
  }
  v15 = 0LL;
  v4 = v17;
  v5 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v17 + 48LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v15);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader);
  v7 = v5(v4, v6[1].Reserved.Reserved1, &v15);
  v3 = v7;
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 121LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)v8);
LABEL_6:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    goto LABEL_15;
  }
  if ( !v15 )
  {
    v3 = -2147418113;
    v8 = 2147549183LL;
    v9 = 122LL;
    goto LABEL_5;
  }
  ClientPid = GetClientPid();
  v16 = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession **))(*(_QWORD *)v15 + 48LL);
  v16 = 0LL;
  v12 = v11(v15, ClientPid, 0LL, &v16);
  v3 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
    goto LABEL_6;
  }
  v13 = v16;
  if ( v16 )
  {
    *a1 = v16;
    (*(void (__fastcall **)(struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  else
  {
    *a1 = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  v3 = 0;
LABEL_15:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  return v3;
}
