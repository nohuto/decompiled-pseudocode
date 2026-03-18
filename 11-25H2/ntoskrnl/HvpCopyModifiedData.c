/*
 * XREFs of HvpCopyModifiedData @ 0x140A6C854
 * Callers:
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140A6C7A4 (HvpApplyLogEntryDataToFileBackedHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     HvpMapEntryGetBlockAddress @ 0x140878240 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x140A6C914 (HvpMapEntryReleaseBlockAddress.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 *     HvpGetBinContextInitialize @ 0x140BA99C0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpCopyModifiedData(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int i; // ebx
  unsigned int v10; // r8d
  void *BlockAddress; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  result = HvpGetBinContextInitialize(&v14);
  for ( i = 0; i < a4; i += 4096 )
  {
    if ( !HvpGetCellMap(BugCheckParameter2, i + a2) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0xC45uLL);
    BlockAddress = (void *)HvpMapEntryGetBlockAddress();
    memmove(BlockAddress, (const void *)(a3 + i), 0x1000uLL);
    result = HvpMapEntryReleaseBlockAddress(v13, v12, &v14);
  }
  return result;
}
