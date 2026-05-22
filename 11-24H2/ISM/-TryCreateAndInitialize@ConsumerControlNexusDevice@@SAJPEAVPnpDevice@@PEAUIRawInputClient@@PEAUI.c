/*
 * XREFs of ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E7CAC
 * Callers:
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800E4C80 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x180093190 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E6FEC (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800E733C (-NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConsumerControlNexusDevice::TryCreateAndInitialize(
        struct PnpDevice *a1,
        struct IRawInputClient *a2,
        struct IMessageSession *a3,
        struct IRawInputProvider *a4,
        struct ConsumerControlNexusDevice **a5)
{
  __int64 *v9; // rax
  __int64 *v10; // rbx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v9 = (__int64 *)RefCountedObject::operator new(0x90uLL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = (__int64)&RefCountedObject::`vftable';
    *((_DWORD *)v9 + 2) = 1;
    *v9 = (__int64)&ConsumerControlNexusDevice::`vftable';
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    *((_DWORD *)v9 + 16) = 0;
    v9[7] = (__int64)(v9 + 6);
    v9[6] = (__int64)(v9 + 6);
    *((_DWORD *)v9 + 22) = 0;
    v9[10] = (__int64)(v9 + 9);
    v9[9] = (__int64)(v9 + 9);
    *((_BYTE *)v9 + 104) = 0;
    v9[14] = 0LL;
    v9[15] = 0LL;
    v9[16] = 0LL;
    *((_BYTE *)v9 + 136) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=(v10 + 14, (__int64)a2);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=(v10 + 15, (__int64)a3);
  v12 = ConsumerControlNexusDevice::Initialize((ConsumerControlNexusDevice *)v10, a1);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v12);
    InputContext::Release((InputContext *)v10);
    return v13;
  }
  v14 = ConsumerControlNexusDevice::NotifyDeviceAttach((ConsumerControlNexusDevice *)v10, a4);
  v13 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v14);
    InputContext::Release((InputContext *)v10);
    return v13;
  }
  *a5 = (struct ConsumerControlNexusDevice *)v10;
  return 0LL;
}
