/*
 * XREFs of MiDeleteImageCreationMdls @ 0x140945F4C
 * Callers:
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MiCreateMdl @ 0x140945DF8 (MiCreateMdl.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiReturnPfnReferenceCount @ 0x140311244 (MiReturnPfnReferenceCount.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageCreationMdls(PMDL Mdl, __int64 a2, __int64 a3)
{
  int v3; // r14d
  PMDL v4; // rbx
  CSHORT MdlFlags; // ax
  struct _MDL *Next; // rbp
  struct _MDL *v7; // rsi
  unsigned __int64 i; // rdi

  if ( Mdl )
  {
    v3 = a2;
    v4 = Mdl;
    do
    {
      MdlFlags = v4->MdlFlags;
      Next = v4->Next;
      if ( (MdlFlags & 4) != 0 )
      {
        ExFreePoolWithTag(v4->StartVa, 0);
      }
      else if ( (MdlFlags & 2) != 0 )
      {
        if ( (MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v4->MappedSystemVa, v4);
        if ( v3 )
        {
          v7 = v4 + 1;
          for ( i = (unsigned __int64)v4->ByteCount >> 12; i; --i )
          {
            if ( v7->Next != (struct _MDL *)-1LL )
              MiReturnPfnReferenceCount(48 * (__int64)v7->Next - 0x220000000000LL, a2, a3);
            v7 = (struct _MDL *)((char *)v7 + 8);
          }
        }
      }
      IoFreeMdl(v4);
      v4 = Next;
    }
    while ( Next );
  }
}
