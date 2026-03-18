/*
 * XREFs of RtlIsPackageSid @ 0x140A4997C
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A49740 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
