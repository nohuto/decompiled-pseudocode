/*
 * XREFs of CmpCreateHive @ 0x140931678
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x1407CEA38 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5F40 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpInitHiveFromFile @ 0x140930D5C (CmpInitHiveFromFile.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x140C496B0 (CmpInitializePreloadedHive.c)
 *     CmpInitializeSystemHive @ 0x140C49DD8 (CmpInitializeSystemHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14045AFD0 (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     CmpAdjustFileCFSafety @ 0x1404AD590 (CmpAdjustFileCFSafety.c)
 *     CmpAllocateForNonPagedHive @ 0x1404C8A10 (CmpAllocateForNonPagedHive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x1406A7F30 (ZwSetInformationObject.c)
 *     CmpLogHiveInitializeEvent @ 0x1407D6870 (CmpLogHiveInitializeEvent.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     CmpUnlockHiveList @ 0x140840614 (CmpUnlockHiveList.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpAllocate @ 0x140882F70 (CmpAllocate.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     CmpGetVolumeClusterSize @ 0x140932C5C (CmpGetVolumeClusterSize.c)
 *     CmpHiveInitialize @ 0x140933070 (CmpHiveInitialize.c)
 *     CmpReorganizeHive @ 0x1409331F0 (CmpReorganizeHive.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     HvHiveStartMemoryBacked @ 0x14093363C (HvHiveStartMemoryBacked.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14094F848 (CmpVolumeManagerGetContextForFile.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     HvHiveStartFileBacked @ 0x140967C74 (HvHiveStartFileBacked.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A3BF34 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A3BF80 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A4CD78 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpLockHiveListExclusive @ 0x140A52D38 (CmpLockHiveListExclusive.c)
 *     CmCheckRegistry @ 0x140AE4CC0 (CmCheckRegistry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v14; // r15d
  void *Pool2; // r13
  HANDLE v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  ULONG_PTR v21; // rdi
  __int64 v22; // r8
  void *v23; // rax
  unsigned int v24; // eax
  __int128 *v25; // rax
  __int128 *v26; // rcx
  int v27; // r12d
  int started; // eax
  int ContextForFile; // ebx
  unsigned __int16 *v30; // r15
  __int64 v31; // rcx
  int v32; // r15d
  __int64 v33; // rcx
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  ULONG_PTR *v36; // rax
  int v38; // eax
  void *v39; // rcx
  void *v40; // rdx
  void *v41; // rdx
  void *v42; // rcx
  void *v43; // rdx
  __int64 *v44; // r13
  char CanHiveSectionBeExtended; // al
  int v46; // edx
  int v47; // ecx
  int VolumeClusterSize; // eax
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  void *v53; // rcx
  void *v54; // rcx
  int v55; // r8d
  int v56; // edx
  int v57; // r9d
  int v58; // r10d
  int v59; // [rsp+20h] [rbp-E0h]
  int v60; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+30h] [rbp-D0h]
  _WORD ObjectInformation[2]; // [rsp+80h] [rbp-80h] BYREF
  char v63; // [rsp+84h] [rbp-7Ch]
  char v64; // [rsp+85h] [rbp-7Bh]
  int v65; // [rsp+88h] [rbp-78h] BYREF
  int v66; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v67; // [rsp+90h] [rbp-70h] BYREF
  int v68[3]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v69; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  __int64 v73; // [rsp+C0h] [rbp-40h]
  ULONG_PTR *v74; // [rsp+D0h] [rbp-30h]
  __int128 v75; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v76; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v77[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v78; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v79)(int, int, int, int, ULONG); // [rsp+118h] [rbp+18h]
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+150h] [rbp+50h] BYREF
  int *v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  _WORD *v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]
  int *v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  unsigned int *v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  __int64 v90; // [rsp+1B0h] [rbp+B0h]
  __int64 v91; // [rsp+1B8h] [rbp+B8h]
  __int64 v92; // [rsp+1C0h] [rbp+C0h]
  int v93; // [rsp+1C8h] [rbp+C8h]
  int v94; // [rsp+1CCh] [rbp+CCh]
  __int64 v95; // [rsp+1D0h] [rbp+D0h]
  __int64 v96; // [rsp+1D8h] [rbp+D8h]
  __int64 v97; // [rsp+1E0h] [rbp+E0h]
  int v98; // [rsp+1E8h] [rbp+E8h]
  int v99; // [rsp+1ECh] [rbp+ECh]
  __int64 v100; // [rsp+1F0h] [rbp+F0h]
  __int64 v101; // [rsp+1F8h] [rbp+F8h]
  __int64 v102; // [rsp+200h] [rbp+100h]
  int v103; // [rsp+208h] [rbp+108h]
  int v104; // [rsp+20Ch] [rbp+10Ch]
  __int64 *v105; // [rsp+210h] [rbp+110h]
  __int64 v106; // [rsp+218h] [rbp+118h]

  v67 = a2;
  *(_QWORD *)&v68[1] = a7;
  v14 = a3;
  v72 = a9;
  Pool2 = 0LL;
  v71 = a10;
  v70 = a12;
  v16 = 0LL;
  v74 = a1;
  v17 = a5;
  v65 = a4;
  v69 = a5;
  v79 = 0LL;
  v68[0] = 0;
  v63 = 0;
  v64 = 0;
  v73 = 0LL;
  *(_OWORD *)v77 = 0LL;
  v78 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v75 = 0LL;
  v76 = 0LL;
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    v38 = 0;
    goto LABEL_58;
  }
  if ( (a3 & 0xF5617CEC) != 0 )
  {
    v59 = 16;
    goto LABEL_121;
  }
  if ( (unsigned int)a4 > 2 )
  {
    v59 = 32;
    goto LABEL_121;
  }
  if ( !a5 && a2 == 1 )
  {
    v59 = 48;
LABEL_121:
    ContextForFile = -1073741811;
    SetFailureLocation(a13, (int)v16, 1, -1073741811, v59);
    return (unsigned int)ContextForFile;
  }
  if ( !a6 )
    goto LABEL_13;
  if ( (a3 & 1) != 0 && (a3 & 0x8000) == 0 )
  {
    v59 = 64;
    goto LABEL_121;
  }
  v16 = (HANDLE)*a6;
  if ( !*a6 && (a6[1] || a6[2]) )
  {
    v59 = 80;
    goto LABEL_120;
  }
  v17 = a6[1];
  if ( v17 && !(_DWORD)a4 )
  {
    v59 = 96;
LABEL_120:
    LODWORD(v16) = 0;
    goto LABEL_121;
  }
  v18 = a6[2];
  if ( v18 && (_DWORD)a4 != 2 )
  {
    v59 = 112;
    goto LABEL_120;
  }
  if ( a6[3] && (v16 || v17 || v18) )
  {
    v59 = 128;
    goto LABEL_120;
  }
LABEL_13:
  v63 = CmpAcquireShutdownRundown(v17, v16, a3, a4);
  if ( !v63 )
    return (unsigned int)-1073741431;
  v66 = 1;
  if ( a6 )
  {
    if ( *a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize((HANDLE)*a6);
      ContextForFile = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation(a13, 0, 1, VolumeClusterSize, 160);
        goto LABEL_96;
      }
    }
  }
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x35394D43u);
  if ( !Pool2 )
  {
    ContextForFile = -1073741801;
    goto LABEL_96;
  }
  if ( (v14 & 0x2000000) != 0 )
    v20 = CmpAllocateForNonPagedHive(0x12D8u, 0, 0x30314D43u);
  else
    v20 = CmpAllocate(4824LL, 0, 0x30314D43u);
  v21 = v20;
  if ( v20 )
  {
    CmpHiveInitialize(v20, Pool2);
    if ( !a6 )
      goto LABEL_21;
    if ( *a6 )
    {
      ContextForFile = ObDuplicateObject(
                         (__int64)PsInitialSystemProcess,
                         (void *)*a6,
                         0LL,
                         (__int64 *)(v21 + 1544),
                         0,
                         512,
                         2,
                         0);
      if ( ContextForFile < 0 )
        goto LABEL_43;
      v39 = *(void **)(v21 + 1544);
      ObjectInformation[0] = 256;
      ZwSetInformationObject(v39, ObjectHandleFlagInformation, ObjectInformation, 2u);
    }
    v40 = (void *)a6[3];
    if ( v40 )
    {
      ContextForFile = ObDuplicateObject(
                         (__int64)PsInitialSystemProcess,
                         v40,
                         0LL,
                         (__int64 *)(v21 + 1560),
                         0,
                         512,
                         2,
                         0);
      if ( ContextForFile < 0 )
        goto LABEL_43;
      v53 = *(void **)(v21 + 1560);
      ObjectInformation[0] = 256;
      ZwSetInformationObject(v53, ObjectHandleFlagInformation, ObjectInformation, 2u);
    }
    if ( v65 == 1 )
    {
      v43 = (void *)a6[1];
      if ( !v43 )
        goto LABEL_21;
      v44 = (__int64 *)(v21 + 1552);
    }
    else
    {
      if ( v65 != 2 )
        goto LABEL_21;
      v41 = (void *)a6[1];
      if ( v41 )
      {
        ContextForFile = ObDuplicateObject(
                           (__int64)PsInitialSystemProcess,
                           v41,
                           0LL,
                           (__int64 *)(v21 + 1576),
                           0,
                           512,
                           v65,
                           0);
        if ( ContextForFile < 0 )
          goto LABEL_43;
        v42 = *(void **)(v21 + 1576);
        ObjectInformation[0] = 256;
        ZwSetInformationObject(v42, ObjectHandleFlagInformation, ObjectInformation, 2u);
      }
      v43 = (void *)a6[2];
      if ( !v43 )
        goto LABEL_21;
      v44 = (__int64 *)(v21 + 1584);
    }
    ContextForFile = ObDuplicateObject((__int64)PsInitialSystemProcess, v43, 0LL, v44, 0, 512, 2, 0);
    if ( ContextForFile < 0 )
      goto LABEL_43;
    v54 = (void *)*v44;
    ObjectInformation[0] = 256;
    ZwSetInformationObject(v54, ObjectHandleFlagInformation, ObjectInformation, 2u);
LABEL_21:
    if ( (a8 & 0x8000000) != 0 )
      *(_DWORD *)(v21 + 4112) |= 0x80u;
    if ( a8 < 0 )
      *(_DWORD *)(v21 + 4112) |= 0x800u;
    CmpAttachToRegistryProcess(&ApcState);
    v64 = 1;
    v23 = CmpAllocate;
    if ( (v14 & 0x2000000) != 0 )
      v23 = CmpAllocateForNonPagedHive;
    v77[0] = (__int64)v23;
    v77[1] = (__int64)CmpFree;
    *((_QWORD *)&v78 + 1) = CmpFileWrite;
    v79 = CmpFileRead;
    v24 = v67;
    *(_QWORD *)(v21 + 56) = a13;
    *(_QWORD *)a13 = v21;
    if ( v24 != 2 && v24 != 5 && (v24 || !a6 || !*a6) )
    {
      if ( a11 )
      {
        LODWORD(v75) = *(_DWORD *)(a11 + 112);
        *((_QWORD *)&v75 + 1) = *(_QWORD *)(a11 + 104);
        LODWORD(v76) = *(_DWORD *)(a11 + 128);
        v26 = &v76;
        *((_QWORD *)&v76 + 1) = *(_QWORD *)(a11 + 120);
        v25 = &v75;
      }
      else
      {
        v25 = (__int128 *)v73;
        v26 = (__int128 *)v73;
      }
      v27 = v67;
      started = HvHiveStartMemoryBacked(
                  v21,
                  v69,
                  (__int64)v77,
                  v66,
                  *(__int64 *)&v68[1],
                  a8,
                  v72,
                  v71,
                  (__int64)v25,
                  (__int64)v26,
                  v70,
                  (__int64)v68,
                  a13);
      ContextForFile = started;
      if ( started < 0 )
      {
        v60 = 232;
        goto LABEL_107;
      }
      goto LABEL_33;
    }
    v32 = v14 | 0x20000;
    ContextForFile = CmpVolumeManagerGetContextForFile(CmpAllocateForNonPagedHive, *a6, v22, v21 + 4792);
    if ( ContextForFile < 0 )
      goto LABEL_43;
    if ( !(unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v21 + 4792))
      && (a8 & 0x2000000) == 0
      && (v32 & 0x8000) == 0
      && (a8 & 0x40) == 0 )
    {
      if ( (a8 & 0x20) != 0 )
        goto LABEL_75;
      if ( (int)CmpAdjustFileCFSafety((HANDLE)*a6, 1) >= 0 )
      {
        *(_DWORD *)(v21 + 4112) |= 0x10000u;
LABEL_75:
        CanHiveSectionBeExtended = CmpVolumeContextCanHiveSectionBeExtended(*(_QWORD *)(v21 + 4792));
        v27 = v67;
        v47 = v32 | 0x8000000;
        if ( CanHiveSectionBeExtended )
          v47 = v32;
        v14 = v47;
        LOBYTE(v46) = v67 == 0;
        started = HvHiveStartFileBacked(
                    v21,
                    v46,
                    v47,
                    v65,
                    (__int64)v77,
                    v66,
                    v61,
                    *(__int64 *)&v68[1],
                    a8,
                    v72,
                    v71,
                    v70,
                    (__int64)v68,
                    a13);
        ContextForFile = started;
        if ( started < 0 )
        {
          v60 = 228;
          goto LABEL_107;
        }
LABEL_33:
        if ( (v14 & 0x80000) != 0 && (v14 & 0x100000) == 0 && (a8 & 0x800000) == 0 )
        {
          v50 = *(_QWORD *)(v21 + 64);
          if ( *(_DWORD *)(v50 + 24) < 6u || (*(_DWORD *)(v50 + 144) & 2) == 0 )
          {
            ContextForFile = -1073741811;
LABEL_43:
            CmpDestroyHive(v21);
            if ( !v64 )
              goto LABEL_53;
            goto LABEL_52;
          }
        }
        if ( ((v27 - 1) & 0xFFFFFFFA) != 0 || v27 == 6 )
          goto LABEL_38;
        started = CmCheckRegistry(v21);
        ContextForFile = started;
        if ( started == -2147483606 )
        {
          if ( (unsigned int)dword_140E09F58 > 5 )
          {
            ContextForFile = 0;
            if ( tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
            {
              v65 = v55;
              v82 = &v65;
              v84 = ObjectInformation;
              v56 = *(unsigned __int16 *)(a13 + 8);
              v57 = *(unsigned __int16 *)(a13 + 10);
              v90 = a13 + 8;
              v86 = &v66;
              v92 = a13 + 12;
              v58 = *(unsigned __int8 *)(a13 + 394);
              v93 = 12 * v56;
              v97 = a13 + 108;
              v98 = 12 * v57;
              v102 = a13 + 396;
              v105 = &v69;
              LOWORD(v67) = v58;
              ObjectInformation[0] = v56;
              LOWORD(v66) = v57;
              v95 = a13 + 10;
              v100 = a13 + 394;
              v83 = 4LL;
              v85 = 2LL;
              v87 = 2LL;
              v88 = &v67;
              v89 = 2LL;
              v91 = 2LL;
              v94 = 0;
              v96 = 2LL;
              v99 = 0;
              v101 = 2LL;
              v103 = 8 * v58;
              v104 = 0;
              v69 = 0x1000000LL;
              v106 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E09F58,
                (unsigned __int8 *)byte_140055F0D,
                0LL,
                0LL,
                0xDu,
                &v81);
            }
            goto LABEL_39;
          }
LABEL_38:
          ContextForFile = 0;
LABEL_39:
          if ( (a8 & 0x800000) != 0 )
          {
            v51 = *(_QWORD *)(v21 + 64);
            if ( *(_DWORD *)(v51 + 24) < 6u || (*(_DWORD *)(v51 + 144) & 2) == 0 )
            {
              HvMarkBaseBlockDirty(v21);
              *(_DWORD *)(*(_QWORD *)(v21 + 64) + 24LL) = 6;
              *(_DWORD *)(*(_QWORD *)(v21 + 64) + 144LL) |= 2u;
            }
          }
          v30 = *(unsigned __int16 **)&v68[1];
          CmpReorganizeHive(v21);
          CmpLockRegistry(v31);
          HvLockHiveFlusherShared(v21);
          HvLockHiveWriter(v21);
          if ( v27 )
            ContextForFile = HvCheckAndUpdateHiveBackupTimeStamp(v21);
          else
            *(_BYTE *)(v21 + 195) = 1;
          HvUnlockHiveWriter(v21);
          HvUnlockHiveFlusherShared(v21);
          CmpUnlockRegistry(v33);
          if ( ContextForFile >= 0 )
          {
            v35 = (_QWORD *)(v21 + 1608);
            if ( (a8 & 0x1000000) != 0 )
            {
              *(_QWORD *)(v21 + 1616) = v21 + 1608;
              *v35 = v35;
            }
            else
            {
              CmpLockHiveListExclusive(v34);
              v52 = (_QWORD *)qword_140FD9D18;
              if ( *(__int64 **)qword_140FD9D18 != &CmpHiveListHead )
                __fastfail(3u);
              *v35 = &CmpHiveListHead;
              *(_QWORD *)(v21 + 1616) = v52;
              *v52 = v35;
              qword_140FD9D18 = v21 + 1608;
              CmpUnlockHiveList();
              CmpRecheckHiveVolumePolicy(v21);
            }
            v36 = v74;
            *(_QWORD *)(v21 + 56) = 0LL;
            *v36 = v21;
            CmpReleaseShutdownRundown(v34);
            v63 = 0;
            if ( (DWORD2(PerfGlobalGroupMask[0]) & 0x1000000) != 0 )
              CmpLogHiveInitializeEvent(v21, v27, v30, v68[0]);
            ContextForFile = 0;
LABEL_52:
            CmpDetachFromRegistryProcess(&ApcState);
            goto LABEL_53;
          }
          v60 = 256;
          v49 = ContextForFile;
          goto LABEL_109;
        }
        if ( started >= 0 )
          goto LABEL_38;
        v60 = 240;
LABEL_107:
        v49 = started;
LABEL_109:
        SetFailureLocation(a13, 0, 1, v49, v60);
        goto LABEL_43;
      }
    }
    v32 |= 0x800000u;
    goto LABEL_75;
  }
  ContextForFile = -1073741670;
  LODWORD(v16) = 0;
  v38 = 176;
LABEL_58:
  SetFailureLocation(a13, (int)v16, 1, ContextForFile, v38);
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    v64 = 0;
  }
LABEL_53:
  if ( v63 )
LABEL_96:
    CmpReleaseShutdownRundown(v19);
  return (unsigned int)ContextForFile;
}
