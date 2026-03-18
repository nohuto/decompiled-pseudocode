/*
 * XREFs of HalpGetCacheCoherency @ 0x1406F17D0
 * Callers:
 *     HalGetAdapterV3 @ 0x1406F42C8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406F4868 (HalGetAdapterV2.c)
 * Callees:
 *     KeSystemFullyCacheCoherent @ 0x1405B8EB0 (KeSystemFullyCacheCoherent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IoQueryInterface @ 0x1407143B0 (IoQueryInterface.c)
 */

char __fastcall HalpGetCacheCoherency(__int64 a1, __int64 a2, _BYTE *a3)
{
  char result; // al
  __int64 v5; // rcx
  _OWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h]

  v7 = 0LL;
  *a3 = 0;
  memset(v6, 0, sizeof(v6));
  if ( a1 )
  {
    result = *(_BYTE *)(a1 + 72);
    *a3 = result;
  }
  else if ( a2 && (int)IoQueryInterface(a2, 1LL, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 40LL, 1, 0LL, v6) >= 0 )
  {
    v5 = *((_QWORD *)&v6[0] + 1);
    *a3 = v7;
    return guard_dispatch_icall_no_overrides(v5);
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
