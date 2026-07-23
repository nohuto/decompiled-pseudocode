/*
 * XREFs of MmCreateMdl @ 0x14044FFA0
 * Callers:
 *     DifMmCreateMdlWrapper @ 0x1406312E0 (DifMmCreateMdlWrapper.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     MiPfAllocateMdls @ 0x14093A89C (MiPfAllocateMdls.c)
 *     MiLockKernelScpSection @ 0x140C57BE8 (MiLockKernelScpSection.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 */

PMDL __stdcall MmCreateMdl(PMDL MemoryDescriptorList, PVOID Base, SIZE_T Length)
{
  struct _MDL *Pool; // r9
  __int16 v6; // di
  PMDL result; // rax

  Pool = MemoryDescriptorList;
  if ( Length > 0xFFFFFFFF )
    return 0LL;
  v6 = (__int16)Base;
  if ( !MemoryDescriptorList )
  {
    Pool = (struct _MDL *)MiAllocatePool(
                            0x40uLL,
                            8 * ((Length + ((unsigned __int16)Base & 0xFFF) + 4095LL) >> 12) + 48,
                            1818520909);
    if ( !Pool )
      return 0LL;
  }
  Pool->Next = 0LL;
  Pool->MdlFlags = 0;
  Pool->ByteCount = Length;
  result = Pool;
  Pool->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
  Pool->Size = 8 * (((Length + (v6 & 0xFFF) + 4095LL) >> 12) + 6);
  Pool->ByteOffset = v6 & 0xFFF;
  return result;
}
