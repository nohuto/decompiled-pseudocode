/*
 * XREFs of ?NotifyDeviceRemovalCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800E61F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UDeviceRemovalEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UDeviceRemovalEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E5770 (--1-$unique_ptr@UDeviceRemovalEventArgs@ConsumerControlNexusDevice@@U-$default_delete@UDeviceRem.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceRemovalCallback(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  void *v3; // rcx
  int v4; // eax
  void *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a1 )
  {
    v1 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    goto LABEL_15;
  }
  if ( !*a1 )
  {
    v2 = 391LL;
LABEL_7:
    v1 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    v3 = (void *)v8[1];
    goto LABEL_10;
  }
  if ( !a1[1] )
  {
    v2 = 392LL;
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a1 + 56LL))(*a1);
  v1 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v4);
    v3 = (void *)v8[1];
LABEL_10:
    if ( v3 )
    {
      operator delete(v3, (const struct std::nothrow_t *)0x60C);
      v8[1] = 0LL;
    }
    goto LABEL_15;
  }
  v5 = (void *)v8[1];
  if ( v5 )
  {
    operator delete(v5, (const struct std::nothrow_t *)0x60C);
    v8[1] = 0LL;
  }
  v1 = 0;
LABEL_15:
  std::unique_ptr<ConsumerControlNexusDevice::DeviceRemovalEventArgs>::~unique_ptr<ConsumerControlNexusDevice::DeviceRemovalEventArgs>(&v8);
  return v1;
}
