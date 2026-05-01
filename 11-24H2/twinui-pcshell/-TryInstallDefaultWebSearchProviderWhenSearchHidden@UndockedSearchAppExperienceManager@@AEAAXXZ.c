/*
 * XREFs of ?TryInstallDefaultWebSearchProviderWhenSearchHidden@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C0FAC
 * Callers:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180244530 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1803C0D14 (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54865932@@@details@wil@@QEAA_NXZ @ 0x1803C1C1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54865932@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProviderWhenSearchHidden(
        UndockedSearchAppExperienceManager *this)
{
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
          *((_QWORD *)this + 11),
          *((_QWORD *)this + 7)) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54865932>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54865932>::GetImpl'::`2'::impl) )
      UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProvider(this, 2);
  }
}
