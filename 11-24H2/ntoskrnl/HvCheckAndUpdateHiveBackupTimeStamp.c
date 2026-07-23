/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A4CD78
 * Callers:
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407DEC30 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvCheckAndUpdateHiveBackupTimeStamp(ULONG_PTR BugCheckParameter2)
{
  __int64 CellMap; // rax
  __int64 v3; // rcx
  __int64 BinAddress; // rdi
  __int64 result; // rax
  __int16 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  HvpGetBinContextInitialize(&v6);
  CellMap = HvpGetCellMap(BugCheckParameter2, 0LL);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x1419uLL);
  BinAddress = HvpMapEntryGetBinAddress(v3, CellMap, &v6);
  if ( *(_QWORD *)(BinAddress + 20) == *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL) )
    return 0LL;
  result = HvpMarkDirty(BugCheckParameter2, 0, 0x20u, 0);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(BinAddress + 20) = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL);
    return 0LL;
  }
  return result;
}
