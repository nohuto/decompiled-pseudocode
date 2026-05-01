/*
 * XREFs of ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D3BC0
 * Callers:
 *     ?ElementProviderFromPoint@AccessibleElementBase@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z @ 0x1804D27D0 (-ElementProviderFromPoint@AccessibleElementBase@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z.c)
 *     ?GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x1804D2940 (-GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z.c)
 *     ?GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1804D2C30 (-GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804D3010 (-GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?GetSelection@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804D30D0 (-GetSelection@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?Invoke@AccessibleElementBase@@UEAAJXZ @ 0x1804D3310 (-Invoke@AccessibleElementBase@@UEAAJXZ.c)
 *     ?Navigate@AccessibleElementBase@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1804D33F0 (-Navigate@AccessibleElementBase@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@.c)
 *     ?ScrollIntoView@AccessibleElementBase@@UEAAJXZ @ 0x1804D37F0 (-ScrollIntoView@AccessibleElementBase@@UEAAJXZ.c)
 *     ?Select@AccessibleElementBase@@UEAAJXZ @ 0x1804D38A0 (-Select@AccessibleElementBase@@UEAAJXZ.c)
 *     ?SetFocus@AccessibleElementBase@@UEAAJXZ @ 0x1804D3920 (-SetFocus@AccessibleElementBase@@UEAAJXZ.c)
 *     ?ShowContextMenu@AccessibleElementBase@@UEAAJXZ @ 0x1804D3A60 (-ShowContextMenu@AccessibleElementBase@@UEAAJXZ.c)
 *     ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x1804D3CD8 (-_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z.c)
 *     ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x1804D3E08 (-_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z.c)
 *     ?get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z @ 0x1804D4000 (-get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z.c)
 *     ?get_FragmentRoot@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x1804D4230 (-get_FragmentRoot@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z.c)
 *     ?get_HostRawElementProvider@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804D4580 (-get_HostRawElementProvider@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 *     ?get_IsSelected@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804D4630 (-get_IsSelected@AccessibleElementBase@@UEAAJPEAH@Z.c)
 *     ?get_SelectionContainer@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804D4740 (-get_SelectionContainer@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccessibleElementBase::_GetElement(
        AccessibleElementBase *this,
        struct IMultitaskingViewElement **a2)
{
  return AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, (void **)a2);
}
