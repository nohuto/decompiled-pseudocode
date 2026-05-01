/*
 * XREFs of ?GetInt32@?$consume_Windows_Management_Policies_INamedPolicyData@UINamedPolicyData@Policies@Management@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180590F14
 * Callers:
 *     ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x1805913CC (-IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Management_Policies_INamedPolicyData<winrt::Windows::Management::Policies::INamedPolicyData>::GetInt32(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = 0;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 112LL))(v1, &v6);
  winrt::check_hresult(&v7, v2, (__int64)&v4);
  return v6;
}
