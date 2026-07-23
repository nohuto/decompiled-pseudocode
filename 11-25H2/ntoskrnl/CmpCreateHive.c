/*
 * XREFs of CmpCreateHive @ 0x14090EE00
 * Callers:
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x1407BED30 (CmpCreateTemporaryHive.c)
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpInitHiveFromFile @ 0x14090E4F0 (CmpInitHiveFromFile.c)
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x140C362B0 (CmpInitializePreloadedHive.c)
 *     CmpInitializeSystemHive @ 0x140C369D8 (CmpInitializeSystemHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     CmpRecheckHiveVolumePolicy @ 0x140465694 (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     CmpAllocateForNonPagedHive @ 0x1404D1DA0 (CmpAllocateForNonPagedHive.c)
 *     CmpAdjustFileCFSafety @ 0x1404F2264 (CmpAdjustFileCFSafety.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x14069BCC0 (ZwSetInformationObject.c)
 *     CmpLogHiveInitializeEvent @ 0x1407C6B9C (CmpLogHiveInitializeEvent.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140822324 (CmpVolumeManagerGetContextForFile.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     CmpUnlockHiveList @ 0x1408485D4 (CmpUnlockHiveList.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmpAllocate @ 0x14087E4C0 (CmpAllocate.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     CmpGetVolumeClusterSize @ 0x1409105D0 (CmpGetVolumeClusterSize.c)
 *     CmCheckRegistry @ 0x140995590 (CmCheckRegistry.c)
 *     CmpDestroyHive @ 0x1409F4BE0 (CmpDestroyHive.c)
 *     HvHiveStartFileBacked @ 0x1409F8934 (HvHiveStartFileBacked.c)
 *     CmpHiveInitialize @ 0x140A34AE0 (CmpHiveInitialize.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140A41DB0 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140A41DFC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 *     HvMarkBaseBlockDirty @ 0x140A4B658 (HvMarkBaseBlockDirty.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A5100C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpLockHiveListExclusive @ 0x140A58CA8 (CmpLockHiveListExclusive.c)
 *     HvHiveStartMemoryBacked @ 0x140A9F924 (HvHiveStartMemoryBacked.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
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
  int ContextForFile; // ebx
  int v19; // eax
  __int64 v20; // rax
  int VolumeClusterSize; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  ULONG_PTR v24; // rdi
  void *v26; // rcx
  void *v27; // rdx
  void *v28; // rcx
  void *v29; // rdx
  __int64 *v30; // r13
  void *v31; // rdx
  void *v32; // rcx
  void *v33; // rcx
  __int64 v34; // r8
  void *v35; // rax
  unsigned int v36; // eax
  __int64 *v37; // rcx
  __int64 *v38; // rax
  int v39; // r12d
  int started; // eax
  int v41; // r15d
  char CanHiveSectionBeExtended; // al
  int v43; // ecx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  int v47; // r9d
  int v48; // r10d
  __int64 v49; // rax
  unsigned __int16 *v50; // r15
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // rbx
  _QWORD *v55; // rax
  ULONG_PTR *v56; // rax
  int v57; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+20h] [rbp-E0h]
  int v59; // [rsp+30h] [rbp-D0h]
  _WORD ObjectInformation[2]; // [rsp+80h] [rbp-80h] BYREF
  char v61; // [rsp+84h] [rbp-7Ch]
  char v62; // [rsp+85h] [rbp-7Bh]
  int v63; // [rsp+88h] [rbp-78h] BYREF
  int v64; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v65; // [rsp+90h] [rbp-70h] BYREF
  int v66[3]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  __int64 *v71; // [rsp+C0h] [rbp-40h]
  ULONG_PTR *v72; // [rsp+D0h] [rbp-30h]
  __int64 v73[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v74[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v75[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v76; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v77)(int, int, int, int, ULONG); // [rsp+118h] [rbp+18h]
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+150h] [rbp+50h] BYREF
  int *v80; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  _WORD *v82; // [rsp+180h] [rbp+80h]
  __int64 v83; // [rsp+188h] [rbp+88h]
  int *v84; // [rsp+190h] [rbp+90h]
  __int64 v85; // [rsp+198h] [rbp+98h]
  unsigned int *v86; // [rsp+1A0h] [rbp+A0h]
  __int64 v87; // [rsp+1A8h] [rbp+A8h]
  __int64 v88; // [rsp+1B0h] [rbp+B0h]
  __int64 v89; // [rsp+1B8h] [rbp+B8h]
  __int64 v90; // [rsp+1C0h] [rbp+C0h]
  int v91; // [rsp+1C8h] [rbp+C8h]
  int v92; // [rsp+1CCh] [rbp+CCh]
  __int64 v93; // [rsp+1D0h] [rbp+D0h]
  __int64 v94; // [rsp+1D8h] [rbp+D8h]
  __int64 v95; // [rsp+1E0h] [rbp+E0h]
  int v96; // [rsp+1E8h] [rbp+E8h]
  int v97; // [rsp+1ECh] [rbp+ECh]
  __int64 v98; // [rsp+1F0h] [rbp+F0h]
  __int64 v99; // [rsp+1F8h] [rbp+F8h]
  __int64 v100; // [rsp+200h] [rbp+100h]
  int v101; // [rsp+208h] [rbp+108h]
  int v102; // [rsp+20Ch] [rbp+10Ch]
  __int64 *v103; // [rsp+210h] [rbp+110h]
  __int64 v104; // [rsp+218h] [rbp+118h]

  v65 = a2;
  *(_QWORD *)&v66[1] = a7;
  v14 = a3;
  v70 = a9;
  Pool2 = 0LL;
  v69 = a10;
  v68 = a12;
  v16 = 0LL;
  v72 = a1;
  v17 = a5;
  v63 = a4;
  v67 = a5;
  v77 = 0LL;
  v66[0] = 0;
  v61 = 0;
  v62 = 0;
  v71 = 0LL;
  *(_OWORD *)v75 = 0LL;
  v76 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)v73 = 0LL;
  *(_OWORD *)v74 = 0LL;
  if ( a2 > 2 && a2 != 5 )
  {
    ContextForFile = -1073741811;
    v19 = 0;
    goto LABEL_44;
  }
  if ( (a3 & 0xF5617CEC) != 0 )
  {
    v57 = 16;
LABEL_6:
    ContextForFile = -1073741811;
    SetFailureLocation(a13, (int)v16, 1, -1073741811, v57);
    return (unsigned int)ContextForFile;
  }
  if ( (unsigned int)a4 > 2 )
  {
    v57 = 32;
    goto LABEL_6;
  }
  if ( !a5 && a2 == 1 )
  {
    v57 = 48;
    goto LABEL_6;
  }
  if ( a6 )
  {
    if ( (a3 & 0x8001) == 1 )
    {
      v57 = 64;
      goto LABEL_6;
    }
    v16 = *(HANDLE *)a6;
    if ( !*(_QWORD *)a6 && (*(_QWORD *)(a6 + 8) || *(_QWORD *)(a6 + 16)) )
    {
      v57 = 80;
LABEL_19:
      LODWORD(v16) = 0;
      goto LABEL_6;
    }
    v17 = *(_QWORD *)(a6 + 8);
    if ( v17 && !(_DWORD)a4 )
    {
      v57 = 96;
      goto LABEL_19;
    }
    v20 = *(_QWORD *)(a6 + 16);
    if ( v20 && (_DWORD)a4 != 2 )
    {
      v57 = 112;
      goto LABEL_19;
    }
    if ( *(_QWORD *)(a6 + 24) && (v16 || v17 || v20) )
    {
      v57 = 128;
      goto LABEL_19;
    }
  }
  v61 = CmpAcquireShutdownRundown(v17, v16, a3, a4);
  if ( !v61 )
    return (unsigned int)-1073741431;
  v64 = 1;
  if ( a6 )
  {
    if ( *(_QWORD *)a6 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(*(HANDLE *)a6);
      ContextForFile = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        SetFailureLocation(a13, 0, 1, VolumeClusterSize, 160);
LABEL_49:
        CmpReleaseShutdownRundown(v22);
        return (unsigned int)ContextForFile;
      }
    }
  }
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    ContextForFile = -1073741801;
    goto LABEL_49;
  }
  if ( (v14 & 0x2000000) != 0 )
    v23 = CmpAllocateForNonPagedHive(0x12D8u, 0);
  else
    v23 = CmpAllocate(4824LL, 0);
  v24 = v23;
  if ( v23 )
  {
    CmpHiveInitialize(v23, Pool2);
    if ( a6 )
    {
      if ( *(_QWORD *)a6 )
      {
        ContextForFile = ObDuplicateObject(
                           (__int64)PsInitialSystemProcess,
                           *(void **)a6,
                           0LL,
                           (__int64 *)(v24 + 1544),
                           0,
                           512,
                           2,
                           0);
        if ( ContextForFile < 0 )
          goto LABEL_46;
        v26 = *(void **)(v24 + 1544);
        ObjectInformation[0] = 256;
        ZwSetInformationObject(v26, ObjectHandleFlagInformation, ObjectInformation, 2u);
      }
      v27 = *(void **)(a6 + 24);
      if ( v27 )
      {
        ContextForFile = ObDuplicateObject(
                           (__int64)PsInitialSystemProcess,
                           v27,
                           0LL,
                           (__int64 *)(v24 + 1560),
                           0,
                           512,
                           2,
                           0);
        if ( ContextForFile < 0 )
          goto LABEL_46;
        v28 = *(void **)(v24 + 1560);
        ObjectInformation[0] = 256;
        ZwSetInformationObject(v28, ObjectHandleFlagInformation, ObjectInformation, 2u);
      }
      if ( v63 == 1 )
      {
        v29 = *(void **)(a6 + 8);
        if ( v29 )
        {
          v30 = (__int64 *)(v24 + 1552);
LABEL_67:
          ContextForFile = ObDuplicateObject((__int64)PsInitialSystemProcess, v29, 0LL, v30, 0, 512, 2, 0);
          if ( ContextForFile < 0 )
            goto LABEL_46;
          v33 = (void *)*v30;
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v33, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
      }
      else if ( v63 == 2 )
      {
        v31 = *(void **)(a6 + 8);
        if ( v31 )
        {
          ContextForFile = ObDuplicateObject(
                             (__int64)PsInitialSystemProcess,
                             v31,
                             0LL,
                             (__int64 *)(v24 + 1576),
                             0,
                             512,
                             v63,
                             0);
          if ( ContextForFile < 0 )
            goto LABEL_46;
          v32 = *(void **)(v24 + 1576);
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v32, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
        v29 = *(void **)(a6 + 16);
        if ( v29 )
        {
          v30 = (__int64 *)(v24 + 1584);
          goto LABEL_67;
        }
      }
    }
    if ( (a8 & 0x8000000) != 0 )
      *(_DWORD *)(v24 + 4112) |= 0x80u;
    if ( a8 < 0 )
      *(_DWORD *)(v24 + 4112) |= 0x800u;
    CmpAttachToRegistryProcess(&ApcState);
    v62 = 1;
    v35 = CmpAllocate;
    if ( (v14 & 0x2000000) != 0 )
      v35 = CmpAllocateForNonPagedHive;
    v75[0] = (__int64)v35;
    v75[1] = (__int64)CmpFree;
    *((_QWORD *)&v76 + 1) = CmpFileWrite;
    v77 = CmpFileRead;
    v36 = v65;
    *(_QWORD *)(v24 + 56) = a13;
    *(_QWORD *)a13 = v24;
    if ( v36 != 2 && v36 != 5 && (v36 || !a6 || !*(_QWORD *)a6) )
    {
      if ( a11 )
      {
        LODWORD(v73[0]) = *(_DWORD *)(a11 + 112);
        v73[1] = *(_QWORD *)(a11 + 104);
        LODWORD(v74[0]) = *(_DWORD *)(a11 + 128);
        v37 = v74;
        v74[1] = *(_QWORD *)(a11 + 120);
        v38 = v73;
      }
      else
      {
        v38 = v71;
        v37 = v71;
      }
      v39 = v65;
      started = HvHiveStartMemoryBacked(
                  v24,
                  v67,
                  (__int64)v75,
                  v64,
                  *(__int64 *)&v66[1],
                  a8,
                  v70,
                  v69,
                  (__int64)v38,
                  (__int64)v37,
                  v68,
                  (__int64)v66,
                  a13);
      ContextForFile = started;
      if ( started < 0 )
      {
        v58 = 232;
LABEL_85:
        SetFailureLocation(a13, 0, 1, started, v58);
        goto LABEL_46;
      }
      goto LABEL_99;
    }
    v41 = v14 | 0x20000;
    ContextForFile = CmpVolumeManagerGetContextForFile(
                       (__int64)CmpAllocateForNonPagedHive,
                       *(void **)a6,
                       v34,
                       (PPRIVILEGE_SET *)(v24 + 4792));
    if ( ContextForFile < 0 )
      goto LABEL_46;
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v24 + 4792))
      || (a8 & 0x2000000) != 0
      || (v41 & 0x8000) != 0
      || (a8 & 0x40) != 0 )
    {
      goto LABEL_94;
    }
    if ( (a8 & 0x20) != 0 )
      goto LABEL_95;
    if ( (int)CmpAdjustFileCFSafety(*(HANDLE *)a6, 1) < 0 )
LABEL_94:
      v41 |= 0x800000u;
    else
      *(_DWORD *)(v24 + 4112) |= 0x10000u;
LABEL_95:
    CanHiveSectionBeExtended = CmpVolumeContextCanHiveSectionBeExtended(*(_QWORD *)(v24 + 4792));
    v39 = v65;
    v43 = v41 | 0x8000000;
    if ( CanHiveSectionBeExtended )
      v43 = v41;
    v14 = v43;
    started = HvHiveStartFileBacked(
                v24,
                (__int64)v75,
                v64,
                v59,
                *(__int64 *)&v66[1],
                a8,
                v70,
                v69,
                v68,
                (__int64)v66,
                a13);
    ContextForFile = started;
    if ( started < 0 )
    {
      v58 = 228;
      goto LABEL_85;
    }
LABEL_99:
    if ( (v14 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
    {
      v44 = *(_QWORD *)(v24 + 64);
      if ( *(_DWORD *)(v44 + 24) < 6u || (*(_DWORD *)(v44 + 144) & 2) == 0 )
      {
        ContextForFile = -1073741811;
        goto LABEL_46;
      }
    }
    if ( ((v39 - 1) & 0xFFFFFFFA) == 0 && v39 != 6 )
    {
      started = CmCheckRegistry(v24);
      ContextForFile = started;
      if ( started == -2147483606 )
      {
        if ( (unsigned int)dword_140E09E08 > 5 )
        {
          ContextForFile = 0;
          if ( tlgKeywordOn((__int64)&dword_140E09E08, 0x400000000000LL) )
          {
            v63 = v45;
            v80 = &v63;
            v82 = ObjectInformation;
            v46 = *(unsigned __int16 *)(a13 + 8);
            v47 = *(unsigned __int16 *)(a13 + 10);
            v88 = a13 + 8;
            v84 = &v64;
            v90 = a13 + 12;
            v48 = *(unsigned __int8 *)(a13 + 394);
            v91 = 12 * v46;
            v95 = a13 + 108;
            v96 = 12 * v47;
            v100 = a13 + 396;
            v103 = &v67;
            LOWORD(v65) = v48;
            ObjectInformation[0] = v46;
            LOWORD(v64) = v47;
            v93 = a13 + 10;
            v98 = a13 + 394;
            v81 = 4LL;
            v83 = 2LL;
            v85 = 2LL;
            v86 = &v65;
            v87 = 2LL;
            v89 = 2LL;
            v92 = 0;
            v94 = 2LL;
            v97 = 0;
            v99 = 2LL;
            v101 = 8 * v48;
            v102 = 0;
            v67 = 0x1000000LL;
            v104 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E09E08,
              (unsigned __int8 *)byte_140053FF3,
              0LL,
              0LL,
              0xDu,
              &v79);
          }
          goto LABEL_113;
        }
      }
      else if ( started < 0 )
      {
        v58 = 240;
        goto LABEL_85;
      }
    }
    ContextForFile = 0;
LABEL_113:
    if ( (a8 & 0x800000) != 0 )
    {
      v49 = *(_QWORD *)(v24 + 64);
      if ( *(_DWORD *)(v49 + 24) < 6u || (*(_DWORD *)(v49 + 144) & 2) == 0 )
      {
        HvMarkBaseBlockDirty(v24);
        *(_DWORD *)(*(_QWORD *)(v24 + 64) + 24LL) = 6;
        *(_DWORD *)(*(_QWORD *)(v24 + 64) + 144LL) |= 2u;
      }
    }
    v50 = *(unsigned __int16 **)&v66[1];
    CmpReorganizeHive(v24);
    CmpLockRegistry(v51);
    HvLockHiveFlusherShared(v24);
    HvLockHiveWriter(v24);
    if ( v39 )
      ContextForFile = HvCheckAndUpdateHiveBackupTimeStamp(v24);
    else
      *(_BYTE *)(v24 + 195) = 1;
    HvUnlockHiveWriter(v24);
    HvUnlockHiveFlusherShared(v24);
    CmpUnlockRegistry(v52);
    if ( ContextForFile >= 0 )
    {
      v54 = (_QWORD *)(v24 + 1608);
      if ( (a8 & 0x1000000) != 0 )
      {
        *(_QWORD *)(v24 + 1616) = v24 + 1608;
        *v54 = v54;
      }
      else
      {
        CmpLockHiveListExclusive(v53);
        v55 = (_QWORD *)qword_140FD8D38;
        if ( *(__int64 **)qword_140FD8D38 != &CmpHiveListHead )
          __fastfail(3u);
        *v54 = &CmpHiveListHead;
        *(_QWORD *)(v24 + 1616) = v55;
        *v55 = v54;
        qword_140FD8D38 = v24 + 1608;
        CmpUnlockHiveList();
        CmpRecheckHiveVolumePolicy(v24);
      }
      v56 = v72;
      *(_QWORD *)(v24 + 56) = 0LL;
      *v56 = v24;
      CmpReleaseShutdownRundown(v53);
      v61 = 0;
      if ( (DWORD2(PerfGlobalGroupMask[0]) & 0x1000000) != 0 )
        CmpLogHiveInitializeEvent(v24, v39, v50, v66[0]);
      ContextForFile = 0;
LABEL_47:
      CmpDetachFromRegistryProcess(&ApcState);
      goto LABEL_48;
    }
    SetFailureLocation(a13, 0, 1, ContextForFile, 256);
LABEL_46:
    CmpDestroyHive(v24);
    if ( !v62 )
      goto LABEL_48;
    goto LABEL_47;
  }
  ContextForFile = -1073741670;
  LODWORD(v16) = 0;
  v19 = 176;
LABEL_44:
  SetFailureLocation(a13, (int)v16, 1, ContextForFile, v19);
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    v62 = 0;
  }
LABEL_48:
  if ( v61 )
    goto LABEL_49;
  return (unsigned int)ContextForFile;
}
