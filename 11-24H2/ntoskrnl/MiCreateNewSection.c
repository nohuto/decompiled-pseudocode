/*
 * XREFs of MiCreateNewSection @ 0x14098D630
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiSectionCreated @ 0x1403F09E0 (MiSectionCreated.c)
 *     IoSetTopLevelIrp @ 0x140418300 (IoSetTopLevelIrp.c)
 *     MiAllocateMappedWriterMdls @ 0x140462D3C (MiAllocateMappedWriterMdls.c)
 *     MiReleaseImageSection @ 0x140482068 (MiReleaseImageSection.c)
 *     MiMakePartitionActive @ 0x140485044 (MiMakePartitionActive.c)
 *     MiMakeImageReadOnly @ 0x14048C870 (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x1404998B8 (MiFinalizeImageHeaderPage.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E2D38 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiValidateSectionSigningPolicy @ 0x14093C388 (MiValidateSectionSigningPolicy.c)
 *     MiParseComAndCetHeaders @ 0x14093DDBC (MiParseComAndCetHeaders.c)
 *     MiCreateDataFileMap @ 0x14098A990 (MiCreateDataFileMap.c)
 *     FsRtlReleaseFile @ 0x14098D3F0 (FsRtlReleaseFile.c)
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 *     MiDeleteImageCreationMdls @ 0x14098FC88 (MiDeleteImageCreationMdls.c)
 *     SeGetImageRequiredSigningLevel @ 0x1409FA728 (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AACB00 (FsRtlGetDirectImageOriginalBase.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 */

__int64 __fastcall MiCreateNewSection(int *a1, __int64 a2)
{
  ULONG **v3; // rdi
  char v4; // r13
  struct _FILE_OBJECT *v5; // r12
  int v6; // r14d
  LARGE_INTEGER v7; // r15
  ULONG *v8; // rdi
  int MappedWriterMdls; // esi
  struct _FILE_OBJECT *v11; // rsi
  int v12; // r12d
  int ImageFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v15; // r14
  signed __int64 v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  int v20; // edx
  int v21; // ecx
  int v22; // esi
  int Flink; // r15d
  int v24; // ecx
  char v25; // di
  char v26; // al
  int v27; // r15d
  char v28; // al
  unsigned int v29; // esi
  int v30; // r12d
  int v31; // esi
  int DirectImageOriginalBase; // eax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  PFILE_OBJECT v37; // r13
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  PMDL v41; // rbx
  struct _MDL *v42; // r15
  ULONG i; // esi
  char v44; // [rsp+30h] [rbp-D0h]
  char v45; // [rsp+50h] [rbp-B0h]
  char v46; // [rsp+51h] [rbp-AFh] BYREF
  char v47[14]; // [rsp+52h] [rbp-AEh] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  PMDL Mdl[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v53[22]; // [rsp+90h] [rbp-70h] BYREF
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]

  v50 = a2;
  v49 = 0LL;
  v51 = 0LL;
  memset_0(v53, 0, 0x70uLL);
  v3 = (ULONG **)*((_QWORD *)a1 + 22);
  v4 = 0;
  v5 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  v6 = a1[4];
  v7 = *(LARGE_INTEGER *)(a1 + 38);
  v45 = *((_BYTE *)a1 + 24);
  v47[0] = 0;
  FileObject = v5;
  v46 = 0;
  v47[2] = 0;
  *(_DWORD *)&v47[6] = 0;
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
  MappedWriterMdls = MiAllocateMappedWriterMdls((__int64)v8);
  if ( MappedWriterMdls >= 0 )
  {
    if ( !(unsigned int)MiMakePartitionActive((__int64)v8) )
    {
      MappedWriterMdls = -1073741523;
      goto LABEL_11;
    }
    Mdl[0] = 0LL;
    v11 = FileObject;
    v12 = v6 & 0x1000000;
    if ( (v6 & 0x1000000) != 0 )
      ImageFileMap = MiCreateImageFileMap(FileObject, (__int64)&v49, (__int64)Mdl, (__int64)v53, (__int64)&v47[6]);
    else
      ImageFileMap = MiCreateDataFileMap(FileObject, v8, (LARGE_INTEGER **)&v49, v7, a1[7], v6, a1[43], *a1);
    ImageRequiredSigningLevel = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*((PIRP *)a1 + 23));
        FsRtlReleaseFile(v11);
        *a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v15 = v49;
    *(_QWORD *)v50 = v49;
    if ( v7.QuadPart )
    {
      *((LARGE_INTEGER *)a1 + 16) = v7;
    }
    else
    {
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), -1LL, -1LL);
      v15 = v49;
      *((_QWORD *)a1 + 16) = v16;
    }
    v17 = *(_QWORD *)v15;
    if ( (*a1 & 0x400000) != 0 )
      *(_BYTE *)(v17 + 62) |= 1u;
    if ( (*a1 & 0x1000) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x20000u;
    v18 = (_QWORD *)MiSectionCreated(a1, (__int64)v11, v17, (__int64)Mdl[0]);
    if ( (*a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*((PIRP *)a1 + 23));
      FsRtlReleaseFile(FileObject);
      *a1 &= ~2u;
    }
    if ( !v12 )
      goto LABEL_119;
    v19 = *(_QWORD *)(v49 + 56);
    v50 = v19;
    if ( !v54 && !v55 && !*(_BYTE *)(v19 + 50) )
      *(_WORD *)(v49 + 12) |= 0x4000u;
    if ( (*(_DWORD *)(v17 + 56) & 0x800) != 0 )
    {
      if ( (*a1 & 0x40000) != 0 )
      {
        dword_140E2D838 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_121:
        MiDeleteImageCreationMdls(Mdl[0]);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified((_QWORD *)v17, a1[42]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140E2D838 = 6;
        goto LABEL_121;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders((__int64 *)v17, v53, &v46);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140E2D838 = 4;
      goto LABEL_121;
    }
    v20 = *a1;
    if ( (*a1 & 0x80u) == 0 )
    {
      if ( (v20 & 0x20) != 0 )
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
    }
    else
    {
      v21 = 4;
    }
    v22 = v21 | 0x10;
    if ( (v20 & 0x400) == 0 )
      v22 = v21;
    if ( (v20 & 0x2200) == 0 || (v20 & 0x10) != 0 )
    {
      v25 = v45;
    }
    else
    {
      Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject, (__int64)v47);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140E2D838 = 7;
        goto LABEL_121;
      }
      if ( (*a1 & 0x400) == 0 )
      {
        if ( v45 && (Flink & 0x800000) != 0 )
          v4 = 1;
        if ( (Flink & 0x1000000) != 0 )
        {
          v47[2] = 8;
        }
        else
        {
          v24 = (unsigned __int8)v47[2];
          if ( (Flink & 0x2000000) != 0 )
            v24 = 6;
          *(_DWORD *)&v47[2] = v24;
        }
      }
      v25 = v47[0];
      v45 = v47[0];
      *((_BYTE *)a1 + 24) = v47[0];
    }
    if ( (*a1 & 0x40000) != 0 )
    {
      v26 = v25;
      v22 |= 0x40000000u;
      if ( !v25 )
        v26 = 4;
      v25 = v26;
      v45 = v26;
    }
    v27 = v22 | 0x20000000;
    if ( (*a1 & 0x200000) == 0 )
      v27 = v22;
    if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() && (*a1 & 0x8000000) != 0 )
      v27 |= 0x200000u;
    if ( (MiFlags & 0x20000) != 0 )
    {
      *a1 |= 0x2000u;
      v28 = v25;
      if ( !v25 )
        v28 = 1;
      v25 = v28;
      v45 = v28;
    }
    v29 = *a1;
    if ( (*a1 & 0x2000) == 0 )
    {
      if ( (v29 & 0x200) == 0 )
        goto LABEL_84;
      if ( !v25 && *(char *)(v50 + 46) >= 0 )
      {
LABEL_85:
        if ( v47[2] )
          v4 |= 4u;
LABEL_87:
        LODWORD(v50) = 0;
        v30 = (v29 >> 5) & 1;
        v31 = (v29 >> 27) & 2;
        if ( (*(_BYTE *)(v17 + 62) & 0xC) != 0 )
        {
          DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
          ImageRequiredSigningLevel = DirectImageOriginalBase;
          if ( DirectImageOriginalBase >= 0 )
          {
            v33 = v51;
            goto LABEL_94;
          }
          if ( DirectImageOriginalBase != -1073741637 && DirectImageOriginalBase != -1073741808 )
          {
            dword_140E2D838 = 8;
            goto LABEL_121;
          }
        }
        v33 = -1LL;
        v51 = -1LL;
LABEL_94:
        if ( (v4 & 6) != 0 )
        {
          if ( v33 != -1 )
          {
            ImageRequiredSigningLevel = MiRelocateImage(v49, (unsigned int)v53, *(_DWORD *)&v47[6], v30, v33, v31);
            if ( ImageRequiredSigningLevel < 0 )
            {
              dword_140E2D838 = 9;
              goto LABEL_121;
            }
            LODWORD(v50) = 1;
            if ( v46 )
              MiMakeImageReadOnly(v17, v34, v35, v36);
          }
          if ( (*a1 & 0x4000000) != 0 )
            v4 |= 8u;
          v44 = v4;
          v37 = FileObject;
          ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                        0,
                                        (__int64)FileObject,
                                        v17,
                                        a1[42],
                                        *((_QWORD *)a1 + 20),
                                        v27,
                                        v44,
                                        v45,
                                        v47[2]);
          if ( ImageRequiredSigningLevel < 0 )
          {
            dword_140E2D838 = 10;
            goto LABEL_121;
          }
          if ( (_DWORD)v50 )
            goto LABEL_110;
          v33 = v51;
        }
        else
        {
          v37 = FileObject;
        }
        ImageRequiredSigningLevel = MiRelocateImage(v49, (unsigned int)v53, *(_DWORD *)&v47[6], v30, v33, v31);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140E2D838 = 11;
          goto LABEL_121;
        }
        if ( v46 )
          MiMakeImageReadOnly(v17, v38, v39, v40);
LABEL_110:
        v41 = Mdl[0];
        if ( Mdl[0] )
        {
          do
          {
            if ( (v41->MdlFlags & 4) == 0 )
            {
              v42 = v41 + 1;
              for ( i = v41->ByteCount >> 12; i; --i )
              {
                if ( v42->Next != (struct _MDL *)-1LL )
                  MiFinalizeImageHeaderPage(48 * (__int64)v42->Next - 0x220000000000LL);
                v42 = (struct _MDL *)((char *)v42 + 8);
              }
            }
            v41 = v41->Next;
          }
          while ( v41 );
          v41 = Mdl[0];
        }
        MiDeleteImageCreationMdls(v41);
        v18 = (_QWORD *)MiReleaseImageSection((__int64)v37, v17);
LABEL_119:
        MiReleaseControlAreaWaiters(v18);
        return (unsigned int)ImageRequiredSigningLevel;
      }
    }
    v4 |= 2u;
LABEL_84:
    if ( (v29 & 0x200) == 0 )
      goto LABEL_87;
    goto LABEL_85;
  }
LABEL_11:
  if ( (*a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*((PIRP *)a1 + 23));
    FsRtlReleaseFile(v5);
    *a1 &= ~2u;
  }
  return (unsigned int)MappedWriterMdls;
}
