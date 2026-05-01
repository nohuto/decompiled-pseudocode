/*
 * XREFs of ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x180203FF8
 * Callers:
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1802B0E60 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?EnsureOEMLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18031E448 (-EnsureOEMLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803BC17C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1803BCE7C (-IsWebSearchProviderInstalledLatest@@YA_NXZ.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1803C0D14 (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1805FFBD0 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 *     ?GetRegistryKeyStringValue@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG00@Z @ 0x180624C54 (-GetRegistryKeyStringValue@CopilotButtonHelpers@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x180679F04 (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall SHRegGetStringEx(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        DWORD a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  LSTATUS result; // eax

  v6 = a6;
  if ( a6 > 0x7FFFFFFF )
  {
    result = 534;
LABEL_4:
    *a5 = 0;
    goto LABEL_5;
  }
  a6 *= 2;
  result = RegGetValueW(a1, a2, a3, a4, 0LL, a5, &a6);
  if ( !result )
    return result;
  if ( v6 )
    goto LABEL_4;
LABEL_5:
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
