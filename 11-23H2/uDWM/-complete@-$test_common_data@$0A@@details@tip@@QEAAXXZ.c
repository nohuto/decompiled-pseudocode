/*
 * XREFs of ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18002E0BC
 * Callers:
 *     ?ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800303A8 (-ReleaseTransitionState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18002E12C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800F2A18 (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800F3D38 (-update_from_test_info@-$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     TestQueryData @ 0x1800F4200 (TestQueryData.c)
 */

void __fastcall tip::details::test_common_data<0>::complete(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+28h] [rbp-40h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-30h]
  __int128 v8; // [rsp+48h] [rbp-20h]

  wil::EnterCriticalSection(&lpCriticalSection, a1 + 16);
  *(_DWORD *)(a1 + 56) |= 0x300u;
  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 160);
    *(_QWORD *)(a1 + 152) = 0LL;
    v6 = 0LL;
    *(_OWORD *)pv = 0LL;
    v8 = 0LL;
    if ( (unsigned int)TestQueryData(v2, 2LL, v3, &v6) )
    {
      tip::details::test_common_data<0>::update_from_test_info(a1, &v6);
      tip::details::test_common_data<0>::evaluate_and_report(v4, v8);
    }
    CoTaskMemFree(pv[1]);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
