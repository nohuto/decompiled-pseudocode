/*
 * XREFs of SmmIdentityMapMemory @ 0x14027CFC0
 * Callers:
 *     SmmIommuSwitchToTranslation @ 0x14027D7F4 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1400511E8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1400577CC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064D40 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIdentityMapMemory(__int64 a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdi
  _DWORD v5[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v6; // [rsp+58h] [rbp-40h]
  __int64 v7; // [rsp+60h] [rbp-38h]
  __int128 SystemInformation; // [rsp+68h] [rbp-30h] BYREF
  __int64 v9; // [rsp+78h] [rbp-20h]

  v9 = 0LL;
  SystemInformation = 0LL;
  v2 = ZwQuerySystemInformation(SystemPrefetcherInformation|0x80, &SystemInformation, 0x18u, 0LL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5[1] = 0;
    v6 = 0LL;
    v7 = v9;
    v5[0] = 1;
    if ( SmmUseIommuV3Interface() || SmmUseIommuV2Interface() )
      return ((__int64 (__fastcall *)(_QWORD, __int64, _DWORD *))qword_14015E568)(*(_QWORD *)(a1 + 112), 3LL, v5);
    else
      return (unsigned int)SmmGetIommuInterfaceVersion() < 3 ? -1073741811 : -1073741823;
  }
  else
  {
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 2256;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to query system physical memory info, Status=0x%.8x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
}
