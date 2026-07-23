/*
 * XREFs of MiCreateMdl @ 0x14098FB34
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MmBuildMdlForNonPagedPool @ 0x140293640 (MmBuildMdlForNonPagedPool.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPageForHeader @ 0x1403F2A54 (MiGetPageForHeader.c)
 *     MiDeleteImageCreationMdls @ 0x14098FC88 (MiDeleteImageCreationMdls.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

struct _MDL *__fastcall MiCreateMdl(ULONG *a1, int a2, ULONG_PTR a3, int a4)
{
  ULONG v4; // edi
  ULONG_PTR v5; // rbp
  PMDL Mdl; // rax
  struct _KPRCB *v9; // r9
  struct _MDL *v10; // rdi
  struct _MDL *v11; // r14
  ULONG_PTR i; // rsi
  PVOID MappedSystemVa; // rax
  unsigned __int64 PageForHeader; // rax
  void *Pool; // rax
  void *v17; // rbx
  struct _MDL *v18; // rax

  v4 = a3;
  v5 = a3 >> 12;
  if ( a4 )
  {
    Mdl = IoAllocateMdl(0LL, a3, 0, 0, 0LL);
    v10 = Mdl;
    if ( Mdl )
    {
      v11 = Mdl + 1;
      for ( i = 0LL; i < v5; ++i )
      {
        PageForHeader = MiGetPageForHeader(a1, a2, 0, v9);
        if ( PageForHeader == -1LL )
        {
          v10->ByteCount = (_DWORD)i << 12;
LABEL_10:
          MiDeleteImageCreationMdls(v10);
          return 0LL;
        }
        if ( !i )
          v10->MdlFlags |= 0x4002u;
        v11->Next = (struct _MDL *)PageForHeader;
        v11 = (struct _MDL *)((char *)v11 + 8);
      }
      if ( (v10->MdlFlags & 5) != 0 )
        MappedSystemVa = v10->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !MappedSystemVa )
        goto LABEL_10;
      return v10;
    }
  }
  else
  {
    Pool = (void *)MiAllocatePool(0x40uLL, a3, 2021158221);
    v17 = Pool;
    if ( Pool )
    {
      v18 = IoAllocateMdl(Pool, v4, 0, 0, 0LL);
      v10 = v18;
      if ( v18 )
      {
        MmBuildMdlForNonPagedPool(v18);
        v10->MdlFlags |= 0x4000u;
        return v10;
      }
      ExFreePoolWithTag(v17, 0);
    }
  }
  return 0LL;
}
