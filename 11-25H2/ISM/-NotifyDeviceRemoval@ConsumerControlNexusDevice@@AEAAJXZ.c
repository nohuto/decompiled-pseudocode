/*
 * XREFs of ?NotifyDeviceRemoval@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800E6114
 * Callers:
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800E582C (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E558 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UDeviceRemovalEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UDeviceRemovalEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E5770 (--1-$unique_ptr@UDeviceRemovalEventArgs@ConsumerControlNexusDevice@@U-$default_delete@UDeviceRem.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E5944 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceRemoval(ConsumerControlNexusDevice *this)
{
  __int64 *v2; // rax
  __int64 *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
  {
    v10 = 0LL;
    v5 = -2147024882;
    v6 = 2147942414LL;
    v7 = 359LL;
    goto LABEL_6;
  }
  v2[1] = 0LL;
  *v2 = 0LL;
  v10 = v2;
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v2, (__int64 *)this + 14);
  v3[1] = *((_QWORD *)this + 16);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *), __int64 *, __int64))(**((_QWORD **)this + 15) + 152LL))(
         *((_QWORD *)this + 15),
         ConsumerControlNexusDevice::NotifyDeviceRemovalCallback,
         v3,
         4LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 367LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)v6);
    goto LABEL_7;
  }
  v10 = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  v5 = 0;
LABEL_7:
  std::unique_ptr<ConsumerControlNexusDevice::DeviceRemovalEventArgs>::~unique_ptr<ConsumerControlNexusDevice::DeviceRemovalEventArgs>(&v10);
  return v5;
}
