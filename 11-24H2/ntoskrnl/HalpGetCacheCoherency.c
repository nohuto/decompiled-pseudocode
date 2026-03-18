/*
 * XREFs of HalpGetCacheCoherency @ 0x1406FD5C0
 * Callers:
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140700658 (HalGetAdapterV2.c)
 * Callees:
 *     KeSystemFullyCacheCoherent @ 0x1405BCD50 (KeSystemFullyCacheCoherent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IoQueryInterface @ 0x1407204B0 (IoQueryInterface.c)
 */

char __fastcall HalpGetCacheCoherency(__int64 a1, __int64 a2, _BYTE *a3)
{
  char result; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  _OWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  v10 = 0LL;
  *a3 = 0;
  memset(v9, 0, sizeof(v9));
  if ( a1 )
  {
    result = *(_BYTE *)(a1 + 72);
    *a3 = result;
  }
  else if ( a2 && (int)IoQueryInterface(a2, 1, (unsigned int)&GUID_DMA_CACHE_COHERENCY_INTERFACE, 40, 1, 0LL, v9) >= 0 )
  {
    v8 = *((_QWORD *)&v9[0] + 1);
    *a3 = v10;
    return guard_dispatch_icall_no_overrides(v8, v5, v6, v7);
  }
  else
  {
    *a3 = 1;
    result = KeSystemFullyCacheCoherent();
    if ( !result )
      *a3 = 0;
  }
  return result;
}
