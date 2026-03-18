/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1404102B0
 * Callers:
 *     KeQueryKvaShadowRegion @ 0x14040F9DC (KeQueryKvaShadowRegion.c)
 *     RtlAddressInSectionTable @ 0x140410250 (RtlAddressInSectionTable.c)
 *     KiLockExtendedServiceTable @ 0x140505AF8 (KiLockExtendedServiceTable.c)
 *     KiShadowKernelSectionByAddress @ 0x1405BF9C0 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x1405BFA34 (KiUnshadowKernelSectionByAddress.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x140731FC8 (KiTpIsSupportedKernelTracepointLocation.c)
 *     EtwpIsValidImageAddress @ 0x140898620 (EtwpIsValidImageAddress.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409AEF90 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140BCDC74 (CcInitializeBcbProfiler.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
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
