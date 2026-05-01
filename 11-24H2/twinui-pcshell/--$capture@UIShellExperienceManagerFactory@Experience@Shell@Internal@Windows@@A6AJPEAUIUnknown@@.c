/*
 * XREFs of ??$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAU6@AEBU7@@winrt@@YA?AU?$com_ptr@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAU2@1@Z @ 0x1805F9A70
 * Callers:
 *     ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805F9C4C (-EnsureExperienceManager@FallbackFlyoutView@@AEAA-AV-$com_ptr_t@UINetworkFlyoutExperienceManager.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *winrt::capture<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IUnknown *,_GUID const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(__int64, void *, void *, __int64 *),
        __int64 *a3,
        ...)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+38h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v9 = 0LL;
  v7 = 0;
  v4 = *a3;
  v8 = 0LL;
  v5 = a2(
         v4,
         &unk_1807BB1E0,
         &winrt::impl::guid_v<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory>,
         &v9);
  winrt::check_hresult((int *)va, v5, (__int64)&v7);
  *a1 = v9;
  return a1;
}
