/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1409335C8
 * Callers:
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     CmFreezeRegistry @ 0x1407D896C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D8B30 (CmThawRegistry.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409331F0 (CmpReorganizeHive.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 *     HvHiveStartFileBacked @ 0x140967C74 (HvHiveStartFileBacked.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140230640 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x140A4F938 (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 195) && !*(_DWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 4136) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback(v3, v2, v4, v5);
  }
  v6 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 195) = 1;
  if ( (v6 & 2) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 4136) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0, (unsigned __int64 *)&v7, 0);
  }
}
