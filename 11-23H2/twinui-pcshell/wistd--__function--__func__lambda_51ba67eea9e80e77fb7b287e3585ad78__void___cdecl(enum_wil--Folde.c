/*
 * XREFs of wistd::__function::__func__lambda_51ba67eea9e80e77fb7b287e3585ad78__void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)_::operator() @ 0x1806F0D00
 * Callers:
 *     <none>
 * Callees:
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x1806F24EC (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 */

void __fastcall wistd::__function::__func__lambda_51ba67eea9e80e77fb7b287e3585ad78__void___cdecl_enum_wil::FolderChangeEvent_unsigned_short_const____::operator()(
        __int64 a1,
        int *a2,
        const unsigned __int16 **a3)
{
  const unsigned __int16 *v3; // r8
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v4; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a3;
  v4 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(a1 + 8);
  v5 = *a2;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback(
    v4,
    (const enum wil::FolderChangeEvent *)&v5,
    v3);
}
