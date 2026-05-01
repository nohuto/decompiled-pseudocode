/*
 * XREFs of ??$?RAEBU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@@_lambda_c88db0dbc366a6ea415c26622dd26c45_@@QEBA?A_PAEBU?$com_ptr@UIResourceManagerStaticInternal@Internal@Core@Resources@ApplicationModel@Windows@@@winrt@@@Z @ 0x1802ACE24
 * Callers:
 *     ??$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@?$factory_cache_entry@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@Z @ 0x1801B2264 (--$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@-$factory_cache_entry@UResourceManager@C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall _lambda_c88db0dbc366a6ea415c26622dd26c45_::operator()<winrt::com_ptr<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal> const &>(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>;
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal> )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>
                                    + 8LL))(winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>);
  return a2;
}
