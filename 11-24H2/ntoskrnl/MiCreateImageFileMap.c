/*
 * XREFs of MiCreateImageFileMap @ 0x14098DFC0
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiInitializeImageHeaderPage @ 0x1402EE5B0 (MiInitializeImageHeaderPage.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiCopyHeaderIfResident @ 0x1403F0510 (MiCopyHeaderIfResident.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     PsIsCurrentThreadPrefetching @ 0x140441F00 (PsIsCurrentThreadPrefetching.c)
 *     CcZeroEndOfLastPage @ 0x140443674 (CcZeroEndOfLastPage.c)
 *     MiFlushDataSection @ 0x14047F468 (MiFlushDataSection.c)
 *     MiLegacyImageArchitecture @ 0x1404836E8 (MiLegacyImageArchitecture.c)
 *     IoIsDeviceEjectable @ 0x14048C058 (IoIsDeviceEjectable.c)
 *     MiEnableImageDirectMap @ 0x14067BB08 (MiEnableImageDirectMap.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MiLogCreateImageFileMapFailure @ 0x1407EC61C (MiLogCreateImageFileMapFailure.c)
 *     MiAllocateEntireImageFileExtents @ 0x1407F021C (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteFileExtentList @ 0x1407F08AC (MiDeleteFileExtentList.c)
 *     FsRtlGetFileSize @ 0x14098C9D0 (FsRtlGetFileSize.c)
 *     MiVerifyImageHeader @ 0x14098E868 (MiVerifyImageHeader.c)
 *     MiBuildImageControlArea @ 0x14098F030 (MiBuildImageControlArea.c)
 *     MiReadImageHeaders @ 0x14098F538 (MiReadImageHeaders.c)
 *     MiCreateMdl @ 0x14098FB34 (MiCreateMdl.c)
 *     MiDeleteImageCreationMdls @ 0x14098FC88 (MiDeleteImageCreationMdls.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  int v55; // eax
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  struct _MDL *v58; // rax
  struct _MDL *v59; // rcx
  unsigned int v60; // edi
  __int64 v61; // rcx
  __int64 v62; // rax
  bool v63; // zf
  __int128 *v64; // rax
  unsigned __int64 v65; // rdi
  struct _MDL *v66; // rax
  unsigned __int64 v67; // rdx
  PDEVICE_OBJECT DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  char v70; // [rsp+40h] [rbp-C0h]
  __int64 v72; // [rsp+50h] [rbp-B0h]
  _DWORD *v74; // [rsp+68h] [rbp-98h] BYREF
  int v75; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v76; // [rsp+74h] [rbp-8Ch]
  __int64 v77; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER FileSize; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 v79; // [rsp+88h] [rbp-78h]
  __int64 v80; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v81; // [rsp+98h] [rbp-68h] BYREF
  __int128 v82; // [rsp+A0h] [rbp-60h] BYREF
  int v83; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v84; // [rsp+B8h] [rbp-48h]
  __int64 v85; // [rsp+C0h] [rbp-40h]
  __int64 v86; // [rsp+C8h] [rbp-38h]
  __int128 v87; // [rsp+D0h] [rbp-30h] BYREF
  int v88; // [rsp+E0h] [rbp-20h]
  _DWORD *v89; // [rsp+E8h] [rbp-18h] BYREF
  ULONG_PTR v90; // [rsp+F0h] [rbp-10h]
  __int128 v91; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD *v92; // [rsp+108h] [rbp+8h]
  struct _MDL **v93; // [rsp+110h] [rbp+10h]
  __int128 *v94; // [rsp+118h] [rbp+18h] BYREF
  int v95; // [rsp+120h] [rbp+20h]
  int v96; // [rsp+124h] [rbp+24h]

  v92 = a5;
  v9 = 0LL;
  v93 = a6;
  v94 = a8;
  v88 = 0;
  v87 = 0LL;
  v75 = 0;
  v82 = 0LL;
  FileSize.QuadPart = 0LL;
  v91 = 0LL;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result >= 0 )
  {
    if ( FileSize.HighPart )
    {
      dword_140E2D838 = 34;
      return -1073741792;
    }
    v85 = 0LL;
    v14 = 1LL;
    v79 = 0LL;
    v80 = 0LL;
    v72 = 0LL;
    v74 = 0LL;
    v15 = 0LL;
    Mdl = MiCreateMdl(a2, a3, 4096LL, 1LL);
    v17 = (struct _MDL *)Mdl;
    if ( !Mdl )
    {
      dword_140E2D838 = 35;
      return -1073741670;
    }
    *(_QWORD *)(Mdl + 16) = 0LL;
    v90 = *(_QWORD *)(Mdl + 48);
    CcZeroEndOfLastPage(FileObject);
    v18 = MiFlushDataSection((__int64)FileObject, &v75);
    if ( v18 == -1073741740 )
    {
      dword_140E2D838 = 36;
    }
    else
    {
      v70 = 0;
      if ( v75 )
        a4 |= 0x80000u;
      if ( (a4 & 0x80040) == 0 || (v70 = 1, !PsIsCurrentThreadPrefetching()) )
      {
        LowPart = FileSize.LowPart;
        if ( (a4 & 0x4000) != 0 )
        {
          QuadPart = FileSize.QuadPart;
          if ( (a4 & 0x20000) != 0 )
            QuadPart = 4096LL;
          EntireImageFileExtents = MiAllocateEntireImageFileExtents(FileObject, QuadPart, 0LL, (__int64 *)&v74);
          v9 = v74;
          v18 = EntireImageFileExtents;
          if ( EntireImageFileExtents < 0 )
          {
            dword_140E2D838 = 38;
            goto LABEL_86;
          }
        }
        else
        {
          if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObject, v90) )
          {
            v20 = 4096LL;
            *((_QWORD *)&v82 + 1) = 4096LL;
            goto LABEL_12;
          }
          if ( !v70 && ((a4 & 0x20) != 0 || (a4 & 0x200) != 0 && LowPart <= 0x20000) )
          {
            v49 = FileObject;
            if ( FileObject->SectionObjectPointer->DataSectionObject )
              goto LABEL_65;
            v14 = ((unsigned __int64)LowPart + 4095) >> 12;
            if ( v14 <= 1 )
              goto LABEL_65;
            v85 = MiCreateMdl(a2, a3, v14 << 12, 0LL);
            v50 = v85;
            if ( v85 )
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
        v20 = *((_QWORD *)&v82 + 1);
        if ( !*((_QWORD *)&v82 + 1) )
        {
          v18 = MiReadImageHeaders(v49, v9, v17, &v82);
          if ( v18 < 0 )
          {
            dword_140E2D838 = 40;
            goto LABEL_86;
          }
          v20 = *((_QWORD *)&v82 + 1);
          if ( *((_QWORD *)&v82 + 1) != v14 << 12 && *((_QWORD *)&v82 + 1) < 0x40uLL )
          {
            v18 = -1073741521;
            dword_140E2D838 = 41;
            goto LABEL_86;
          }
        }
LABEL_12:
        if ( (v17->MdlFlags & 4) != 0 )
          StartVa = (__int64)v17->StartVa;
        else
          StartVa = (__int64)v17->MappedSystemVa;
        v81 = (_DWORD *)StartVa;
        if ( *(_WORD *)StartVa == 23117 )
        {
          v22 = *(unsigned int *)(StartVa + 60);
          v76 = v22;
          if ( (int)v22 + 264 < (unsigned int)v22 )
          {
            v18 = -1073741520;
            dword_140E2D838 = 42;
          }
          else
          {
            v23 = v22 + 264;
            v77 = v22;
            v24 = (unsigned int)v22;
            if ( (unsigned __int64)(v22 + 264) > FileSize.QuadPart )
            {
              v18 = -1073741520;
              dword_140E2D838 = 43;
            }
            else
            {
              if ( v23 > v14 << 12 )
              {
                v51 = a2;
                v56 = 0x2000LL;
                v57 = (FileSize.QuadPart - ((unsigned int)v22 & 0xFFFFF000) + 4095) & 0xFFFFFFFFFFFFF000uLL;
                v84 = (FileSize.QuadPart - (v24 & 0xFFFFFFFFFFFFF000uLL) + 4095) & 0xFFFFFFFFFFFFF000uLL;
                if ( v57 < 0x2000 )
                  v56 = v57;
                v86 = v56;
                v58 = (struct _MDL *)MiCreateMdl(a2, a3, v56, 1LL);
                v59 = v58;
                if ( !v58 )
                {
                  v18 = -1073741670;
                  dword_140E2D838 = 44;
                  v48 = 0LL;
                  goto LABEL_80;
                }
                v58->Next = v17;
                v60 = v24 & 0xFFFFF000;
                v17 = v58;
                v58->Process = (struct _EPROCESS *)(((unsigned int)v24 & 0xFFFFF000) / 4096LL);
                if ( (a4 & 0x20000) != 0 )
                {
                  v89 = 0LL;
                  v18 = MiAllocateEntireImageFileExtents(FileObject, v84, v9, (__int64 *)&v89);
                  if ( v18 < 0 )
                  {
                    dword_140E2D838 = 128;
                    goto LABEL_86;
                  }
                  v9 = v89;
                  v59 = v17;
                  v74 = v89;
                }
                v18 = MiReadImageHeaders(FileObject, v9, v59, &v82);
                if ( v18 < 0 )
                {
                  dword_140E2D838 = 45;
                  goto LABEL_86;
                }
                if ( *((_QWORD *)&v82 + 1) != (unsigned int)v86
                  && *((_QWORD *)&v82 + 1) < (unsigned __int64)(v77 & 0xFFF) + 264 )
                {
                  v18 = -1073741520;
                  dword_140E2D838 = 46;
                  goto LABEL_86;
                }
                v61 = v77 & 0xFFF;
                v26 = *((_QWORD *)&v82 + 1) - v61;
                v86 = (__int64)v17->MappedSystemVa + v61;
                *((_QWORD *)&v82 + 1) += v60;
                v25 = v86;
                StartVa = (__int64)v81;
              }
              else
              {
                if ( v23 > v20 )
                {
                  v18 = -1073741520;
                  dword_140E2D838 = 47;
                  goto LABEL_86;
                }
                v25 = (unsigned int)v22 + StartVa;
                v26 = v20 - (unsigned int)v22;
              }
              v18 = MiVerifyImageHeader(a7, v25, StartVa, v26);
              if ( v18 )
              {
                v48 = 0LL;
                v79 = 0LL;
                if ( v18 >= 0 )
                  goto LABEL_53;
                goto LABEL_79;
              }
              v27 = a7;
              v28 = v76;
              *(_DWORD *)v94 = v76;
              v29 = *(_DWORD *)(a7 + 16);
              if ( (v29 >> 12) + ((v29 & 0xFFF) != 0) )
              {
                v30 = *(_OWORD *)(v25 + 4);
                v88 = *(_DWORD *)(v25 + 20);
                v31 = (unsigned __int16)v88 + 24;
                v83 = v31;
                v87 = v30;
                if ( v28 + v31 + 40 * WORD1(v30) <= v28 )
                {
                  v18 = -1073741701;
                  dword_140E2D838 = 50;
                }
                else
                {
                  v32 = v31 + v28;
                  v33 = 40LL * WORD1(v30);
                  v34 = (unsigned int)v32;
                  v35 = v33 + v32;
                  if ( *(unsigned int *)(a7 + 24) >= (unsigned __int64)(v33 + v32) )
                    v35 = *(_DWORD *)(a7 + 24);
                  LODWORD(v77) = v35;
                  if ( v35 > v29 )
                  {
                    v18 = -1073741701;
                    dword_140E2D838 = 48;
                  }
                  else
                  {
                    if ( (unsigned __int64)(v33 + v32) > *((_QWORD *)&v82 + 1) )
                    {
                      v62 = ((_WORD)v25 + (_WORD)v31) & 0xFFF;
                      v63 = v33 + v62 == 0;
                      v64 = (__int128 *)(v33 + v62);
                      v94 = v64;
                      if ( v63
                        || (v65 = ((unsigned __int64)v64 + 4095) & 0xFFFFFFFFFFFFF000uLL, (unsigned __int64)v64 > v65) )
                      {
                        v18 = -1073741701;
                        dword_140E2D838 = 51;
                        goto LABEL_86;
                      }
                      v66 = (struct _MDL *)MiCreateMdl(
                                             a2,
                                             a3,
                                             ((unsigned __int64)v64 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                                             1LL);
                      if ( !v66 )
                      {
                        v18 = -1073741670;
                        dword_140E2D838 = 52;
                        goto LABEL_86;
                      }
                      v66->Next = v17;
                      v17 = v66;
                      v66->Process = (struct _EPROCESS *)(v34 >> 12);
                      if ( (a4 & 0x20000) != 0 )
                      {
                        v81 = 0LL;
                        v67 = v65;
                        v37 = FileObject;
                        v18 = MiAllocateEntireImageFileExtents(FileObject, v67, v9, (__int64 *)&v81);
                        if ( v18 < 0 )
                        {
                          dword_140E2D838 = 129;
                          goto LABEL_86;
                        }
                        v9 = v81;
                        v66 = v17;
                        v74 = v81;
                      }
                      else
                      {
                        v37 = FileObject;
                      }
                      v18 = MiReadImageHeaders(v37, v9, v66, &v82);
                      if ( v18 < 0 )
                      {
                        dword_140E2D838 = 53;
                        goto LABEL_86;
                      }
                      if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)v94 )
                      {
                        v18 = -1073741701;
                        dword_140E2D838 = 54;
                        goto LABEL_86;
                      }
                      v27 = a7;
                      v36 = (__int64)v17->MappedSystemVa + (((_WORD)v76 + (_WORD)v83) & 0xFFF);
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
                      if ( qword_140F04BF8 )
                        guard_dispatch_icall_no_overrides(v37, *(unsigned int *)(a7 + 64));
                      dword_140E2D838 = 55;
                    }
                    else
                    {
                      if ( MiLegacyImageArchitecture(v87) )
                      {
                        a4 |= 0x100000u;
LABEL_29:
                        v38 = MiBuildImageControlArea(
                                a3,
                                v36,
                                v27,
                                (unsigned int)&v87,
                                a4,
                                (__int64)&FileSize,
                                (__int64)&v80);
                        v15 = v80;
                        v18 = v38;
                        if ( v38 >= 0 )
                        {
                          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v80 + 56LL) + 64LL) = v77;
                          *(_WORD *)(v15 + 60) ^= (*(_WORD *)a2 ^ *(_WORD *)(v15 + 60)) & 0x3FF;
                          if ( (a4 & 0x100) != 0 )
                            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v15 + 56LL) + 51LL) |= 0x10u;
                          v39 = *(_QWORD *)v15;
                          v40 = 0;
                          v72 = *(_QWORD *)v15;
                          if ( !v85 && !v17->Next && (a4 & 0x104000) == 0 )
                            v40 = *(_DWORD *)(a7 + 24) < 0x1000u;
                          v41 = HIWORD(v88);
                          if ( !v70
                            && (IoIsDeviceEjectable((__int64)FileObject->DeviceObject)
                             || (v41 & 0x400) != 0
                             && ((unsigned __int8)*(_DWORD *)(v42 + 52) & (unsigned __int8)v43) != 0
                             || (v41 & 0x800) != 0 && (*(_DWORD *)(v42 + 52) & 0x10) != 0) )
                          {
                            v70 = v43;
                          }
                          v44 = *(_QWORD *)(v39 + 16);
                          v79 = v44;
                          if ( !v44 )
                            goto LABEL_41;
                          if ( (unsigned int)MiChargeCommit(a2, v44, 0) )
                          {
                            _InterlockedAdd64((volatile signed __int64 *)(a2 + 19640), v79);
                            v15 = v80;
                            v41 = HIWORD(v88);
                            v9 = v74;
LABEL_41:
                            v45 = *(_DWORD *)(v15 + 56);
                            if ( (v45 & 0x20000) != 0 && (a4 & 0x100000) == 0 && (*(_DWORD *)(a7 + 20) & 0x1000000) == 0 )
                              *(_DWORD *)(v15 + 56) = v45 | 0x8000000;
                            if ( v85 )
                              MiInitializeImageProtos(v15, v85);
                            if ( v40 )
                              MiInitializeImageHeaderPage(v15, v90, *(unsigned int *)(a7 + 24));
                            v46 = a7;
                            if ( *(_WORD *)(a7 + 48) == 267 )
                              *(_WORD *)(v72 + 12) |= 0x8000u;
                            v47 = v70;
                            if ( v70 )
                            {
                              v55 = *(_DWORD *)(v15 + 56) | 0x800;
                              *(_DWORD *)(v15 + 56) = v55;
                              if ( (a4 & 0x80040) != 0 )
                                *(_DWORD *)(v15 + 56) = v55 | 0x40000;
                              if ( (PerfGlobalGroupMask[0] & 4) != 0 )
                              {
                                DeviceObject = FileObject->DeviceObject;
                                *(_QWORD *)&v91 = FileObject->FsContext;
                                WORD6(v91) = v41;
                                DWORD2(v91) = DeviceObject->Characteristics;
                                IsDeviceEjectable = IoIsDeviceEjectable((__int64)DeviceObject);
                                v96 = 0;
                                v95 = 16;
                                HIWORD(v91) = (a4 >> 19) & 1 | (2 * ((2 * ((a4 >> 6) & 1)) | IsDeviceEjectable));
                                v94 = &v91;
                                EtwTraceKernelEvent((int)&v94, 1, 4u, 617, 5249026);
                                v46 = a7;
                              }
                              v47 = v70;
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
                              *v92 = v72;
                              *v93 = v17;
LABEL_53:
                              if ( v9 )
                                MiDeleteFileExtentList(v9);
                              return v18;
                            }
                            dword_140E2D838 = 58;
                            goto LABEL_78;
                          }
                          dword_140E2D838 = 57;
                          v79 = 0LL;
                          v18 = -1073741523;
                        }
LABEL_78:
                        v48 = (PVOID *)v72;
LABEL_79:
                        v51 = a2;
LABEL_80:
                        MiDeleteImageCreationMdls(v17);
                        v52 = v79;
                        if ( v79 )
                        {
                          _InterlockedAdd64((volatile signed __int64 *)(v51 + 19640), -v79);
                          MiReturnCommit(v51, v52, 0);
                          v15 = v80;
                          v9 = v74;
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
                      dword_140E2D838 = 56;
                    }
                  }
                }
              }
              else
              {
                v18 = -1073741701;
                dword_140E2D838 = 49;
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
      dword_140E2D838 = 37;
      v18 = -1073740749;
    }
    v48 = 0LL;
    goto LABEL_79;
  }
  dword_140E2D838 = 33;
  if ( result == -1073741638 )
    return -1073741792;
  return result;
}
