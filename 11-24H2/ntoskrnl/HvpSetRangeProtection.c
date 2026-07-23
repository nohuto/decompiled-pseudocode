/*
 * XREFs of HvpSetRangeProtection @ 0x140887154
 * Callers:
 *     HvpResetPageProtection @ 0x140967690 (HvpResetPageProtection.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140A67E54 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvpMapEntryGetFreeBin @ 0x1408872D4 (HvpMapEntryGetFreeBin.c)
 *     HvpViewMapSealRange @ 0x1409684E4 (HvpViewMapSealRange.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1409685D0 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpProtectBinPartial @ 0x140A2C4E4 (HvpProtectBinPartial.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BBB790 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
 */

_BOOL8 __fastcall HvpSetRangeProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4)
{
  unsigned int v7; // ebx
  _BOOL8 result; // rax
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  _DWORD *v11; // rcx
  int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // r8
  __int64 v16; // r10
  int v17; // r11d
  unsigned int v18; // esi
  ULONG_PTR v19; // rcx
  __int64 BinAddress; // rax
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r8d
  int v24; // r11d
  __int16 v25; // [rsp+50h] [rbp+8h] BYREF

  v25 = 0;
  v7 = BugCheckParameter3;
  HvpGetBinContextInitialize(&v25);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x11) == 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !a3 )
          return 1LL;
        CellMap = HvpGetCellMap(BugCheckParameter2, v7);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x445uLL);
        if ( (*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          break;
        v7 += 4096;
        a3 -= 4096;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      v12 = FreeBin ? v7 - *(_DWORD *)(FreeBin + 20) : *v11;
      v13 = HvpGetCellMap(BugCheckParameter2, v7 - v12);
      v18 = *(_DWORD *)(v13 + 16) - v17;
      if ( a3 < v18 )
        v18 = a3;
      if ( (v15 & 8) != 0 )
        break;
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
        goto LABEL_17;
      v19 = BugCheckParameter2 + 224;
      if ( a4 == 2 )
      {
        HvpViewMapSealRange(v19, v7, v18);
        goto LABEL_17;
      }
      if ( (int)HvpViewMapCOWAndUnsealRange(v19, v7, v18) < 0 )
      {
        result = 0LL;
        goto LABEL_16;
      }
LABEL_17:
      a3 -= v18;
      v7 += v18;
    }
    BinAddress = HvpMapEntryGetBinAddress(v14, v16, &v25);
    HvpMapEntryReleaseBinAddress(v21, BinAddress, &v25);
    result = (int)HvpProtectBinPartial(BugCheckParameter2, v22, v23, v24, v18, a4 == 4) >= 0;
LABEL_16:
    if ( !result && a4 == 4 )
      return result;
    goto LABEL_17;
  }
  return 1LL;
}
