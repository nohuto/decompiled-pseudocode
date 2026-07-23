/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x1403958D0
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x1403957C0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HalAllocateCommonBufferExV2 @ 0x140395840 (HalAllocateCommonBufferExV2.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404D0690 (HalpDmaAllocateContiguousMemory.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053F11C (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpDmaControllerInitializeController @ 0x140550698 (HalpDmaControllerInitializeController.c)
 *     HalpAllocateCR3Root @ 0x140556EC4 (HalpAllocateCR3Root.c)
 *     HvlpAllocateOverlayPages @ 0x140589448 (HvlpAllocateOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x1405918B0 (IopInitializeInMemoryDumpData.c)
 *     DifMmAllocateContiguousNodeMemoryWrapper @ 0x140630660 (DifMmAllocateContiguousNodeMemoryWrapper.c)
 *     ViAllocateContiguousMemory @ 0x140B89CF0 (ViAllocateContiguousMemory.c)
 *     IommupHvInitializeLibrary @ 0x140C16944 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiConvertContiguousMemoryParameters @ 0x140395988 (MiConvertContiguousMemoryParameters.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousNodeMemory(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r11d
  __int128 v8; // [rsp+50h] [rbp-38h] BYREF
  __int128 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+90h] [rbp+8h] BYREF

  v10 = a1;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)MiConvertContiguousMemoryParameters(a1, a2, a3, a4, a5, a6, (__int64)&v8) < 0 )
    return 0LL;
  else
    return MiAllocateContiguousMemory(
             (unsigned int)&v10,
             v8,
             DWORD2(v8),
             v9,
             DWORD2(v9),
             v6,
             (__int64)&MiSystemPartition,
             1416523587,
             0);
}
