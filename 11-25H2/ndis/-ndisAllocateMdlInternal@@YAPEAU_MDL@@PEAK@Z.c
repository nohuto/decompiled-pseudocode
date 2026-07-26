/*
 * XREFs of ?ndisAllocateMdlInternal@@YAPEAU_MDL@@PEAK@Z @ 0x140019760
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x140019B60 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall ndisAllocateMdlInternal(unsigned int *BufferSize)
{
  unsigned int v1; // edi
  int v3; // ebx
  ULONG v4; // edi
  ULONG v5; // eax
  struct _MDL *Pool2; // rax
  struct _MDL *v7; // rbx
  __int64 v8; // r9

  v1 = *BufferSize;
  v3 = 7 - (((unsigned __int8)MmSizeOfMdl((PVOID)0xFFF, *BufferSize) - 1) & 7);
  v4 = v3 + MmSizeOfMdl((PVOID)0xFFF, v1);
  v5 = v4 + *BufferSize;
  if ( v5 < v4 )
    return 0LL;
  Pool2 = (struct _MDL *)ExAllocatePool2(66LL, v5, 1684948046LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v8 = *BufferSize;
  Pool2->Next = 0LL;
  Pool2->MdlFlags = 0;
  Pool2->ByteCount = v8;
  Pool2->StartVa = (PVOID)(((unsigned __int64)Pool2 + v4) & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = ((_WORD)Pool2 + (_WORD)v4) & 0xFFF;
  Pool2->Size = 8 * ((((unsigned __int64)(((_WORD)Pool2 + (_WORD)v4) & 0xFFF) + v8 + 4095) >> 12) + 6);
  MmBuildMdlForNonPagedPool(Pool2);
  return v7;
}
