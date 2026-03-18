/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x14042CF10
 * Callers:
 *     KeQueryKvaShadowRegion @ 0x1402683F0 (KeQueryKvaShadowRegion.c)
 *     RtlAddressInSectionTable @ 0x14042CEAC (RtlAddressInSectionTable.c)
 *     KiLockExtendedServiceTable @ 0x140508278 (KiLockExtendedServiceTable.c)
 *     KiShadowKernelSectionByAddress @ 0x1405C3AA0 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405C3B14 (KiUnshadowKernelSectionByAddress.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x14073DFE8 (KiTpIsSupportedKernelTracepointLocation.c)
 *     EtwpIsValidImageAddress @ 0x140837B80 (EtwpIsValidImageAddress.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A03160 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140BDEC74 (CcInitializeBcbProfiler.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlSectionTableFromVirtualAddress(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  unsigned int v6; // r11d
  unsigned __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned __int64 v10; // r9

  v4 = a1 + *(unsigned __int16 *)(a1 + 20);
  v5 = 0;
  v6 = *(unsigned __int16 *)(a1 + 6);
  v7 = v4 + 24;
  if ( a1 > 0x7FFFFFFEFFFFLL )
    goto LABEL_2;
  v10 = v4 + 40LL * *(unsigned __int16 *)(a1 + 6) + 23;
  if ( !*(_WORD *)(a1 + 6) )
    v10 = v7;
  if ( v10 >= v7 && v10 <= 0x7FFFFFFEFFFFLL )
  {
LABEL_2:
    while ( v5 < v6 )
    {
      v8 = *(_DWORD *)(v7 + 12);
      if ( a3 >= v8 && a3 < *(_DWORD *)(v7 + 16) + v8 )
        return v7;
      v7 += 40LL;
      ++v5;
    }
  }
  return 0LL;
}
