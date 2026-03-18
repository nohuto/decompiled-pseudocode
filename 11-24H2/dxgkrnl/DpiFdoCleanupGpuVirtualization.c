/*
 * XREFs of DpiFdoCleanupGpuVirtualization @ 0x14023CDA8
 * Callers:
 *     DpiFdoResetFdo @ 0x1402453A8 (DpiFdoResetFdo.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1403FDFB4 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall DpiFdoCleanupGpuVirtualization(__int64 a1))(_QWORD)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void (__fastcall *v9)(_QWORD); // rax
  void (__fastcall *v10)(_QWORD); // rax
  void (__fastcall *v11)(_QWORD); // rax
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( *(_QWORD *)(a1 + 2888) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2880), 0);
    v2 = *(void **)(a1 + 2888);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0);
      *(_QWORD *)(a1 + 2888) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2904) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2896), 0);
    v3 = *(void **)(a1 + 2904);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(a1 + 2904) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2920) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2912), 0);
    v4 = *(void **)(a1 + 2920);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(a1 + 2920) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2936) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2928), 0);
    v5 = *(void **)(a1 + 2936);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(a1 + 2936) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2952) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2944), 0);
    v6 = *(void **)(a1 + 2952);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(a1 + 2952) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2968) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2960), 0);
    v7 = *(void **)(a1 + 2968);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(a1 + 2968) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 2984) )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2976), 0);
    v8 = *(void **)(a1 + 2984);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(a1 + 2984) = 0LL;
    }
  }
  v9 = *(void (__fastcall **)(_QWORD))(a1 + 5176);
  if ( v9 )
  {
    v9(*(_QWORD *)(a1 + 5160));
    *(_BYTE *)(a1 + 5144) = 0;
    *(_QWORD *)(a1 + 5176) = 0LL;
  }
  v10 = *(void (__fastcall **)(_QWORD))(a1 + 5048);
  if ( v10 )
  {
    v10(*(_QWORD *)(a1 + 5032));
    *(_BYTE *)(a1 + 5016) = 0;
    *(_QWORD *)(a1 + 5048) = 0LL;
  }
  v11 = *(void (__fastcall **)(_QWORD))(a1 + 5312);
  if ( v11 )
  {
    v11(*(_QWORD *)(a1 + 5296));
    *(_BYTE *)(a1 + 5280) = 0;
    *(_QWORD *)(a1 + 5312) = 0LL;
  }
  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 5368);
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 5352));
    *(_BYTE *)(a1 + 5336) = 0;
    *(_QWORD *)(a1 + 5368) = 0LL;
  }
  return result;
}
