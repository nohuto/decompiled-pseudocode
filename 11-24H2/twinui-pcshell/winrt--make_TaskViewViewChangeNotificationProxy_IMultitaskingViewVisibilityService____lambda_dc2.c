/*
 * XREFs of winrt::make_TaskViewViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_dc2607754e001e0dc3a004d65aa5a9ed___ @ 0x180185358
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801A68D8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 * Callees:
 *     ??0?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1801853E4 (--0-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingVi.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make_TaskViewViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_dc2607754e001e0dc3a004d65aa5a9ed___(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  _QWORD v7[9]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+8h]

  v8 = (unsigned int)operator new(0xE0uLL);
  v7[0] = off_180721E88;
  v7[1] = *a3;
  v5 = a3[1];
  a3[1] = 0LL;
  v7[2] = v5;
  v7[7] = v7;
  *a1 = winrt::impl::heap_implements<TaskViewViewChangeNotificationProxy>::heap_implements<TaskViewViewChangeNotificationProxy>(v8);
  return a1;
}
