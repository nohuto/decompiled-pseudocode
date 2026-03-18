/*
 * XREFs of HvMarkBaseBlockDirty @ 0x140A4B658
 * Callers:
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     NtCompressKey @ 0x1407C02F0 (NtCompressKey.c)
 *     CmFreezeRegistry @ 0x1407C8C7C (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     HvHiveStartFileBacked @ 0x1409F8934 (HvHiveStartFileBacked.c)
 *     CmpReorganizeHive @ 0x140A4B428 (CmpReorganizeHive.c)
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140349918 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x140A546A0 (CmpIssueNewDirtyCallback.c)
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
