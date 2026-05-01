/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___ @ 0x1800E00C4
 * Callers:
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x1800DFFD0 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x1800E0B68 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___(
        __int64 a1)
{
  __int64 v2; // rax
  const unsigned __int16 **v3; // rdx
  const unsigned __int16 *v4; // rdx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 v7[4]; // [rsp+38h] [rbp-30h] BYREF
  int v8; // [rsp+3Ch] [rbp-2Ch]
  __int128 v9; // [rsp+40h] [rbp-28h]

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v6);
  if ( v6 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(const unsigned __int16 ***)a1;
    *(_DWORD *)v7 = 16;
    v8 = 1447309360;
    v4 = *v3;
    v9 = *(_OWORD *)(v2 + 112);
    ApplicationViewManagement::CPersistence::_PersistData(
      (ApplicationViewManagement::CPersistence *)(v6 + 40),
      v4,
      L"VirtualDesktop",
      v7,
      0x18u);
  }
  return Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v6);
}
