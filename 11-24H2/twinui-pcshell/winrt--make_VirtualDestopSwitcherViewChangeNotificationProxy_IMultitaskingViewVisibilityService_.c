/*
 * XREFs of winrt::make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_4947cc5562530a5e119976c0de6f80d3___ @ 0x1804A2398
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801A68D8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 * Callees:
 *     ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1801852E0 (--0-$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIM.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_4947cc5562530a5e119976c0de6f80d3___(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v6; // rcx
  _QWORD v8[9]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v9; // [rsp+80h] [rbp+8h]

  v9 = operator new(0xE0uLL);
  v8[0] = off_180744D08;
  v8[1] = *a3;
  v6 = a3[1];
  a3[1] = 0LL;
  v8[2] = v6;
  v8[7] = v8;
  *a1 = winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>(
          v9,
          *a2,
          (__int64)v8);
  return a1;
}
