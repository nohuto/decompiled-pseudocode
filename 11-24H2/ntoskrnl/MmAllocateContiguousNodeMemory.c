/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x140411690
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x140411580 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HalAllocateCommonBufferExV2 @ 0x140411600 (HalAllocateCommonBufferExV2.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404D7240 (HalpDmaAllocateContiguousMemory.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14054181C (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpDmaControllerInitializeController @ 0x140552D58 (HalpDmaControllerInitializeController.c)
 *     HalpAllocateCR3Root @ 0x140559294 (HalpAllocateCR3Root.c)
 *     HvlpAllocateOverlayPages @ 0x14058C158 (HvlpAllocateOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x14059488C (IopInitializeInMemoryDumpData.c)
 *     DifMmAllocateContiguousNodeMemoryWrapper @ 0x1406320A0 (DifMmAllocateContiguousNodeMemoryWrapper.c)
 *     ViAllocateContiguousMemory @ 0x140B87CF0 (ViAllocateContiguousMemory.c)
 *     IommupHvInitializeLibrary @ 0x140C14944 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiConvertContiguousMemoryParameters @ 0x140411748 (MiConvertContiguousMemoryParameters.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
