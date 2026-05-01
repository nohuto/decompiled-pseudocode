/*
 * XREFs of ?SetVirtualDesktopFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktop@@@Z @ 0x1804B6460
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x1804AE090 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1804AE090.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804B6940 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::SetVirtualDesktopFilter(
        SwitchItemFilteredCollection *this,
        struct IVirtualDesktopNotificationService *a2,
        struct IVirtualDesktop *a3)
{
  _BYTE *v3; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (char *)this + 72;
  if ( a2 )
  {
    if ( !*v3 )
    {
      v8 = EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register(
             (_QWORD *)this + 19,
             (__int64)a2);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x119,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
      *v3 = 1;
    }
  }
  else if ( !*v3 )
  {
    v6 = -2147024809;
    v7 = 276LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)v6);
    return v6;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a3);
  v6 = SwitchItemFilteredCollection::_ApplyFilterToAllItems((SwitchItemFilteredCollection *)((char *)this - 168));
  if ( (v6 & 0x80000000) != 0 )
  {
    v7 = 287LL;
    goto LABEL_11;
  }
  return v6;
}
