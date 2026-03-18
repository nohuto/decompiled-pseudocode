/*
 * XREFs of IommuHvSetAddressSpace @ 0x140565420
 * Callers:
 *     IommuDisableDevicePasid @ 0x140563850 (IommuDisableDevicePasid.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuHvSetAddressSpace(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  int v7; // eax

  v6 = a2 | 1;
  if ( !a2 )
    v6 = 0LL;
  v7 = guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL), v6, a4);
  if ( v7 < 0 )
    KeBugCheckEx(0x159u, 0x3200uLL, v7, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL), a2);
  return 0LL;
}
