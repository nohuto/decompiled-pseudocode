/*
 * XREFs of ?OnDeviceRemoval@DockDeviceCollection@@MEAAJK@Z @ 0x1800DA680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DockDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z @ 0x1800DA3A0 (-DockDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DCAA0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall DockDeviceCollection::OnDeviceRemoval(DockDeviceCollection *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    InputTraceLogging::DeviceDock::DockDeviceDetached(a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
