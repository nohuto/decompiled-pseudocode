/*
 * XREFs of HalPutDmaAdapter @ 0x1404833B0
 * Callers:
 *     PspAssignSiloSystemRootPath @ 0x1407724C0 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeUserSharedData @ 0x140773424 (PspSiloInitializeUserSharedData.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     ObReferenceObjectByName @ 0x14083F230 (ObReferenceObjectByName.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x14089B690 (ObpDeleteNameCheck.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     NtWriteFile @ 0x1408C1170 (NtWriteFile.c)
 *     ObReferenceFileObjectForWrite @ 0x140988C30 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

void __stdcall HalPutDmaAdapter(PADAPTER_OBJECT DmaAdapter)
{
  ObfDereferenceObjectWithTag(DmaAdapter, 0x746C6644u);
}
