/*
 * XREFs of MiCreateNewSection @ 0x1409433C0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiSectionCreated @ 0x140312C30 (MiSectionCreated.c)
 *     IoSetTopLevelIrp @ 0x140424450 (IoSetTopLevelIrp.c)
 *     MiAllocateMappedWriterMdls @ 0x140469E0C (MiAllocateMappedWriterMdls.c)
 *     MiReleaseImageSection @ 0x140486FF8 (MiReleaseImageSection.c)
 *     MiMakePartitionActive @ 0x14048A21C (MiMakePartitionActive.c)
 *     MiMakeImageReadOnly @ 0x140491960 (MiMakeImageReadOnly.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiFinalizeImageHeaderPage @ 0x14049EAB8 (MiFinalizeImageHeaderPage.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E56E0 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiParseComAndCetHeaders @ 0x1408F4F14 (MiParseComAndCetHeaders.c)
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     SeGetImageRequiredSigningLevel @ 0x1409350E8 (SeGetImageRequiredSigningLevel.c)
 *     FsRtlReleaseFile @ 0x140943180 (FsRtlReleaseFile.c)
 *     MiCreateDataFileMap @ 0x140943D3C (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MiDeleteImageCreationMdls @ 0x140945F4C (MiDeleteImageCreationMdls.c)
 *     MiValidateSectionSigningPolicy @ 0x1409579F8 (MiValidateSectionSigningPolicy.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140AB1B90 (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(int *a1, __int64 a2)
{
  ULONG **v3; // rdi
  int v4; // r12d
  struct _FILE_OBJECT *v5; // r13
  int v6; // r14d
  __int64 v7; // r15
  ULONG *v8; // rdi
  int MappedWriterMdls; // esi
  PFILE_OBJECT v11; // rsi
  int v12; // r13d
  int ImageFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v15; // r14
  signed __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // r8
  int v24; // ecx
  struct _FILE_OBJECT *v25; // r13
  unsigned int v26; // esi
  int Flink; // r15d
  int v28; // ecx
  char v29; // di
  char v30; // al
  int v31; // r15d
  char v32; // al
  unsigned int v33; // esi
  int v34; // esi
  int DirectImageOriginalBase; // eax
  __int64 v36; // rax
  char v37; // r13
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  PFILE_OBJECT v40; // r12
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  PMDL v43; // rbx
  struct _MDL *v44; // r15
  ULONG i; // esi
  int v46; // [rsp+30h] [rbp-D0h]
  char v47; // [rsp+50h] [rbp-B0h]
  char v48; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE v49[2]; // [rsp+52h] [rbp-AEh] BYREF
  int v50; // [rsp+54h] [rbp-ACh]
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  PMDL Mdl[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v57[22]; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]

  v54 = a2;
  v53 = 0LL;
  v55 = 0LL;
  memset_0(v57, 0, 0x70uLL);
  v3 = (ULONG **)*((_QWORD *)a1 + 22);
  v4 = 0;
  v5 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  v6 = a1[4];
  v7 = *((_QWORD *)a1 + 19);
  v47 = *((_BYTE *)a1 + 24);
  v48 = 0;
  FileObject = v5;
  v49[0] = 0;
  LOBYTE(v50) = 0;
  LODWORD(v52) = 0;
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
      ImageFileMap = MiCreateImageFileMap(FileObject, (__int64)&v53, (__int64)Mdl, (__int64)v57, (__int64)&v52);
    else
      ImageFileMap = MiCreateDataFileMap(FileObject, a1[7], v6, a1[43], *a1);
    ImageRequiredSigningLevel = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*((PIRP *)a1 + 23));
        FsRtlReleaseFile(FileObject);
        *a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v15 = v53;
    *(_QWORD *)v54 = v53;
    if ( v7 )
    {
      *((_QWORD *)a1 + 16) = v7;
    }
    else
    {
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), -1LL, -1LL);
      v15 = v53;
      *((_QWORD *)a1 + 16) = v16;
    }
    v17 = *(_QWORD *)v15;
    if ( (*a1 & 0x400000) != 0 )
      *(_BYTE *)(v17 + 62) |= 1u;
    if ( (*a1 & 0x1000) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x20000u;
    v19 = (_QWORD *)MiSectionCreated(a1, (__int64)v11, v17, (__int64)Mdl[0]);
    if ( (*a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*((PIRP *)a1 + 23));
      FsRtlReleaseFile(FileObject);
      *a1 &= ~2u;
    }
    if ( !v12 )
      goto LABEL_119;
    v21 = *(_QWORD *)(v53 + 56);
    v54 = v21;
    if ( !v58 && !v59 && !*(_BYTE *)(v21 + 50) )
      *(_WORD *)(v53 + 12) |= 0x4000u;
    if ( (*(_DWORD *)(v17 + 56) & 0x800) != 0 )
    {
      if ( (*a1 & 0x40000) != 0 )
      {
        dword_140E2D6F8 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_121:
        MiDeleteImageCreationMdls(Mdl[0]);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified((_QWORD *)v17, a1[42]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140E2D6F8 = 6;
        goto LABEL_121;
      }
    }
    ImageRequiredSigningLevel = MiParseComAndCetHeaders((__int64 *)v17, v57, v49);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140E2D6F8 = 4;
      goto LABEL_121;
    }
    v22 = *a1;
    v23 = 4LL;
    if ( (*a1 & 0x80u) == 0 )
    {
      if ( (v22 & 0x20) != 0 )
      {
        v24 = 1;
      }
      else if ( (v22 & 0x10) != 0 )
      {
        v24 = (*a1 & 0x800) != 0 ? 8 : 2;
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = 4;
    }
    v25 = FileObject;
    v26 = v24 | 0x10;
    if ( (v22 & 0x400) == 0 )
      v26 = v24;
    if ( (v22 & 0x2200) == 0 || (v22 & 0x10) != 0 )
    {
      v29 = v47;
    }
    else
    {
      LOBYTE(v23) = v47;
      Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((__int64)FileObject, v26, v23, 0LL, &v48);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140E2D6F8 = 7;
        goto LABEL_121;
      }
      if ( (*a1 & 0x400) == 0 )
      {
        if ( v47 && (Flink & 0x800000) != 0 )
          v4 = 1;
        if ( (Flink & 0x1000000) != 0 )
        {
          LOBYTE(v50) = 8;
        }
        else
        {
          v28 = (unsigned __int8)v50;
          if ( (Flink & 0x2000000) != 0 )
            v28 = 6;
          v50 = v28;
        }
      }
      v29 = v48;
      v47 = v48;
      *((_BYTE *)a1 + 24) = v48;
    }
    if ( (*a1 & 0x40000) != 0 )
    {
      v30 = v29;
      v26 |= 0x40000000u;
      if ( !v29 )
        v30 = 4;
      v29 = v30;
      v47 = v30;
    }
    v31 = v26 | 0x20000000;
    if ( (*a1 & 0x200000) == 0 )
      v31 = v26;
    if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() && (*a1 & 0x8000000) != 0 )
      v31 |= 0x200000u;
    if ( (MiFlags & 0x20000) != 0 )
    {
      *a1 |= 0x2000u;
      v32 = v29;
      if ( !v29 )
        v32 = 1;
      v29 = v32;
      v47 = v32;
    }
    v33 = *a1;
    if ( (*a1 & 0x2000) == 0 )
    {
      if ( (v33 & 0x200) == 0 )
        goto LABEL_84;
      if ( !v29 && *(char *)(v54 + 46) >= 0 )
      {
LABEL_85:
        if ( (_BYTE)v50 )
          v4 |= 4u;
LABEL_87:
        LODWORD(v54) = 0;
        v34 = (v33 >> 5) & 1;
        if ( (*(_BYTE *)(v17 + 62) & 0xC) != 0 )
        {
          DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v25);
          ImageRequiredSigningLevel = DirectImageOriginalBase;
          if ( DirectImageOriginalBase >= 0 )
          {
            v36 = v55;
            goto LABEL_94;
          }
          if ( DirectImageOriginalBase != -1073741637 && DirectImageOriginalBase != -1073741808 )
          {
            dword_140E2D6F8 = 8;
            goto LABEL_121;
          }
        }
        v36 = -1LL;
        v55 = -1LL;
LABEL_94:
        v37 = v49[0];
        if ( (v4 & 6) != 0 )
        {
          if ( v36 != -1 )
          {
            ImageRequiredSigningLevel = MiRelocateImage(v53, (__int64)v57, v52, v34, v36, 0);
            if ( ImageRequiredSigningLevel < 0 )
            {
              dword_140E2D6F8 = 9;
              goto LABEL_121;
            }
            LODWORD(v54) = 1;
            if ( v37 )
              MiMakeImageReadOnly(v17, v38, v39);
          }
          if ( (*a1 & 0x4000000) != 0 )
            v4 |= 8u;
          v46 = v4;
          v40 = FileObject;
          ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                        0,
                                        (_DWORD)FileObject,
                                        v17,
                                        a1[42],
                                        *((_QWORD *)a1 + 20),
                                        v31,
                                        v46,
                                        v47,
                                        v50);
          if ( ImageRequiredSigningLevel < 0 )
          {
            dword_140E2D6F8 = 10;
            goto LABEL_121;
          }
          if ( (_DWORD)v54 )
            goto LABEL_110;
          v36 = v55;
        }
        else
        {
          v40 = FileObject;
        }
        ImageRequiredSigningLevel = MiRelocateImage(v53, (__int64)v57, v52, v34, v36, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140E2D6F8 = 11;
          goto LABEL_121;
        }
        if ( v37 )
          MiMakeImageReadOnly(v17, v41, v42);
LABEL_110:
        v43 = Mdl[0];
        if ( Mdl[0] )
        {
          do
          {
            if ( (v43->MdlFlags & 4) == 0 )
            {
              v44 = v43 + 1;
              for ( i = v43->ByteCount >> 12; i; --i )
              {
                if ( v44->Next != (struct _MDL *)-1LL )
                  MiFinalizeImageHeaderPage(48 * (__int64)v44->Next - 0x220000000000LL);
                v44 = (struct _MDL *)((char *)v44 + 8);
              }
            }
            v43 = v43->Next;
          }
          while ( v43 );
          v43 = Mdl[0];
        }
        MiDeleteImageCreationMdls(v43);
        v19 = (_QWORD *)MiReleaseImageSection((__int64)v40, v17);
LABEL_119:
        MiReleaseControlAreaWaiters(v19, v18, v20);
        return (unsigned int)ImageRequiredSigningLevel;
      }
    }
    v4 |= 2u;
LABEL_84:
    if ( (v33 & 0x200) == 0 )
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
