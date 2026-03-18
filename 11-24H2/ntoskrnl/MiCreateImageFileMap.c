/*
 * XREFs of MiCreateImageFileMap @ 0x140944150
 * Callers:
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     PsIsCurrentThreadPrefetching @ 0x14044ADC0 (PsIsCurrentThreadPrefetching.c)
 *     CcZeroEndOfLastPage @ 0x14044C774 (CcZeroEndOfLastPage.c)
 *     MiCopyHeaderIfResident @ 0x1404765F4 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x140483F48 (MiFlushDataSection.c)
 *     MiLegacyImageArchitecture @ 0x140488598 (MiLegacyImageArchitecture.c)
 *     MiInitializeImageHeaderPage @ 0x14048E2E4 (MiInitializeImageHeaderPage.c)
 *     IoIsDeviceEjectable @ 0x140491560 (IoIsDeviceEjectable.c)
 *     MiEnableImageDirectMap @ 0x14067A928 (MiEnableImageDirectMap.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MiLogCreateImageFileMapFailure @ 0x1407EC04C (MiLogCreateImageFileMapFailure.c)
 *     MiAllocateEntireImageFileExtents @ 0x1407EFC4C (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteFileExtentList @ 0x1407F02DC (MiDeleteFileExtentList.c)
 *     FsRtlGetFileSize @ 0x140942760 (FsRtlGetFileSize.c)
 *     MiVerifyImageHeader @ 0x1409449F8 (MiVerifyImageHeader.c)
 *     MiBuildImageControlArea @ 0x1409451C0 (MiBuildImageControlArea.c)
 *     MiReadImageHeaders @ 0x1409456C8 (MiReadImageHeaders.c)
 *     MiCreateMdl @ 0x140945DF8 (MiCreateMdl.c)
 *     MiDeleteImageCreationMdls @ 0x140945F4C (MiDeleteImageCreationMdls.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        struct _MDL **a6,
        __int64 a7,
        __int128 *a8)
{
  _DWORD *v9; // r12
  NTSTATUS result; // eax
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  __int64 Mdl; // rax
  struct _MDL *v17; // r13
  int v18; // r14d
  ULONG LowPart; // r14d
  unsigned __int64 v20; // r9
  __int64 StartVa; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rdi
  unsigned __int64 v26; // r9
  __int64 v27; // r11
  unsigned int v28; // r9d
  unsigned int v29; // r8d
  __int128 v30; // xmm0
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // r14
  unsigned int v35; // r10d
  __int64 v36; // r10
  PFILE_OBJECT v37; // rdi
  int v38; // eax
  __int64 v39; // rdx
  bool v40; // di
  __int16 v41; // r14
  __int64 v42; // rcx
  char v43; // r8
  unsigned __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rdx
  unsigned __int8 v47; // al
  PVOID *v48; // rbx
  PFILE_OBJECT v49; // rcx
  __int64 v50; // r14
  __int64 v51; // rdi
  __int64 v52; // rcx
  unsigned __int64 QuadPart; // rdx
  int EntireImageFileExtents; // eax
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  struct _MDL *v59; // rax
  struct _MDL *v60; // rcx
  unsigned int v61; // edi
  __int64 v62; // rcx
  __int64 v63; // rax
  bool v64; // zf
  __int128 *v65; // rax
  unsigned __int64 v66; // rdi
  struct _MDL *v67; // rax
  unsigned __int64 v68; // rdx
  PDEVICE_OBJECT DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  char v71; // [rsp+40h] [rbp-C0h]
  __int64 v73; // [rsp+50h] [rbp-B0h]
  _DWORD *v75; // [rsp+68h] [rbp-98h] BYREF
  int v76; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v77; // [rsp+74h] [rbp-8Ch]
  __int64 v78; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER FileSize; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v82; // [rsp+98h] [rbp-68h] BYREF
  __int128 v83; // [rsp+A0h] [rbp-60h] BYREF
  int v84; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v85; // [rsp+B8h] [rbp-48h]
  __int64 v86; // [rsp+C0h] [rbp-40h]
  __int64 v87; // [rsp+C8h] [rbp-38h]
  __int128 v88; // [rsp+D0h] [rbp-30h] BYREF
  int v89; // [rsp+E0h] [rbp-20h]
  _DWORD *v90; // [rsp+E8h] [rbp-18h] BYREF
  ULONG_PTR v91; // [rsp+F0h] [rbp-10h]
  __int128 v92; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD *v93; // [rsp+108h] [rbp+8h]
  struct _MDL **v94; // [rsp+110h] [rbp+10h]
  __int128 *v95; // [rsp+118h] [rbp+18h] BYREF
  int v96; // [rsp+120h] [rbp+20h]
  int v97; // [rsp+124h] [rbp+24h]

  v93 = a5;
  v9 = 0LL;
  v94 = a6;
  v95 = a8;
  v89 = 0;
  v88 = 0LL;
  v76 = 0;
  v83 = 0LL;
  FileSize.QuadPart = 0LL;
  v92 = 0LL;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result >= 0 )
  {
    if ( FileSize.HighPart )
    {
      dword_140E2D6F8 = 34;
      return -1073741792;
    }
    v86 = 0LL;
    v14 = 1LL;
    v80 = 0LL;
    v81 = 0LL;
    v73 = 0LL;
    v75 = 0LL;
    v15 = 0LL;
    Mdl = MiCreateMdl(a2, a3, 4096LL, 1LL);
    v17 = (struct _MDL *)Mdl;
    if ( !Mdl )
    {
      dword_140E2D6F8 = 35;
      return -1073741670;
    }
    *(_QWORD *)(Mdl + 16) = 0LL;
    v91 = *(_QWORD *)(Mdl + 48);
    CcZeroEndOfLastPage(FileObject);
    v18 = MiFlushDataSection((__int64)FileObject, &v76);
    if ( v18 == -1073741740 )
    {
      dword_140E2D6F8 = 36;
    }
    else
    {
      v71 = 0;
      if ( v76 )
        a4 |= 0x80000u;
      if ( (a4 & 0x80040) == 0 || (v71 = 1, !PsIsCurrentThreadPrefetching()) )
      {
        LowPart = FileSize.LowPart;
        if ( (a4 & 0x4000) != 0 )
        {
          QuadPart = FileSize.QuadPart;
          if ( (a4 & 0x20000) != 0 )
            QuadPart = 4096LL;
          EntireImageFileExtents = MiAllocateEntireImageFileExtents(FileObject, QuadPart, 0LL, (__int64 *)&v75);
          v9 = v75;
          v18 = EntireImageFileExtents;
          if ( EntireImageFileExtents < 0 )
          {
            dword_140E2D6F8 = 38;
            goto LABEL_86;
          }
        }
        else
        {
          if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObject, v91) )
          {
            v20 = 4096LL;
            *((_QWORD *)&v83 + 1) = 4096LL;
            goto LABEL_12;
          }
          if ( !v71 && ((a4 & 0x20) != 0 || (a4 & 0x200) != 0 && LowPart <= 0x20000) )
          {
            v49 = FileObject;
            if ( FileObject->SectionObjectPointer->DataSectionObject )
              goto LABEL_65;
            v14 = ((unsigned __int64)LowPart + 4095) >> 12;
            if ( v14 <= 1 )
              goto LABEL_65;
            v86 = MiCreateMdl(a2, a3, v14 << 12, 0LL);
            v50 = v86;
            if ( v86 )
            {
              MiDeleteImageCreationMdls(v17);
              *(_QWORD *)(v50 + 16) = 0LL;
              v17 = (struct _MDL *)v50;
            }
            else
            {
              v14 = 1LL;
            }
          }
        }
        v49 = FileObject;
LABEL_65:
        v20 = *((_QWORD *)&v83 + 1);
        if ( !*((_QWORD *)&v83 + 1) )
        {
          v18 = MiReadImageHeaders(v49, v9, v17, &v83);
          if ( v18 < 0 )
          {
            dword_140E2D6F8 = 40;
            goto LABEL_86;
          }
          v20 = *((_QWORD *)&v83 + 1);
          if ( *((_QWORD *)&v83 + 1) != v14 << 12 && *((_QWORD *)&v83 + 1) < 0x40uLL )
          {
            v18 = -1073741521;
            dword_140E2D6F8 = 41;
            goto LABEL_86;
          }
        }
LABEL_12:
        if ( (v17->MdlFlags & 4) != 0 )
          StartVa = (__int64)v17->StartVa;
        else
          StartVa = (__int64)v17->MappedSystemVa;
        v82 = (_DWORD *)StartVa;
        if ( *(_WORD *)StartVa == 23117 )
        {
          v22 = *(unsigned int *)(StartVa + 60);
          v77 = v22;
          if ( (int)v22 + 264 < (unsigned int)v22 )
          {
            v18 = -1073741520;
            dword_140E2D6F8 = 42;
          }
          else
          {
            v23 = v22 + 264;
            v78 = v22;
            v24 = (unsigned int)v22;
            if ( (unsigned __int64)(v22 + 264) > FileSize.QuadPart )
            {
              v18 = -1073741520;
              dword_140E2D6F8 = 43;
            }
            else
            {
              if ( v23 > v14 << 12 )
              {
                v51 = a2;
                v57 = 0x2000LL;
                v58 = (FileSize.QuadPart - ((unsigned int)v22 & 0xFFFFF000) + 4095) & 0xFFFFFFFFFFFFF000uLL;
                v85 = (FileSize.QuadPart - (v24 & 0xFFFFFFFFFFFFF000uLL) + 4095) & 0xFFFFFFFFFFFFF000uLL;
                if ( v58 < 0x2000 )
                  v57 = v58;
                v87 = v57;
                v59 = (struct _MDL *)MiCreateMdl(a2, a3, v57, 1LL);
                v60 = v59;
                if ( !v59 )
                {
                  v18 = -1073741670;
                  dword_140E2D6F8 = 44;
                  v48 = 0LL;
                  goto LABEL_80;
                }
                v59->Next = v17;
                v61 = v24 & 0xFFFFF000;
                v17 = v59;
                v59->Process = (struct _EPROCESS *)(((unsigned int)v24 & 0xFFFFF000) / 4096LL);
                if ( (a4 & 0x20000) != 0 )
                {
                  v90 = 0LL;
                  v18 = MiAllocateEntireImageFileExtents(FileObject, v85, v9, (__int64 *)&v90);
                  if ( v18 < 0 )
                  {
                    dword_140E2D6F8 = 128;
                    goto LABEL_86;
                  }
                  v9 = v90;
                  v60 = v17;
                  v75 = v90;
                }
                v18 = MiReadImageHeaders(FileObject, v9, v60, &v83);
                if ( v18 < 0 )
                {
                  dword_140E2D6F8 = 45;
                  goto LABEL_86;
                }
                if ( *((_QWORD *)&v83 + 1) != (unsigned int)v87
                  && *((_QWORD *)&v83 + 1) < (unsigned __int64)(v78 & 0xFFF) + 264 )
                {
                  v18 = -1073741520;
                  dword_140E2D6F8 = 46;
                  goto LABEL_86;
                }
                v62 = v78 & 0xFFF;
                v26 = *((_QWORD *)&v83 + 1) - v62;
                v87 = (__int64)v17->MappedSystemVa + v62;
                *((_QWORD *)&v83 + 1) += v61;
                v25 = v87;
                StartVa = (__int64)v82;
              }
              else
              {
                if ( v23 > v20 )
                {
                  v18 = -1073741520;
                  dword_140E2D6F8 = 47;
                  goto LABEL_86;
                }
                v25 = (unsigned int)v22 + StartVa;
                v26 = v20 - (unsigned int)v22;
              }
              v18 = MiVerifyImageHeader(a7, v25, StartVa, v26);
              if ( v18 )
              {
                v48 = 0LL;
                v80 = 0LL;
                if ( v18 >= 0 )
                  goto LABEL_53;
                goto LABEL_79;
              }
              v27 = a7;
              v28 = v77;
              *(_DWORD *)v95 = v77;
              v29 = *(_DWORD *)(a7 + 16);
              if ( (v29 >> 12) + ((v29 & 0xFFF) != 0) )
              {
                v30 = *(_OWORD *)(v25 + 4);
                v89 = *(_DWORD *)(v25 + 20);
                v31 = (unsigned __int16)v89 + 24;
                v84 = v31;
                v88 = v30;
                if ( v28 + v31 + 40 * WORD1(v30) <= v28 )
                {
                  v18 = -1073741701;
                  dword_140E2D6F8 = 50;
                }
                else
                {
                  v32 = v31 + v28;
                  v33 = 40LL * WORD1(v30);
                  v34 = (unsigned int)v32;
                  v35 = v33 + v32;
                  if ( *(unsigned int *)(a7 + 24) >= (unsigned __int64)(v33 + v32) )
                    v35 = *(_DWORD *)(a7 + 24);
                  LODWORD(v78) = v35;
                  if ( v35 > v29 )
                  {
                    v18 = -1073741701;
                    dword_140E2D6F8 = 48;
                  }
                  else
                  {
                    if ( (unsigned __int64)(v33 + v32) > *((_QWORD *)&v83 + 1) )
                    {
                      v63 = ((_WORD)v25 + (_WORD)v31) & 0xFFF;
                      v64 = v33 + v63 == 0;
                      v65 = (__int128 *)(v33 + v63);
                      v95 = v65;
                      if ( v64
                        || (v66 = ((unsigned __int64)v65 + 4095) & 0xFFFFFFFFFFFFF000uLL, (unsigned __int64)v65 > v66) )
                      {
                        v18 = -1073741701;
                        dword_140E2D6F8 = 51;
                        goto LABEL_86;
                      }
                      v67 = (struct _MDL *)MiCreateMdl(
                                             a2,
                                             a3,
                                             ((unsigned __int64)v65 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                                             1LL);
                      if ( !v67 )
                      {
                        v18 = -1073741670;
                        dword_140E2D6F8 = 52;
                        goto LABEL_86;
                      }
                      v67->Next = v17;
                      v17 = v67;
                      v67->Process = (struct _EPROCESS *)(v34 >> 12);
                      if ( (a4 & 0x20000) != 0 )
                      {
                        v82 = 0LL;
                        v68 = v66;
                        v37 = FileObject;
                        v18 = MiAllocateEntireImageFileExtents(FileObject, v68, v9, (__int64 *)&v82);
                        if ( v18 < 0 )
                        {
                          dword_140E2D6F8 = 129;
                          goto LABEL_86;
                        }
                        v9 = v82;
                        v67 = v17;
                        v75 = v82;
                      }
                      else
                      {
                        v37 = FileObject;
                      }
                      v18 = MiReadImageHeaders(v37, v9, v67, &v83);
                      if ( v18 < 0 )
                      {
                        dword_140E2D6F8 = 53;
                        goto LABEL_86;
                      }
                      if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)v95 )
                      {
                        v18 = -1073741701;
                        dword_140E2D6F8 = 54;
                        goto LABEL_86;
                      }
                      v27 = a7;
                      v36 = (__int64)v17->MappedSystemVa + (((_WORD)v77 + (_WORD)v84) & 0xFFF);
                    }
                    else
                    {
                      LODWORD(v36) = v25 + v31;
                      v37 = FileObject;
                    }
                    if ( *(_DWORD *)(v27 + 12) >= 0x1000u )
                      goto LABEL_29;
                    if ( (a4 & 0x40000) != 0 )
                    {
                      v18 = -1073741701;
                      MiLogCreateImageFileMapFailure();
                      if ( qword_140F04958 )
                        guard_dispatch_icall_no_overrides(v37, *(unsigned int *)(a7 + 64), DWORD1(v88), v55);
                      dword_140E2D6F8 = 55;
                    }
                    else
                    {
                      if ( MiLegacyImageArchitecture(v88) )
                      {
                        a4 |= 0x100000u;
LABEL_29:
                        v38 = MiBuildImageControlArea(
                                a3,
                                v36,
                                v27,
                                (unsigned int)&v88,
                                a4,
                                (__int64)&FileSize,
                                (__int64)&v81);
                        v15 = v81;
                        v18 = v38;
                        if ( v38 >= 0 )
                        {
                          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v81 + 56LL) + 64LL) = v78;
                          *(_WORD *)(v15 + 60) ^= (*(_WORD *)a2 ^ *(_WORD *)(v15 + 60)) & 0x3FF;
                          if ( (a4 & 0x100) != 0 )
                            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v15 + 56LL) + 51LL) |= 0x10u;
                          v39 = *(_QWORD *)v15;
                          v40 = 0;
                          v73 = *(_QWORD *)v15;
                          if ( !v86 && !v17->Next && (a4 & 0x104000) == 0 )
                            v40 = *(_DWORD *)(a7 + 24) < 0x1000u;
                          v41 = HIWORD(v89);
                          if ( !v71
                            && (IoIsDeviceEjectable((__int64)FileObject->DeviceObject)
                             || (v41 & 0x400) != 0
                             && ((unsigned __int8)*(_DWORD *)(v42 + 52) & (unsigned __int8)v43) != 0
                             || (v41 & 0x800) != 0 && (*(_DWORD *)(v42 + 52) & 0x10) != 0) )
                          {
                            v71 = v43;
                          }
                          v44 = *(_QWORD *)(v39 + 16);
                          v80 = v44;
                          if ( !v44 )
                            goto LABEL_41;
                          if ( (unsigned int)MiChargeCommit(a2, v44, 0) )
                          {
                            _InterlockedAdd64((volatile signed __int64 *)(a2 + 19640), v80);
                            v15 = v81;
                            v41 = HIWORD(v89);
                            v9 = v75;
LABEL_41:
                            v45 = *(_DWORD *)(v15 + 56);
                            if ( (v45 & 0x20000) != 0 && (a4 & 0x100000) == 0 && (*(_DWORD *)(a7 + 20) & 0x1000000) == 0 )
                              *(_DWORD *)(v15 + 56) = v45 | 0x8000000;
                            if ( v86 )
                              MiInitializeImageProtos(v15, v86);
                            if ( v40 )
                              MiInitializeImageHeaderPage(v15, v91, *(unsigned int *)(a7 + 24));
                            v46 = a7;
                            if ( *(_WORD *)(a7 + 48) == 267 )
                              *(_WORD *)(v73 + 12) |= 0x8000u;
                            v47 = v71;
                            if ( v71 )
                            {
                              v56 = *(_DWORD *)(v15 + 56) | 0x800;
                              *(_DWORD *)(v15 + 56) = v56;
                              if ( (a4 & 0x80040) != 0 )
                                *(_DWORD *)(v15 + 56) = v56 | 0x40000;
                              if ( (PerfGlobalGroupMask[0] & 4) != 0 )
                              {
                                DeviceObject = FileObject->DeviceObject;
                                *(_QWORD *)&v92 = FileObject->FsContext;
                                WORD6(v92) = v41;
                                DWORD2(v92) = DeviceObject->Characteristics;
                                IsDeviceEjectable = IoIsDeviceEjectable((__int64)DeviceObject);
                                v97 = 0;
                                v96 = 16;
                                HIWORD(v92) = (a4 >> 19) & 1 | (2 * ((2 * ((a4 >> 6) & 1)) | IsDeviceEjectable));
                                v95 = &v92;
                                EtwTraceKernelEvent((int)&v95, 1, 4u, 617, 5249026);
                                v46 = a7;
                              }
                              v47 = v71;
                            }
                            if ( (a4 & 0x4000) == 0 )
                              goto LABEL_50;
                            v18 = MiEnableImageDirectMap(
                                    (__int64)FileObject,
                                    (__int64 *)v15,
                                    v46,
                                    v9,
                                    HIWORD(a4) & 1,
                                    (a4 >> 17) & 1,
                                    v47);
                            if ( v18 >= 0 )
                            {
                              v9 = 0LL;
                              if ( (*(_BYTE *)(v15 + 62) & 0xC) == 4 )
                              {
                                MiDeleteImageCreationMdls(v17);
                                v17 = 0LL;
                              }
LABEL_50:
                              v18 = 0;
                              *v93 = v73;
                              *v94 = v17;
LABEL_53:
                              if ( v9 )
                                MiDeleteFileExtentList(v9);
                              return v18;
                            }
                            dword_140E2D6F8 = 58;
                            goto LABEL_78;
                          }
                          dword_140E2D6F8 = 57;
                          v80 = 0LL;
                          v18 = -1073741523;
                        }
LABEL_78:
                        v48 = (PVOID *)v73;
LABEL_79:
                        v51 = a2;
LABEL_80:
                        MiDeleteImageCreationMdls(v17);
                        v52 = v80;
                        if ( v80 )
                        {
                          _InterlockedAdd64((volatile signed __int64 *)(v51 + 19640), -v80);
                          MiReturnCommit(v51, v52, 0);
                          v15 = v81;
                          v9 = v75;
                        }
                        if ( v15 )
                        {
                          MiUpdateSystemProtoPtesTree(*(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFF8uLL, 0);
                          ExFreePoolWithTag(v48[8], 0);
                          ExFreePoolWithTag(v48, 0);
                          ExFreePoolWithTag((PVOID)v15, 0);
                        }
                        goto LABEL_53;
                      }
                      v18 = -1073741701;
                      dword_140E2D6F8 = 56;
                    }
                  }
                }
              }
              else
              {
                v18 = -1073741701;
                dword_140E2D6F8 = 49;
              }
            }
          }
        }
        else
        {
          v18 = -1073741521;
        }
LABEL_86:
        v48 = 0LL;
        goto LABEL_79;
      }
      dword_140E2D6F8 = 37;
      v18 = -1073740749;
    }
    v48 = 0LL;
    goto LABEL_79;
  }
  dword_140E2D6F8 = 33;
  if ( result == -1073741638 )
    return -1073741792;
  return result;
}
