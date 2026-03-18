/*
 * XREFs of MiDeleteImageCreationMdls @ 0x140A2AA8C
 * Callers:
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 *     MiCreateMdl @ 0x140A2A938 (MiCreateMdl.c)
 * Callees:
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MiReturnPfnReferenceCount @ 0x14045416C (MiReturnPfnReferenceCount.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageCreationMdls(PMDL Mdl, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // r14d
  PMDL v5; // rbx
  CSHORT MdlFlags; // ax
  struct _MDL *Next; // rbp
  struct _MDL *v8; // rsi
  unsigned __int64 i; // rdi

  if ( Mdl )
  {
    v4 = a2;
    v5 = Mdl;
    do
    {
      MdlFlags = v5->MdlFlags;
      Next = v5->Next;
      if ( (MdlFlags & 4) != 0 )
      {
        ExFreePoolWithTag(v5->StartVa, 0);
      }
      else if ( (MdlFlags & 2) != 0 )
      {
        if ( (MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v5->MappedSystemVa, v5);
        if ( v4 )
        {
          v8 = v5 + 1;
          for ( i = (unsigned __int64)v5->ByteCount >> 12; i; --i )
          {
            if ( v8->Next != (struct _MDL *)-1LL )
              MiReturnPfnReferenceCount(48 * (__int64)v8->Next - 0x220000000000LL, a2, a3, a4);
            v8 = (struct _MDL *)((char *)v8 + 8);
          }
        }
      }
      IoFreeMdl(v5);
      v5 = Next;
    }
    while ( Next );
  }
}
