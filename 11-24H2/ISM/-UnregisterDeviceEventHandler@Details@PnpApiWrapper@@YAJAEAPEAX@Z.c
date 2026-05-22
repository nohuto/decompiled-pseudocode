/*
 * XREFs of ?UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z @ 0x180033310
 * Callers:
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x18008D5B0 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ @ 0x1800E5C00 (-UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800349D8 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall PnpApiWrapper::Details::UnregisterDeviceEventHandler(PnpApiWrapper::Details *this, void **a2)
{
  _QWORD *v2; // rdi
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    v4 = CM_Unregister_Notification(*v2, a2);
    v6 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v4, v5);
    result = 2147943568LL;
    if ( v6 == -2147023728 )
      return result;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2AA,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v6,
        v8);
      return (unsigned int)v6;
    }
    *(_QWORD *)this = 0LL;
    operator delete(v2, (const struct std::nothrow_t *)0x18);
  }
  return 0LL;
}
