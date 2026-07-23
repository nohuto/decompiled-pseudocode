/*
 * XREFs of HalPutDmaAdapter @ 0x14047E920
 * Callers:
 *     PspAssignSiloSystemRootPath @ 0x1407726E0 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeUserSharedData @ 0x140773644 (PspSiloInitializeUserSharedData.c)
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

void __stdcall HalPutDmaAdapter(PADAPTER_OBJECT DmaAdapter)
{
  ObfDereferenceObjectWithTag(DmaAdapter, 0x746C6644u);
}
