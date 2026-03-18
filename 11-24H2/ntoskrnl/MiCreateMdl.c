/*
 * XREFs of MiCreateMdl @ 0x140945DF8
 * Callers:
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140263DD0 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiGetPageForHeader @ 0x1403133D4 (MiGetPageForHeader.c)
 *     MiDeleteImageCreationMdls @ 0x140945F4C (MiDeleteImageCreationMdls.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

struct _MDL *__fastcall MiCreateMdl(ULONG *a1, int a2, ULONG_PTR a3, int a4)
{
  ULONG v4; // edi
  ULONG_PTR v5; // rbp
  PMDL Mdl; // rax
  struct _MDL *v9; // rdi
  struct _MDL *v10; // r14
  ULONG_PTR i; // rsi
  PVOID MappedSystemVa; // rax
  unsigned __int64 PageForHeader; // rax
  void *Pool; // rax
  void *v16; // rbx
  struct _MDL *v17; // rax

  v4 = a3;
  v5 = a3 >> 12;
  if ( a4 )
  {
    Mdl = IoAllocateMdl(0LL, a3, 0, 0, 0LL);
    v9 = Mdl;
    if ( Mdl )
    {
      v10 = Mdl + 1;
      for ( i = 0LL; i < v5; ++i )
      {
        PageForHeader = MiGetPageForHeader(a1, a2, 0);
        if ( PageForHeader == -1LL )
        {
          v9->ByteCount = (_DWORD)i << 12;
LABEL_10:
          MiDeleteImageCreationMdls(v9);
          return 0LL;
        }
        if ( !i )
          v9->MdlFlags |= 0x4002u;
        v10->Next = (struct _MDL *)PageForHeader;
        v10 = (struct _MDL *)((char *)v10 + 8);
      }
      if ( (v9->MdlFlags & 5) != 0 )
        MappedSystemVa = v9->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !MappedSystemVa )
        goto LABEL_10;
      return v9;
    }
  }
  else
  {
    Pool = (void *)MiAllocatePool(0x40uLL, a3, 2021158221);
    v16 = Pool;
    if ( Pool )
    {
      v17 = IoAllocateMdl(Pool, v4, 0, 0, 0LL);
      v9 = v17;
      if ( v17 )
      {
        MmBuildMdlForNonPagedPool(v17);
        v9->MdlFlags |= 0x4000u;
        return v9;
      }
      ExFreePoolWithTag(v16, 0);
    }
  }
  return 0LL;
}
