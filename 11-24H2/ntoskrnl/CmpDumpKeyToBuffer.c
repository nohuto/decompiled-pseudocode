/*
 * XREFs of CmpDumpKeyToBuffer @ 0x140BBB130
 * Callers:
 *     CmSaveKeyToBuffer @ 0x140BBB010 (CmSaveKeyToBuffer.c)
 * Callees:
 *     CmSiRWLockReleaseExclusive @ 0x1409F6640 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409FF8F8 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140BBB26C (CmpIsKeyBodyEligibleForDump.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BBB508 (HvSnapshotHiveToOffsetArray.c)
 *     CmLockHiveSecurityShared @ 0x140BBB96C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140BBBB34 (CmpDoAccessCheckOnSubtree.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpDumpKeyToBuffer(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  ULONG_PTR v7; // rdi
  int IsKeyBodyEligibleForDump; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]
  unsigned int v18; // [rsp+40h] [rbp-28h]
  int v19; // [rsp+44h] [rbp-24h]

  v16[1] = 0;
  v19 = 0;
  CmpLockRegistry(a1);
  v7 = *(_QWORD *)(a1 + 8);
  CmpLockKcbShared(v7);
  IsKeyBodyEligibleForDump = CmpIsKeyBodyEligibleForDump(a1, v7);
  if ( IsKeyBodyEligibleForDump >= 0 )
  {
    if ( *(_WORD *)(v7 + 66) )
    {
      IsKeyBodyEligibleForDump = -1073741637;
    }
    else
    {
      CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
      v9 = *(_QWORD *)(v7 + 32);
      v10 = *(_DWORD *)(v9 + 280) + 4096;
      if ( *a4 >= v10 )
      {
        CmLockHiveSecurityShared(v9);
        IsKeyBodyEligibleForDump = CmpDoAccessCheckOnSubtree(*(_QWORD *)(v7 + 32), 3);
        CmUnlockHiveSecurity(*(_QWORD *)(v7 + 32));
        if ( IsKeyBodyEligibleForDump >= 0 )
        {
          v14 = *(_QWORD *)(v7 + 32);
          v18 = *a4;
          v16[0] = 0;
          v17 = a3;
          IsKeyBodyEligibleForDump = HvSnapshotHiveToOffsetArray(v14, v13, v16);
          if ( IsKeyBodyEligibleForDump >= 0 )
          {
            CmSiRWLockReleaseExclusive((volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
            CmpUnlockKcb(v7);
            CmpUnlockRegistry(v15);
            return 0;
          }
        }
      }
      else
      {
        *a4 = v10;
        IsKeyBodyEligibleForDump = -1073741789;
      }
      CmSiRWLockReleaseExclusive((volatile signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL));
    }
  }
  CmpUnlockKcb(v7);
  CmpUnlockRegistry(v11);
  return (unsigned int)IsKeyBodyEligibleForDump;
}
