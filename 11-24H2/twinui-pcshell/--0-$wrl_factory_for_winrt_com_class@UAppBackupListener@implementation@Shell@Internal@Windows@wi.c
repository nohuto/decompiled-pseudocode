/*
 * XREFs of ??0?$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@wil@@QEAA@XZ @ 0x180176B8C
 * Callers:
 *     ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@wil@@@Z @ 0x180218DEC (--$MakeAndInitialize@V-$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017812C (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::AppBackupListener>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::`vftable';
  return result;
}
