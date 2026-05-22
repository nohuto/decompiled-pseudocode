/*
 * XREFs of ?Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E7F9C
 * Callers:
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800E7ED0 (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800357D8 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008F314 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x18008F468 (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ConsumerControlGenericDevice::Initialize(ConsumerControlGenericDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v2; // rsi
  PnpDevice *v4; // rdi
  __int64 v5; // rdx
  int InterfacePath; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((InputContext **)this + 2, (volatile signed __int32 *)a2);
  v4 = *v2;
  WindowsDeleteString(*((HSTRING *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)v4, (HSTRING *)this + 3);
  if ( InterfacePath < 0 )
  {
    v8 = 37LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolgenericdevice.cpp",
      (const char *)(unsigned int)InterfacePath);
    return (unsigned int)InterfacePath;
  }
  InterfacePath = PnpDevice::OpenInterface(*v2, v5, v7);
  if ( InterfacePath < 0 )
  {
    v8 = 40LL;
    goto LABEL_3;
  }
  return 0LL;
}
