/*
 * XREFs of ?StashWindowingEnvironmentSettings@UwpWindowWrapperBase@@UEAAXPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18044BD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::StashWindowingEnvironmentSettings(
        UwpWindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 16,
    (__int64)a2);
}
