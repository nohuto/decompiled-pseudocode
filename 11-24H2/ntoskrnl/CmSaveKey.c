/*
 * XREFs of CmSaveKey @ 0x1407CE0EC
 * Callers:
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     NtSaveKeyEx @ 0x140A67430 (NtSaveKeyEx.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404BFA34 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140666910 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpCreateTemporaryHive @ 0x1407CEA38 (CmpCreateTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x1407CF4D0 (CmpSaveKeyByFileCopy.c)
 *     CmpTraceHiveSaveStop @ 0x1407D6DE8 (CmpTraceHiveSaveStop.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140908F00 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140909054 (CmpStartKeyNodeStack.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1409090E8 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1409096E4 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpInitializeKeyNodeStack @ 0x14090A470 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x14090A6C8 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x14090B180 (CmpLockKcbStackShared.c)
 *     CmpLogUnsupportedOperation @ 0x140963320 (CmpLogUnsupportedOperation.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     HvWriteExternal @ 0x140A66710 (HvWriteExternal.c)
 *     CmpUuidCreate @ 0x140A9C598 (CmpUuidCreate.c)
 *     CmpTraceHiveSaveStart @ 0x140ABA48C (CmpTraceHiveSaveStart.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, char a4)
{
  char v5; // si
  char v6; // r12
  BOOLEAN v7; // r14
  __int64 v8; // r15
  ULONG_PTR v9; // rdi
  int started; // ebx
  __int64 v11; // r14
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 EntryAtLayerHeight; // rbx
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v22; // [rsp+31h] [rbp-A8h]
  int v24; // [rsp+34h] [rbp-A5h] BYREF
  int v25; // [rsp+38h] [rbp-A1h]
  _OWORD v26[2]; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int16 v27; // [rsp+60h] [rbp-79h] BYREF
  int v28; // [rsp+62h] [rbp-77h]
  __int16 v29; // [rsp+66h] [rbp-73h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B0h] [rbp-29h] BYREF
  UUID v31; // [rsp+C0h] [rbp-19h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp-9h] BYREF
  EVENT_DESCRIPTOR v33; // [rsp+E0h] [rbp+7h] BYREF

  v25 = a3;
  *(_QWORD *)&EventDescriptor.Id = a2;
  v28 = 0;
  v29 = 0;
  Uuid = 0LL;
  v31 = 0LL;
  memset_0(&v27, 0, 0x4AuLL);
  memset(v26, 0, sizeof(v26));
  WORD1(v26[0]) = -1;
  CmpInitializeKeyNodeStack(&v27);
  v24 = -1;
  v5 = 0;
  v6 = 0;
  v22 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  started = CmpUuidCreate(&Uuid);
  if ( started >= 0 )
  {
    started = CmpUuidCreate(&v31);
    if ( started >= 0 )
    {
      v9 = CmpCreateTemporaryHive(&Uuid, &v31);
      if ( !v9 )
      {
        started = -1073741670;
        goto LABEL_35;
      }
      CmpLockRegistry();
      v11 = *(_QWORD *)(a1 + 8);
      v5 = 1;
      started = CmpStartKcbStackForTopLayerKcb(v26, v11);
      if ( started < 0 )
      {
        v7 = 0;
      }
      else
      {
        CmpLockKcbStackShared(v26);
        v6 = 1;
        if ( *(_QWORD *)(v11 + 32) == CmpMasterHive )
        {
          started = -1073741790;
          v7 = 0;
          goto LABEL_35;
        }
        CmpTraceHiveSaveStart(v11);
        v22 = 1;
        started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
        if ( started < 0
          || (started = CmpStartKeyNodeStack(&v27, (unsigned __int16)(*(_WORD *)(v11 + 66) + 1)), started < 0) )
        {
          v7 = 0;
        }
        else
        {
          CmpLockKcbStackFlusherLocksExclusive((__int64)v26);
          CmpPopulateKeyNodeStackFromKcbStack(&v27, v26, 0LL);
          LOBYTE(v12) = a4;
          started = CmpDoAccessCheckOnLayeredSubtree(0, v13, (unsigned int)&v27, v12, 131097, 3);
          if ( started < 0 )
          {
LABEL_16:
            v7 = 0;
LABEL_17:
            CmpUnlockKcbStackFlusherLocksExclusive((__int64)v26);
            goto LABEL_35;
          }
          v8 = *(_QWORD *)(v11 + 32);
          if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) && *(_QWORD *)(v8 + 1544) )
          {
            if ( *(_WORD *)(v11 + 66) )
            {
              CmpLogUnsupportedOperation(25LL);
              started = -1073741822;
              goto LABEL_16;
            }
            v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 1640));
            if ( !v7 )
            {
              started = -1073741444;
              goto LABEL_17;
            }
            CmpUnlockKcbStackFlusherLocksExclusive((__int64)v26);
            CmpUnlockKcbStack(v26);
            v6 = 0;
            CmpUnlockRegistry(v14);
            v5 = 0;
            started = CmpSaveKeyByFileCopy(v8);
            if ( started >= 0 )
            {
              EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_FILE_COPIED;
              if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
                EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 0, 0LL);
            }
          }
          else
          {
            v15 = v25;
            *(_DWORD *)(*(_QWORD *)(v9 + 64) + 24LL) = v25;
            *(_DWORD *)(v9 + 220) = v15;
            started = CmpCopyMergeOfLayeredKeyNode(&v27, v9, 0xFFFFFFFFLL, 1LL, 0, &v24);
            if ( started < 0 )
              goto LABEL_16;
            v33 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_TREE_COPIED;
            if ( EtwEventEnabled(EtwpRegTraceHandle, &v33) )
              EtwWrite(EtwpRegTraceHandle, &v33, 0LL, 0, 0LL);
            *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v24;
            EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(&v27, v27);
            *(_QWORD *)EntryAtLayerHeight = v9;
            *(_DWORD *)(EntryAtLayerHeight + 8) = v17;
            v18 = (*(_BYTE *)(v9 + 140) & 1) != 0 ? HvpGetCellFlat(v9, v17) : HvpGetCellPaged(v9);
            *(_QWORD *)(EntryAtLayerHeight + 16) = v18;
            started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, &v27);
            if ( started < 0 )
              goto LABEL_16;
            started = CmpPromoteSubtree(0LL, &v27);
            if ( started < 0 )
              goto LABEL_16;
            CmpUnlockKcbStackFlusherLocksExclusive((__int64)v26);
            CmpCleanupKeyNodeStack(&v27);
            CmpInitializeKeyNodeStack(&v27);
            CmpUnlockKcbStack(v26);
            v6 = 0;
            CmpUnlockRegistry(v19);
            *(_QWORD *)(v9 + 1560) = *(_QWORD *)&EventDescriptor.Id;
            v5 = 0;
            started = HvWriteExternal(v9);
            v7 = 0;
            if ( started >= 0 )
              started = 0;
          }
        }
      }
    }
  }
LABEL_35:
  CmpCleanupKeyNodeStack(&v27);
  if ( v6 )
    CmpUnlockKcbStack(v26);
  if ( v5 )
    CmpUnlockRegistry(v20);
  if ( v7 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 1640));
  CmpCleanupKcbStack(v26);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 1560) = 0LL;
    CmpDestroyHive(v9);
  }
  if ( v22 )
    CmpTraceHiveSaveStop((unsigned int)started);
  return (unsigned int)started;
}
