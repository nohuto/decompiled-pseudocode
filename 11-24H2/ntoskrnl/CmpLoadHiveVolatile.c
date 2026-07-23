/*
 * XREFs of CmpLoadHiveVolatile @ 0x1407CEB00
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpCopySyncTree @ 0x1407E2380 (CmpCopySyncTree.c)
 *     CmpUnlockHiveList @ 0x140840614 (CmpUnlockHiveList.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpConstructNameWithStatus @ 0x140879DE0 (CmpConstructNameWithStatus.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpCopyCompressedName @ 0x140882750 (CmpCopyCompressedName.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     CmpLockHiveListExclusive @ 0x140A52D38 (CmpLockHiveListExclusive.c)
 *     CmpAddToHiveFileList @ 0x140A63874 (CmpAddToHiveFileList.c)
 *     CmpUuidCreate @ 0x140A9C598 (CmpUuidCreate.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BBBAD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  UNICODE_STRING *v5; // rsi
  char UnloadRundown; // r13
  int Hive; // ebx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // r9d
  __int64 CellFlat; // rax
  __int64 v13; // rdi
  int v14; // eax
  __int16 v15; // bx
  unsigned __int16 v16; // bx
  unsigned __int16 v17; // ax
  __int16 v18; // cx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  ULONG_PTR v23; // [rsp+28h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v28; // [rsp+98h] [rbp-68h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-58h] BYREF
  UUID v31[2]; // [rsp+B8h] [rbp-48h] BYREF
  UUID v32; // [rsp+D8h] [rbp-28h] BYREF
  UUID Uuid; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v34[54]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v25 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  SourceString = 0LL;
  Source = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  Uuid = 0LL;
  v32 = 0LL;
  memset(v31, 0, sizeof(v31));
  memset_0(v34, 0, sizeof(v34));
  BugCheckParameter3 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  HvpGetCellContextInitialize(&v25);
  v28 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    Hive = -1073741431;
    goto LABEL_41;
  }
  Hive = CmpUuidCreate(&Uuid);
  if ( Hive >= 0 )
  {
    Hive = CmpUuidCreate(&v32);
    if ( Hive >= 0 )
    {
      v8 = *(_QWORD *)(v2 + 32);
      if ( v8 != CmpMasterHive )
      {
        Hive = -1073741811;
        goto LABEL_41;
      }
      *(_QWORD *)&v31[0].Data1 = a2;
      memset(v31[0].Data4, 0, 24);
      Hive = CmpCreateHive(
               (unsigned int)&v28,
               2,
               0x8000,
               0,
               0LL,
               (__int64)v31,
               0LL,
               18415617,
               0LL,
               0LL,
               0LL,
               0LL,
               (__int64)v34);
      if ( Hive >= 0 )
      {
        Hive = CmpCreateHive(
                 (unsigned int)&BugCheckParameter3,
                 0,
                 1,
                 0,
                 0LL,
                 0LL,
                 0LL,
                 17956864,
                 (__int64)&Uuid,
                 (__int64)&v32,
                 0LL,
                 0LL,
                 (__int64)v34);
        if ( Hive >= 0 )
        {
          CmpLockRegistryExclusive();
          Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
          if ( Hive >= 0 )
          {
            if ( *(_BYTE *)(v8 + 2944) == 1 )
            {
              Hive = -1073741431;
            }
            else
            {
              Hive = CmpCopyKeyPartial(v28, 2, v23, 1, (__int64)&BugCheckParameter4);
              if ( Hive >= 0 )
              {
                v10 = BugCheckParameter4;
                v11 = BugCheckParameter4;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) = BugCheckParameter4;
                Hive = CmpCopySyncTree(v28, *(_DWORD *)(*(_QWORD *)(v28 + 64) + 36LL), BugCheckParameter3, v11, 2, 0);
                if ( Hive >= 0 )
                {
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    CellFlat = HvpGetCellFlat(BugCheckParameter3, v10);
                  else
                    CellFlat = HvpGetCellPaged(BugCheckParameter3);
                  v13 = CellFlat;
                  v14 = CmpConstructNameWithStatus(v2, &SourceString);
                  v5 = (UNICODE_STRING *)SourceString;
                  Hive = v14;
                  if ( v14 >= 0 )
                  {
                    v15 = 2 * *(_WORD *)(v13 + 72);
                    if ( (*(_BYTE *)(v13 + 2) & 0x20) == 0 )
                      v15 = *(_WORD *)(v13 + 72);
                    v16 = SourceString->Length + v15 + 2;
                    DestinationString.Buffer = (wchar_t *)CmpAllocatePool(0x100uLL, v16, 0x20204D43u);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v16;
                      DestinationString.Length = v16;
                      RtlCopyUnicodeString(&DestinationString, v5);
                      RtlAppendUnicodeToString(&DestinationString, L"\\");
                      v17 = *(_WORD *)(v13 + 72);
                      if ( (*(_BYTE *)(v13 + 2) & 0x20) != 0 )
                      {
                        CmpCopyCompressedName(
                          &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - (unsigned int)DestinationString.Length,
                          v13 + 76,
                          (unsigned __int16)(2 * v17));
                        v18 = 2 * *(_WORD *)(v13 + 72);
                        if ( (*(_BYTE *)(v13 + 2) & 0x20) == 0 )
                          v18 = *(_WORD *)(v13 + 72);
                        DestinationString.Length += v18;
                      }
                      else
                      {
                        Source.Buffer = (wchar_t *)(v13 + 76);
                        Source.MaximumLength = v17;
                        Source.Length = v17;
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, &v25);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, &v25);
                      Hive = CmpLinkHiveToMaster(
                               (int)&DestinationString,
                               0,
                               BugCheckParameter3,
                               0,
                               512,
                               0,
                               0LL,
                               0LL,
                               0LL,
                               0LL,
                               1,
                               (__int64)v34);
                      if ( Hive >= 0 )
                      {
                        CmpAddToHiveFileList(BugCheckParameter3);
                        CmpLockHiveListExclusive(v19);
                        v20 = (_QWORD *)qword_140FD9D18;
                        v21 = (_QWORD *)(BugCheckParameter3 + 1608);
                        if ( *(__int64 **)qword_140FD9D18 != &CmpHiveListHead )
                          __fastfail(3u);
                        *v21 = &CmpHiveListHead;
                        v21[1] = v20;
                        *v20 = v21;
                        qword_140FD9D18 = (__int64)v21;
                        CmpUnlockHiveList();
                        if ( !CmpProfileLoaded )
                        {
                          CmpGlobalQuotaAllowed = CmpGlobalQuota;
                          CmpProfileLoaded = 1;
                        }
                        BugCheckParameter3 = 0LL;
                        Hive = 0;
                      }
                      goto LABEL_40;
                    }
                    Hive = -1073741670;
                  }
                  if ( v13 )
                  {
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v25);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, &v25);
                  }
                }
              }
            }
          }
LABEL_40:
          CmpUnlockRegistry(v9);
        }
      }
    }
  }
LABEL_41:
  if ( BugCheckParameter3 )
    CmpDestroyHive(BugCheckParameter3);
  if ( v28 )
    CmpDestroyHive(v28);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( DestinationString.Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
  if ( v5 )
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  return (unsigned int)Hive;
}
