/*
 * XREFs of MiAllocateFileExtents @ 0x140AA0BF4
 * Callers:
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MiFaultGetFileExtents @ 0x140426C40 (MiFaultGetFileExtents.c)
 *     MiRefillPurgedExtents @ 0x1404276E4 (MiRefillPurgedExtents.c)
 *     MiInitializeCachedExtentWalker @ 0x1404BA55C (MiInitializeCachedExtentWalker.c)
 *     MiUpdateActiveSubsection @ 0x14067A164 (MiUpdateActiveSubsection.c)
 *     MiInitializeImageExtents @ 0x1407F0928 (MiInitializeImageExtents.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiEndingOffset @ 0x1403F2438 (MiEndingOffset.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiSetSubsectionBase @ 0x14048CB68 (MiSetSubsectionBase.c)
 *     MiSubsectionProtosCreated @ 0x1404C8D48 (MiSubsectionProtosCreated.c)
 *     FsRtlGetFileExtents @ 0x14057CC20 (FsRtlGetFileExtents.c)
 *     MiChangingSubsectionProtos @ 0x14067B60C (MiChangingSubsectionProtos.c)
 *     MiEliminateStaleExtents @ 0x14067BA38 (MiEliminateStaleExtents.c)
 *     MiInsertCopyExtents @ 0x14067C4D0 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14067C8D4 (MiMergeCopyExtents.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x14067CF6C (MiUnlinkSubsectionWaitBlock.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140693F18 (MiReplaceSystemProtoPtesNode.c)
 *     MiNewPfnsSuitable @ 0x1407EA264 (MiNewPfnsSuitable.c)
 *     MiConvertRunsToPages @ 0x1407F0508 (MiConvertRunsToPages.c)
 *     MiCreateFileOnlyPfns @ 0x1407F06F4 (MiCreateFileOnlyPfns.c)
 *     MiDeleteFileExtentList @ 0x1407F08AC (MiDeleteFileExtentList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateFileExtents(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        ULONG_PTR a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  struct _FILE_OBJECT *v14; // rbx
  unsigned int v15; // r13d
  _DWORD *Pool; // rax
  _DWORD *v17; // rsi
  int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r13
  void *v24; // r12
  int v25; // edi
  int FileOnlyPfns; // ebx
  __int64 v27; // r8
  unsigned int *inserted; // rdi
  __int64 v30; // r13
  __int128 *v31; // rcx
  char v32; // dl
  unsigned __int64 v33; // [rsp+28h] [rbp-99h]
  __int64 v34; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-81h] BYREF
  unsigned int *v36; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-71h]
  struct _FILE_OBJECT *v38; // [rsp+58h] [rbp-69h]
  unsigned __int64 v39; // [rsp+60h] [rbp-61h]
  _OWORD v40[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v41; // [rsp+88h] [rbp-39h]
  __int128 v42; // [rsp+90h] [rbp-31h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-21h]
  __int128 v44; // [rsp+B0h] [rbp-11h]
  int v45; // [rsp+118h] [rbp+57h]
  unsigned int v46; // [rsp+120h] [rbp+5Fh]

  v46 = a2;
  v7 = a3;
  v37 = 0LL;
  v9 = (unsigned int)(a4 << 12);
  v39 = (unsigned int)v9;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
LABEL_2:
  v10 = *(_QWORD *)BugCheckParameter2;
  v11 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 0x20) != 0 )
  {
    v45 = 1;
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
      v12 = MiStartingOffset((__int64 *)BugCheckParameter2, v7, a6);
    else
      v12 = (unsigned __int64)a2 << 12;
    v13 = MiEndingOffset((_DWORD *)BugCheckParameter2);
    v37 = v13;
    if ( v12 == v13 && !v12 )
      return 0LL;
    if ( v11 + v12 > v13 )
      v11 = ((unsigned int)(v13 - v12) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  }
  else
  {
    v45 = 2;
    v12 = (a2
         + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_DWORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
  }
  v14 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v10);
  v38 = v14;
  LODWORD(v34) = 1;
  v15 = ((__rdtsc() >> 4) & 7) + 8;
  while ( v15 )
  {
    Pool = (_DWORD *)MiAllocatePool(0x40uLL, 16LL * (v15 - 1) + 24, 877029709);
    v17 = Pool;
    if ( Pool )
    {
      v18 = v45;
      *Pool = v15;
      Pool[1] = 0;
      v34 = 0LL;
      if ( v45 == 1 )
      {
        if ( v11 + v12 > v37 )
          v11 = (unsigned int)(v37 - v12);
        v19 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( v19 && (*(_DWORD *)((*(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 56) & 0x1000) != 0 )
          v12 = (v19 - *(_QWORD *)(*(_QWORD *)v10 + 64LL)) >> 3 << 12;
      }
      v11 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v45 != 1 || (*(_DWORD *)(v10 + 56) & 2) == 0 )
      {
        LODWORD(v35) = MiChangingSubsectionProtos((__int64 *)BugCheckParameter2, a5 | 8, (__int64)v40);
        if ( (v35 & 0x80000000) != 0LL )
        {
          MiDereferenceControlAreaFile(v10, (signed __int64)v14);
LABEL_99:
          ExFreePoolWithTag(v17, 0);
          return (unsigned int)v35;
        }
        v18 = v45;
        HIDWORD(v34) = 1;
      }
      LODWORD(v35) = FsRtlGetFileExtents(v14, v18, v12, v11, v17);
      if ( (v35 & 0x80000000) != 0LL )
      {
        MiDereferenceControlAreaFile(v10, (signed __int64)v14);
        if ( HIDWORD(v34) )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v40, 0);
        goto LABEL_99;
      }
      if ( v17[1] <= v15 )
      {
        MiDereferenceControlAreaFile(v10, (signed __int64)v14);
        if ( (unsigned int)MiNewPfnsSuitable((__int64)v17) )
        {
          v23 = 0LL;
          LODWORD(v34) = 3;
          v24 = 0LL;
          v35 = 0LL;
          if ( v17[1] )
          {
            v24 = (void *)MiConvertRunsToPages(v22, v21, &v35, (unsigned int *)&v34);
            if ( v24 )
            {
              if ( (a5 & 0x40) == 0 || (unsigned int)v34 <= 1 )
              {
                v25 = v45;
                if ( v45 != 1 || (*(_DWORD *)(v10 + 56) & 2) == 0 )
                {
                  v23 = v35;
                  goto LABEL_43;
                }
                v23 = v35;
                goto LABEL_52;
              }
              FileOnlyPfns = -1073741800;
            }
            else
            {
LABEL_36:
              FileOnlyPfns = -1073741670;
            }
          }
          else
          {
            if ( (a5 & 0x40) == 0 )
            {
              v25 = v45;
              if ( v45 != 1 )
              {
                if ( (*(_BYTE *)(v10 + 62) & 0xC) == 8 )
                  goto LABEL_36;
LABEL_43:
                FileOnlyPfns = MiChangingSubsectionProtos((__int64 *)BugCheckParameter2, a5 | 0x10, (__int64)v40);
                if ( FileOnlyPfns < 0 )
                {
                  ExFreePoolWithTag(v17, 0);
                  if ( v24 )
                    ExFreePoolWithTag(v24, 0);
                  if ( FileOnlyPfns == -1073740748 )
                  {
                    v7 = a3;
                    a2 = v46;
                    v9 = v39;
                    goto LABEL_2;
                  }
                  return (unsigned int)FileOnlyPfns;
                }
                if ( v24 && (*(_BYTE *)(v10 + 62) & 0xC) == 4 && (a5 & 1) == 0 )
                  MiEliminateStaleExtents(a3, (__int64)v24, v23);
                if ( v25 != 1 && (*(_BYTE *)(v10 + 62) & 0xC) == 8 )
                {
                  if ( (a5 & 1) != 0 )
                  {
                    inserted = (unsigned int *)MiInsertCopyExtents((__int64)v17, 0LL, 1);
                    if ( !inserted )
                    {
                      FileOnlyPfns = -1073741670;
                      goto LABEL_67;
                    }
LABEL_53:
                    ExFreePoolWithTag(v17, 0);
                    if ( inserted )
                    {
                      v30 = a3;
                      FileOnlyPfns = 0;
                      goto LABEL_73;
                    }
                    if ( v24 && (*(_BYTE *)(v10 + 56) & 0x20) == 0 && (a5 & 1) != 0 && (*(_BYTE *)(v10 + 62) & 0xC) == 4 )
                    {
                      *((_QWORD *)&v44 + 1) = v23;
                      *((_QWORD *)&v43 + 1) = *((_QWORD *)&v43 + 1) & 0xFFFFFFFFFFFFFFF8uLL | 4;
                      *(_QWORD *)&v44 = a3;
                      MiUpdateSystemProtoPtesTree((__int64)&v42, 1);
                    }
                    v33 = v23;
                    v30 = a3;
                    FileOnlyPfns = MiCreateFileOnlyPfns((__int64 *)BugCheckParameter2, a3, a5, (__int64)v24, v33);
                    if ( FileOnlyPfns < 0 )
                    {
                      if ( !(_QWORD)v44 )
                        goto LABEL_84;
                      v32 = 0;
                      v31 = &v42;
                    }
                    else
                    {
LABEL_73:
                      if ( (a5 & 1) == 0 )
                        goto LABEL_84;
                      if ( (a5 & 0x40) != 0 )
                        *(_DWORD *)(BugCheckParameter2 + 108) = 2;
                      MiSetSubsectionBase((__int64 *)BugCheckParameter2, v30, v34, (__int64)inserted);
                      v31 = (__int128 *)(BugCheckParameter2 + 120);
                      if ( (_QWORD)v44 )
                      {
                        MiReplaceSystemProtoPtesNode(&v42, (_QWORD *)(BugCheckParameter2 + 120));
LABEL_84:
                        if ( v45 != 1 || (*(_DWORD *)(v10 + 56) & 2) == 0 )
                          MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v40, a4, 0);
                        if ( v24 )
                          ExFreePoolWithTag(v24, 0);
                        return (unsigned int)FileOnlyPfns;
                      }
                      if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
                        goto LABEL_84;
                      v32 = 1;
                    }
                    MiUpdateSystemProtoPtesTree((__int64)v31, v32);
                    goto LABEL_84;
                  }
                  FileOnlyPfns = MiMergeCopyExtents((_QWORD *)BugCheckParameter2, (__int64)v17, v27, &v36);
                  if ( FileOnlyPfns < 0 )
                  {
                    inserted = v36;
                    if ( FileOnlyPfns == -1073741302 )
                      FileOnlyPfns = 0;
LABEL_67:
                    MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v40, 0, 0);
                    goto LABEL_94;
                  }
                }
LABEL_52:
                inserted = v36;
                goto LABEL_53;
              }
            }
            FileOnlyPfns = -1073741823;
          }
        }
        else
        {
          FileOnlyPfns = -1073740761;
        }
        if ( HIDWORD(v34) )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v40, 0);
        inserted = v36;
LABEL_94:
        ExFreePoolWithTag(v17, 0);
        if ( inserted )
          MiDeleteFileExtentList(inserted);
        return (unsigned int)FileOnlyPfns;
      }
      if ( HIDWORD(v34) )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v40, 0);
      v20 = v17[1];
      v17[1] = v15;
      ExFreePoolWithTag(v17, 0);
      v15 = v20;
      v14 = v38;
    }
    else
    {
      if ( !(_DWORD)v34 )
        break;
      v15 >>= 1;
    }
  }
  MiDereferenceControlAreaFile(v10, (signed __int64)v14);
  return 3221225626LL;
}
