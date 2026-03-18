/*
 * XREFs of CmDumpKeyToFile @ 0x1407CCD84
 * Callers:
 *     NtSaveKeyEx @ 0x140A6DF30 (NtSaveKeyEx.c)
 * Callees:
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmpFreeOffsetArray @ 0x1407DC650 (CmpFreeOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407DC93C (CmpWriteOffsetArrayToFile.c)
 *     HvAllocateOffsetArraysForHiveSnapshot @ 0x1407E36B4 (HvAllocateOffsetArraysForHiveSnapshot.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140BB926C (CmpIsKeyBodyEligibleForDump.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BB9508 (HvSnapshotHiveToOffsetArray.c)
 *     CmLockHiveSecurityShared @ 0x140BB996C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BB99C8 (CmUnlockHiveSecurity.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BB9A98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140BB9B34 (CmpDoAccessCheckOnSubtree.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmDumpKeyToFile(__int64 a1, char a2, void *a3)
{
  char v4; // r14
  __int64 v5; // rsi
  ULONG_PTR v8; // rbx
  char v9; // r15
  int IsKeyBodyEligibleForDump; // edi
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  int v16[2]; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF

  v18 = 0;
  v4 = 0;
  v17 = 0;
  v5 = 0LL;
  *(_QWORD *)v16 = 0LL;
  CmpLockRegistry();
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 1;
  CmpLockKcbShared(v8);
  IsKeyBodyEligibleForDump = CmpIsKeyBodyEligibleForDump(a1, v8);
  if ( IsKeyBodyEligibleForDump >= 0 )
  {
    if ( *(_WORD *)(v8 + 66) )
    {
      CmpUnlockKcb(v8);
      CmpUnlockRegistry();
      LOBYTE(v11) = a2;
      return (unsigned int)CmSaveKey(a1, a3, 5LL, v11);
    }
    HvLockHiveFlusherExclusive(*(_QWORD *)(v8 + 32));
    v4 = 1;
    CmLockHiveSecurityShared(*(_QWORD *)(v8 + 32));
    IsKeyBodyEligibleForDump = CmpDoAccessCheckOnSubtree(*(_QWORD *)(v8 + 32), 3);
    CmUnlockHiveSecurity(*(_QWORD *)(v8 + 32));
    if ( IsKeyBodyEligibleForDump >= 0 )
    {
      v12 = HvAllocateOffsetArraysForHiveSnapshot(*(_QWORD *)(v8 + 32), &v17, v16, &v18);
      v5 = *(_QWORD *)v16;
      IsKeyBodyEligibleForDump = v12;
      if ( v12 >= 0 )
      {
        IsKeyBodyEligibleForDump = HvSnapshotHiveToOffsetArray(*(_QWORD *)(v8 + 32), v13, *(_QWORD *)v16);
        if ( IsKeyBodyEligibleForDump >= 0 )
        {
          HvUnlockHiveFlusherExclusive(*(_QWORD *)(v8 + 32));
          v4 = 0;
          CmpUnlockKcb(v8);
          CmpUnlockRegistry();
          v9 = 0;
          IsKeyBodyEligibleForDump = CmpWriteOffsetArrayToFile(v14, v17, v5, v18, a3);
          if ( IsKeyBodyEligibleForDump >= 0 )
            IsKeyBodyEligibleForDump = 0;
        }
      }
    }
  }
  if ( v5 )
    CmpFreeOffsetArray((unsigned int)v17, v5);
  if ( v4 )
    HvUnlockHiveFlusherExclusive(*(_QWORD *)(v8 + 32));
  if ( v9 )
  {
    CmpUnlockKcb(v8);
    CmpUnlockRegistry();
  }
  return (unsigned int)IsKeyBodyEligibleForDump;
}
