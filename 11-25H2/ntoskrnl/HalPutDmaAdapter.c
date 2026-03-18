/*
 * XREFs of HalPutDmaAdapter @ 0x140482570
 * Callers:
 *     PspAssignSiloSystemRootPath @ 0x140762B00 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeUserSharedData @ 0x140763A54 (PspSiloInitializeUserSharedData.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14085AF80 (ObpDeleteNameCheck.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     NtWriteFile @ 0x1408C32D0 (NtWriteFile.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140915290 (ObReferenceObjectByName.c)
 *     ObReferenceFileObjectForWrite @ 0x140970E80 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 */

void __stdcall HalPutDmaAdapter(PADAPTER_OBJECT DmaAdapter)
{
  ObfDereferenceObjectWithTag(DmaAdapter, 0x746C6644u);
}
