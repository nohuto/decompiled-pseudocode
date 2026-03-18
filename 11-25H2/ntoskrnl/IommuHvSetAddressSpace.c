/*
 * XREFs of IommuHvSetAddressSpace @ 0x140562C10
 * Callers:
 *     IommuDisableDevicePasid @ 0x140560FB0 (IommuDisableDevicePasid.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuHvSetAddressSpace(__int64 a1, ULONG_PTR a2)
{
  int v4; // eax

  v4 = guard_dispatch_icall_no_overrides(0LL);
  if ( v4 < 0 )
    KeBugCheckEx(0x159u, 0x3200uLL, v4, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL), a2);
  return 0LL;
}
