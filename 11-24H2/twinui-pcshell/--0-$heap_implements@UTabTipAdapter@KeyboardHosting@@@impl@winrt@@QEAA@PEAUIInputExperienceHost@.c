/*
 * XREFs of ??0?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@4567@PEAUIDesktopKeyboardHostingPolicy@KeyboardHosting@567@PEAUIInputInjectionValidityHelper@KeyboardHosting@567@@Z @ 0x18029B1AC
 * Callers:
 *     ??$make_self@UTabTipAdapter@KeyboardHosting@@PEAVTouchKeyboardExperienceManager@@PEAUIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@PEAUIDesktopKeyboardHostingPolicy@2678@$$T@winrt@@YA?AU?$com_ptr@UTabTipAdapter@KeyboardHosting@@@0@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAPEAUIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@$$QEAPEAUIDesktopKeyboardHostingPolicy@KeyboardHosting@567@$$QEA$$T@Z @ 0x18029B130 (--$make_self@UTabTipAdapter@KeyboardHosting@@PEAVTouchKeyboardExperienceManager@@PEAUIShellKeybo.c)
 * Callees:
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@PEAUIInputInjectionValidityHelper@1456@@Z @ 0x18029B1EC (--0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEA.c)
 */

KeyboardHosting::TabTipAdapter *__fastcall winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::heap_implements<KeyboardHosting::TabTipAdapter>(
        KeyboardHosting::TabTipAdapter *a1,
        struct Windows::Internal::Shell::Text::IInputExperienceHost *a2,
        struct Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy *a3,
        struct Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy *a4)
{
  struct Windows::Internal::Shell::KeyboardHosting::IInputInjectionValidityHelper *v6; // [rsp+20h] [rbp-18h]

  KeyboardHosting::TabTipAdapter::TabTipAdapter(a1, a2, a3, a4, v6);
  *(_QWORD *)a1 = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,void>'};
  *((_QWORD *)a1 + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IRemoteTabTipAdapter,void>'};
  *((_QWORD *)a1 + 2) = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable';
  return a1;
}
