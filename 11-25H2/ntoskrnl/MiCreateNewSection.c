/*
 * XREFs of MiCreateNewSection @ 0x14093EAC0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MiAllocateMappedWriterMdls @ 0x14040AA5C (MiAllocateMappedWriterMdls.c)
 *     IoSetTopLevelIrp @ 0x14042A720 (IoSetTopLevelIrp.c)
 *     MiSectionCreated @ 0x140453594 (MiSectionCreated.c)
 *     MiReleaseImageSection @ 0x1404876E8 (MiReleaseImageSection.c)
 *     MiMakePartitionActive @ 0x14048C0A0 (MiMakePartitionActive.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiMakeImageReadOnly @ 0x14049C768 (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeGetImageRequiredSigningLevel @ 0x14091DE58 (SeGetImageRequiredSigningLevel.c)
 *     MiCreateDataFileMap @ 0x14093BE74 (MiCreateDataFileMap.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 *     MiParseComAndCetHeaders @ 0x140943A6C (MiParseComAndCetHeaders.c)
 *     MiValidateSectionSigningPolicy @ 0x140945CA8 (MiValidateSectionSigningPolicy.c)
 *     MiDeleteImageCreationMdls @ 0x140A2AA8C (MiDeleteImageCreationMdls.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AAC920 (FsRtlGetDirectImageOriginalBase.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateNewSection(unsigned int *a1, __int64 *a2)
{
  ULONG **v3; // rdi
  int v4; // r12d
  struct _FILE_OBJECT *v5; // r13
  int v6; // r14d
  LARGE_INTEGER v7; // r15
  ULONG *v8; // rdi
  int MappedWriterMdls; // esi
  struct _FILE_OBJECT *v10; // rsi
  int v11; // r13d
  int ImageFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v14; // r14
  __int64 v15; // r14
  _QWORD *v16; // rsi
  signed __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // r15d
  int Flink; // esi
  int v24; // edx
  char v25; // cl
  unsigned int v26; // esi
  int v27; // edx
  int v28; // esi
  __int64 v29; // rax
  char v30; // r15
  PFILE_OBJECT v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int64 v34; // r9
  PMDL v35; // rbx
  struct _MDL *v36; // r15
  ULONG i; // esi
  PMDL v38; // rbx
  CSHORT MdlFlags; // ax
  struct _MDL *Next; // rsi
  char v41; // al
  int DirectImageOriginalBase; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned __int64 v45; // r9
  int v46; // [rsp+30h] [rbp-D0h]
  char v47; // [rsp+50h] [rbp-B0h]
  char v48[15]; // [rsp+51h] [rbp-AFh] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h]
  PMDL MemoryDescriptorList; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 *v54; // [rsp+88h] [rbp-78h]
  __int64 v55[11]; // [rsp+90h] [rbp-70h] BYREF
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]

  v54 = a2;
  v50 = 0LL;
  v51 = 0LL;
  memset_0(v55, 0, 0x70uLL);
  v3 = (ULONG **)*((_QWORD *)a1 + 22);
  v4 = 0;
  v5 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  v6 = a1[4];
  v7 = *(LARGE_INTEGER *)(a1 + 38);
  v47 = *((_BYTE *)a1 + 24);
  *(_WORD *)v48 = 0;
  FileObject = v5;
  v48[3] = 0;
  *(_DWORD *)&v48[7] = 0;
  if ( v3 )
    v8 = *v3;
  else
    v8 = &MiSystemPartition;
  if ( (v8[1] & 0x80u) != 0 )
  {
    if ( (*a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*((PIRP *)a1 + 23));
      FsRtlReleaseFile(v5);
      *a1 &= ~2u;
    }
    return 3221225659LL;
  }
  else
  {
    MappedWriterMdls = MiAllocateMappedWriterMdls((__int64)v8);
    if ( MappedWriterMdls >= 0 )
    {
      if ( (unsigned int)MiMakePartitionActive((__int64)v8) )
      {
        MemoryDescriptorList = 0LL;
        v10 = FileObject;
        v11 = v6 & 0x1000000;
        if ( (v6 & 0x1000000) != 0 )
          ImageFileMap = MiCreateImageFileMap(
                           FileObject,
                           (__int64)&v50,
                           (__int64)&MemoryDescriptorList,
                           (__int64)v55,
                           (__int64)&v48[7]);
        else
          ImageFileMap = MiCreateDataFileMap(FileObject, v8, (LARGE_INTEGER **)&v50, v7, a1[7], v6, a1[43], *a1);
        ImageRequiredSigningLevel = ImageFileMap;
        if ( ImageFileMap < 0 )
        {
          if ( (*a1 & 2) != 0 )
          {
            IoSetTopLevelIrp(*((PIRP *)a1 + 23));
            FsRtlReleaseFile(v10);
            *a1 &= ~2u;
          }
          return (unsigned int)ImageRequiredSigningLevel;
        }
        v14 = v50;
        *v54 = v50;
        if ( v7.QuadPart )
        {
          *((LARGE_INTEGER *)a1 + 16) = v7;
        }
        else
        {
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
          v14 = v50;
          *((_QWORD *)a1 + 16) = v18;
        }
        v15 = *(_QWORD *)v14;
        if ( (*a1 & 0x400000) != 0 )
          *(_BYTE *)(v15 + 62) |= 1u;
        if ( (*a1 & 0x1000) != 0 )
          *(_DWORD *)(v15 + 56) |= 0x20000u;
        v16 = (_QWORD *)MiSectionCreated(a1, (__int64)v10, v15, (__int64)MemoryDescriptorList);
        if ( (*a1 & 2) != 0 )
        {
          IoSetTopLevelIrp(*((PIRP *)a1 + 23));
          FsRtlReleaseFile(FileObject);
          *a1 &= ~2u;
        }
        if ( !v11 )
          goto LABEL_18;
        v19 = *(_QWORD *)(v50 + 56);
        v53 = v19;
        if ( !v56 && !v57 && !*(_BYTE *)(v19 + 50) )
          *(_WORD *)(v50 + 12) |= 0x4000u;
        if ( (*(_DWORD *)(v15 + 56) & 0x800) != 0 )
        {
          if ( (*a1 & 0x40000) != 0 )
          {
            dword_140E2D4B8 = 5;
            ImageRequiredSigningLevel = -1073740749;
            goto LABEL_56;
          }
          ImageRequiredSigningLevel = MiSetPagesModified((_QWORD *)v15, a1[42]);
          if ( ImageRequiredSigningLevel < 0 )
          {
            dword_140E2D4B8 = 6;
            goto LABEL_56;
          }
        }
        ImageRequiredSigningLevel = MiParseComAndCetHeaders(v15, v55, &v48[1]);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140E2D4B8 = 4;
          goto LABEL_56;
        }
        v20 = *a1;
        if ( (*a1 & 0x80u) != 0 )
        {
          v21 = 4;
        }
        else if ( (v20 & 0x20) != 0 )
        {
          v21 = 1;
        }
        else if ( (v20 & 0x10) != 0 )
        {
          v21 = (*a1 & 0x800) != 0 ? 8 : 2;
        }
        else
        {
          v21 = 0;
        }
        v22 = v21 | 0x10;
        if ( (v20 & 0x400) == 0 )
          v22 = v21;
        if ( (v20 & 0x2200) == 0 || (v20 & 0x10) != 0 )
        {
          v25 = v47;
        }
        else
        {
          Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
          ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject, v22, v47, 0, v48);
          if ( ImageRequiredSigningLevel < 0 )
          {
            dword_140E2D4B8 = 7;
            goto LABEL_56;
          }
          if ( (*a1 & 0x400) == 0 )
          {
            if ( v47 && (Flink & 0x800000) != 0 )
              v4 = 1;
            if ( (Flink & 0x1000000) != 0 )
            {
              v48[3] = 8;
            }
            else
            {
              v24 = (unsigned __int8)v48[3];
              if ( (Flink & 0x2000000) != 0 )
                v24 = 6;
              *(_DWORD *)&v48[3] = v24;
            }
          }
          v25 = v48[0];
          v47 = v48[0];
          *((_BYTE *)a1 + 24) = v48[0];
        }
        v26 = *a1;
        if ( (*a1 & 0x40000) != 0 )
        {
          v41 = v25;
          v22 |= 0x40000000u;
          if ( !v25 )
            v41 = 4;
          v25 = v41;
          v47 = v41;
        }
        v27 = v22 | 0x20000000;
        if ( (v26 & 0x200000) == 0 )
          v27 = v22;
        LODWORD(v54) = v27;
        if ( (MiFlags & 0x20000) != 0 )
        {
          v26 |= 0x2000u;
          *a1 = v26;
          if ( !v25 )
          {
            v25 = 1;
            v47 = 1;
          }
        }
        if ( (v26 & 0x2000) == 0 )
        {
          if ( (v26 & 0x200) == 0 )
            goto LABEL_49;
          if ( !v25 && *(char *)(v53 + 46) >= 0 )
          {
LABEL_60:
            if ( v48[3] )
              v4 |= 4u;
LABEL_50:
            LODWORD(v53) = 0;
            v28 = (v26 >> 5) & 1;
            if ( (*(_BYTE *)(v15 + 62) & 0xC) != 0 )
            {
              DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
              ImageRequiredSigningLevel = DirectImageOriginalBase;
              if ( DirectImageOriginalBase >= 0 )
              {
                v29 = v51;
LABEL_52:
                v30 = v48[1];
                if ( (v4 & 6) != 0 )
                {
                  if ( v29 != -1 )
                  {
                    ImageRequiredSigningLevel = MiRelocateImage(v50, (unsigned int)v55, *(_DWORD *)&v48[7], v28, v29, 0);
                    if ( ImageRequiredSigningLevel < 0 )
                    {
                      dword_140E2D4B8 = 9;
                      goto LABEL_56;
                    }
                    LODWORD(v53) = 1;
                    if ( v30 )
                      MiMakeImageReadOnly(v15, v43, v44, v45);
                  }
                  if ( (*a1 & 0x4000000) != 0 )
                    v4 |= 8u;
                  v46 = v4;
                  v31 = FileObject;
                  ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                                0,
                                                (_DWORD)FileObject,
                                                v15,
                                                a1[42],
                                                *((_QWORD *)a1 + 20),
                                                (_DWORD)v54,
                                                v46,
                                                v47,
                                                v48[3]);
                  if ( ImageRequiredSigningLevel < 0 )
                  {
                    dword_140E2D4B8 = 10;
                    goto LABEL_56;
                  }
                  if ( (_DWORD)v53 )
                    goto LABEL_86;
                  v29 = v51;
                }
                else
                {
                  v31 = FileObject;
                }
                ImageRequiredSigningLevel = MiRelocateImage(v50, (unsigned int)v55, *(_DWORD *)&v48[7], v28, v29, 0);
                if ( ImageRequiredSigningLevel < 0 )
                {
                  dword_140E2D4B8 = 11;
LABEL_56:
                  MiDeleteImageCreationMdls(MemoryDescriptorList);
                  return (unsigned int)ImageRequiredSigningLevel;
                }
                if ( v30 )
                  MiMakeImageReadOnly(v15, v32, v33, v34);
LABEL_86:
                v35 = MemoryDescriptorList;
                if ( MemoryDescriptorList )
                {
                  do
                  {
                    if ( (v35->MdlFlags & 4) == 0 )
                    {
                      v36 = v35 + 1;
                      for ( i = v35->ByteCount >> 12; i; --i )
                      {
                        if ( v36->Next != (struct _MDL *)-1LL )
                          MiFinalizeImageHeaderPage(48 * (__int64)v36->Next - 0x220000000000LL);
                        v36 = (struct _MDL *)((char *)v36 + 8);
                      }
                    }
                    v35 = v35->Next;
                  }
                  while ( v35 );
                  v38 = MemoryDescriptorList;
                  if ( MemoryDescriptorList )
                  {
                    do
                    {
                      MdlFlags = v38->MdlFlags;
                      Next = v38->Next;
                      if ( (MdlFlags & 4) != 0 )
                      {
                        ExFreePoolWithTag(v38->StartVa, 0);
                      }
                      else if ( (MdlFlags & 2) != 0 && (MdlFlags & 1) != 0 )
                      {
                        MmUnmapLockedPages(v38->MappedSystemVa, v38);
                      }
                      IoFreeMdl(v38);
                      v38 = Next;
                    }
                    while ( Next );
                  }
                }
                v16 = (_QWORD *)MiReleaseImageSection((__int64)v31, v15);
LABEL_18:
                MiReleaseControlAreaWaiters(v16);
                return (unsigned int)ImageRequiredSigningLevel;
              }
              if ( DirectImageOriginalBase != -1073741637 && DirectImageOriginalBase != -1073741808 )
              {
                dword_140E2D4B8 = 8;
                goto LABEL_56;
              }
            }
            v29 = -1LL;
            v51 = -1LL;
            goto LABEL_52;
          }
        }
        v4 |= 2u;
LABEL_49:
        if ( (v26 & 0x200) == 0 )
          goto LABEL_50;
        goto LABEL_60;
      }
      MappedWriterMdls = -1073741523;
    }
    if ( (*a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*((PIRP *)a1 + 23));
      FsRtlReleaseFile(v5);
      *a1 &= ~2u;
    }
    return (unsigned int)MappedWriterMdls;
  }
}
