/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x140414C00
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x140414AF0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HalAllocateCommonBufferExV2 @ 0x140414B70 (HalAllocateCommonBufferExV2.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404D83A0 (HalpDmaAllocateContiguousMemory.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14053EFEC (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpDmaControllerInitializeController @ 0x140550458 (HalpDmaControllerInitializeController.c)
 *     HalpAllocateCR3Root @ 0x140556994 (HalpAllocateCR3Root.c)
 *     HvlpAllocateOverlayPages @ 0x140588AE8 (HvlpAllocateOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x14059108C (IopInitializeInMemoryDumpData.c)
 *     DifMmAllocateContiguousNodeMemoryWrapper @ 0x1406260E0 (DifMmAllocateContiguousNodeMemoryWrapper.c)
 *     ViAllocateContiguousMemory @ 0x140B77D10 (ViAllocateContiguousMemory.c)
 *     IommupHvInitializeLibrary @ 0x140C038B4 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiConvertContiguousMemoryParameters @ 0x140414CB8 (MiConvertContiguousMemoryParameters.c)
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
