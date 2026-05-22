/*
 * XREFs of ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180079990
 * Callers:
 *     <none>
 * Callees:
 *     ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x1800339D0 (-AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180079A00 (-IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x18009A2B4 (-count@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std.c)
 */

bool __fastcall MPCMouseProcessor::ShouldAttachDevice(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  int IsMPCMouseDevice; // eax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  IsMPCMouseDevice = MPCMouseProcessor::IsMPCMouseDevice(a2);
  if ( IsMPCMouseDevice )
  {
    if ( std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::count((char *)this + 5360) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x17E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        v5);
    MPCMouseProcessor::AttachMouse((MPCMouseProcessor *)((char *)this - 16), a2);
    LOBYTE(IsMPCMouseDevice) = 1;
  }
  return IsMPCMouseDevice;
}
