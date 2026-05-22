/*
 * XREFs of ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800E733C
 * Callers:
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E7CAC (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x180093190 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E6BB0 (--1-$unique_ptr@UDeviceAttachEventArgs@ConsumerControlNexusDevice@@U-$default_delete@UDeviceAtta.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E6DB4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceAttach(
        ConsumerControlNexusDevice *this,
        struct IRawInputProvider *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // ebx
  ConsumerControlNexusDevice::DeviceAttachEventArgs *v7; // rax
  ConsumerControlNexusDevice::DeviceAttachEventArgs *v8; // rbx
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  ConsumerControlNexusDevice::DeviceAttachEventArgs *v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = operator new(0x60CuLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x60CuLL);
    v5[2] = 1548;
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 16) = v5;
  if ( v5 )
  {
    **((_DWORD **)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14));
    *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) = 4;
    *(_DWORD *)(*((_QWORD *)this + 16) + 8LL) = 1548;
    v7 = (ConsumerControlNexusDevice::DeviceAttachEventArgs *)operator new(
                                                                0x18uLL,
                                                                (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      *((_QWORD *)v7 + 2) = 0LL;
      *(_QWORD *)v7 = 0LL;
      *((_QWORD *)v7 + 1) = 0LL;
      v14 = v7;
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v7, (__int64 *)this + 14);
      Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=((__int64 *)v8 + 1, (__int64)a2);
      *((_QWORD *)v8 + 2) = *((_QWORD *)this + 16);
      v9 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *), ConsumerControlNexusDevice::DeviceAttachEventArgs *, __int64))(**((_QWORD **)this + 15) + 152LL))(
             *((_QWORD *)this + 15),
             ConsumerControlNexusDevice::NotifyDeviceAttachCallback,
             v8,
             4LL);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v14 = 0LL;
        *((_BYTE *)this + 136) = 1;
        v6 = 0;
LABEL_12:
        std::unique_ptr<ConsumerControlNexusDevice::DeviceAttachEventArgs>::~unique_ptr<ConsumerControlNexusDevice::DeviceAttachEventArgs>(&v14);
        return v6;
      }
      v10 = (unsigned int)v9;
      v11 = 329LL;
    }
    else
    {
      v14 = 0LL;
      v6 = -2147024882;
      v10 = 2147942414LL;
      v11 = 320LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)v10);
    goto LABEL_12;
  }
  v6 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13A,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)0x8007000ELL);
  return v6;
}
