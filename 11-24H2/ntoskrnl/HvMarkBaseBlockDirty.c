/*
 * XREFs of HvMarkBaseBlockDirty @ 0x140931488
 * Callers:
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     CmFreezeRegistry @ 0x1407D841C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1409310B0 (CmpReorganizeHive.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 *     HvHiveStartFileBacked @ 0x14097F464 (HvHiveStartFileBacked.c)
 *     CmpCreateHiveRootCell @ 0x140AA6F78 (CmpCreateHiveRootCell.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x14027B0B0 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x140A58188 (CmpIssueNewDirtyCallback.c)
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
