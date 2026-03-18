/*
 * XREFs of RtlIsCapabilitySid @ 0x140998B5C
 * Callers:
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
