/*
 * XREFs of ?GetStateRootRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x1800856A4
 * Callers:
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180085678 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800596A4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800857E8 (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetStateRootRegistrationSettingsContainer(
        __int64 a1,
        const WCHAR *a2)
{
  void (__fastcall ****TriggerRegistrationSettingsContainer)(_QWORD, __int64, PVOID, __int64); // rax
  void (__fastcall ***v4)(_QWORD, __int64, PVOID, __int64); // rdi
  void (__fastcall *v5)(_QWORD, __int64, PVOID, __int64); // rbx
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  __int64 v8; // r9
  const WCHAR *v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF
  std::_Ref_count_base *v12; // [rsp+48h] [rbp-40h]
  HSTRING_HEADER v13; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]

  v10 = a2;
  TriggerRegistrationSettingsContainer = (void (__fastcall ****)(_QWORD, __int64, PVOID, __int64))Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer(&v11);
  v4 = *TriggerRegistrationSettingsContainer;
  v5 = ***TriggerRegistrationSettingsContainer;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, &v10, v6);
  LOBYTE(v8) = 1;
  v5(v4, a1, v7[1].Reserved.Reserved1, v8);
  v14 = 0LL;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return a1;
}
