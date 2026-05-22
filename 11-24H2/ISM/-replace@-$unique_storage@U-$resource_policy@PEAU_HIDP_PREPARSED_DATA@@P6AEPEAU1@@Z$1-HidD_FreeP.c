/*
 * XREFs of ?replace@?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x18019AF24
 * Callers:
 *     ?Initialize@CompliantHapticInterface@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180199D80 (-Initialize@CompliantHapticInterface@@QEAAJ$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_inva.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18009B3E4 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009C1EC (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::replace(
        struct _HIDP_PREPARSED_DATA **a1,
        struct _HIDP_PREPARSED_DATA **a2)
{
  struct _HIDP_PREPARSED_DATA *v2; // rsi
  struct _HIDP_PREPARSED_DATA *v4; // rbp
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v6);
    HidD_FreePreparsedData(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v6);
  }
  *a1 = v4;
  *a2 = 0LL;
}
