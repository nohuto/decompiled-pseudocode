/*
 * XREFs of ??0?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@QEAA@XZ @ 0x18062184C
 * Callers:
 *     ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@@Z @ 0x18061D4A8 (--$MakeAndInitialize@V-$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@V12@$$V@Det.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017812C (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *wil::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &wil::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>::`vftable';
  return result;
}
