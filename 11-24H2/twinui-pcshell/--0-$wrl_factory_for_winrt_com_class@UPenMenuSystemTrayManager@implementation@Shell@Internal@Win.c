/*
 * XREFs of ??0?$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@wil@@QEAA@XZ @ 0x180177E0C
 * Callers:
 *     ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@wil@@@Z @ 0x180177C50 (--$MakeAndInitialize@V-$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017812C (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  result = v1;
  *v1 = &wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable';
  return result;
}
