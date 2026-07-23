/*
 * XREFs of MiDeleteImageCreationMdls @ 0x14098FC88
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 *     MiCreateMdl @ 0x14098FB34 (MiCreateMdl.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MiReturnPfnReferenceCount @ 0x1403F02E4 (MiReturnPfnReferenceCount.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageCreationMdls(PMDL Mdl, __int64 a2, __int64 a3, __int64 a4)
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
