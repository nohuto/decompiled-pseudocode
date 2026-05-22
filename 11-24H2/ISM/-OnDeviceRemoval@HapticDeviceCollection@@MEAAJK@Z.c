/*
 * XREFs of ?OnDeviceRemoval@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DFD80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A75BC (-GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ.c)
 *     ?OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z @ 0x1800C9864 (-OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800E0210 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall HapticDeviceCollection::OnDeviceRemoval(HapticDeviceCollection *this, unsigned int a2)
{
  HapticProcessor *HapticProcessor; // rax
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  HapticProcessor = ISMStatics::GetHapticProcessor();
  v5 = HapticProcessor::OnHapticInterfaceRemoval(HapticProcessor, a2);
  if ( v5 < 0 )
  {
    v6 = 124LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( v5 < 0 )
  {
    v6 = 126LL;
    goto LABEL_3;
  }
  return 0LL;
}
