/*
 * XREFs of winrt::make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_9ec3d353ebe123d5bcc6e0dd9d042727___ @ 0x18020DB3C
 * Callers:
 *     _lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator() @ 0x18020E018 (_lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator().c)
 * Callees:
 *     ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x180087480 (--0-$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIM.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make_VirtualDestopSwitcherViewChangeNotificationProxy_IMultitaskingViewVisibilityService____lambda_9ec3d353ebe123d5bcc6e0dd9d042727___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[9]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v10; // [rsp+90h] [rbp+8h]

  v10 = operator new(0xE0uLL);
  v6 = *a3;
  v7 = a3[1];
  a3[1] = 0LL;
  v9[0] = off_1807C7000;
  v9[1] = v6;
  v9[2] = v7;
  v9[7] = v9;
  *a1 = winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>(
          v10,
          *a2,
          (__int64)v9);
  return a1;
}
