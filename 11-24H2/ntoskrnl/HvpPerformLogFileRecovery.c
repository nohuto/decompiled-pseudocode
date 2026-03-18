/*
 * XREFs of HvpPerformLogFileRecovery @ 0x140AB060C
 * Callers:
 *     HvLoadHive @ 0x14098133C (HvLoadHive.c)
 * Callees:
 *     HvpGrowDirtyVectors @ 0x14037D62C (HvpGrowDirtyVectors.c)
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140435740 (RtlMergeBitMaps.c)
 *     RtlClearAllBits @ 0x140448960 (RtlClearAllBits.c)
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     HvpAddDummyBinToHive @ 0x1407DFA3C (HvpAddDummyBinToHive.c)
 *     HvApplyLogFiles @ 0x1407E5F88 (HvApplyLogFiles.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14087EF00 (HvpAdjustHiveFreeDisplay.c)
 *     HvpSetRangeProtection @ 0x1408832A4 (HvpSetRangeProtection.c)
 *     HvpViewMapExtendStorage @ 0x14097FB04 (HvpViewMapExtendStorage.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1409802F0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpExpandMap @ 0x140980DE8 (HvpExpandMap.c)
 *     CmpDoFileSetSizeEx @ 0x140980EB4 (CmpDoFileSetSizeEx.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140981264 (HvpLogTypeToLogArrayIndex.c)
 *     HvpMapHiveImageFromViewMap @ 0x1409829FC (HvpMapHiveImageFromViewMap.c)
 *     HvWriteHivePrimaryFile @ 0x140982C34 (HvWriteHivePrimaryFile.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A54E28 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvResetLogFileStatusAll @ 0x140A87194 (HvResetLogFileStatusAll.c)
 */

__int64 __fastcall HvpPerformLogFileRecovery(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  unsigned int v5; // r12d
  __int64 v7; // r14
  __int64 v9; // rax
  unsigned int v10; // r15d
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r12d
  __int64 Pool; // rax
  __int64 v18; // r8
  struct _PRIVILEGE_SET *v19; // r15
  _DWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // r10
  char v23; // r11
  __int64 v24; // r9
  char v25; // cl
  RTL_BITMAP *v26; // r15
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // eax
  int v30; // edx
  __int64 v31; // r9
  unsigned int v32; // edx
  int v34; // [rsp+20h] [rbp-51h]
  int v35; // [rsp+20h] [rbp-51h]
  __int64 v36; // [rsp+30h] [rbp-41h]
  __int64 v37; // [rsp+38h] [rbp-39h]
  __int64 v38; // [rsp+50h] [rbp-21h] BYREF
  __int64 v39; // [rsp+58h] [rbp-19h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp-11h]
  struct _PRIVILEGE_SET *v41; // [rsp+D0h] [rbp+5Fh]
  unsigned int v43; // [rsp+E0h] [rbp+6Fh]
  __int64 v44; // [rsp+E8h] [rbp+77h] BYREF

  v5 = a4[16];
  v7 = a5;
  v44 = 0LL;
  v38 = 0LL;
  v9 = *(_QWORD *)(BugCheckParameter2 + 64);
  v39 = 0LL;
  v41 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v10 = *(_DWORD *)(v9 + 40);
  if ( v5 <= v10 )
    v5 = *(_DWORD *)(v9 + 40);
  v43 = v5;
  if ( v5 > v10 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
    {
      v11 = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v5 + 4096, 1);
      v12 = v11;
      if ( v11 < 0 )
      {
        v35 = 0;
LABEL_7:
        SetFailureLocation(v7, 0, 27, v11, v35);
        goto LABEL_55;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
      {
        v13 = HvpViewMapExtendStorage((__int64 *)(BugCheckParameter2 + 224), v5);
        if ( v13 < 0 )
          SetFailureLocation(v7, 0, 27, v13, 16);
      }
    }
    v11 = HvpExpandMap(BugCheckParameter2, 0, v10, v5);
    v12 = v11;
    if ( v11 < 0 )
    {
      v35 = 32;
      goto LABEL_7;
    }
    *(_DWORD *)(BugCheckParameter2 + 280) = v5;
    v11 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v5, 0);
    v12 = v11;
    if ( v11 < 0 )
    {
      v35 = 48;
      goto LABEL_7;
    }
    v11 = HvpGrowDirtyVectors(BugCheckParameter2, v5, v14, v15);
    v12 = v11;
    if ( v11 < 0 )
    {
      v35 = 64;
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
      v16 = *(_DWORD *)(BugCheckParameter2 + 232) - 4096;
    else
      v16 = 0;
    if ( v10 < v16 )
    {
      v11 = HvpMapHiveImageFromViewMap(BugCheckParameter2, v10, v16 - v10);
      v12 = v11;
      if ( v11 < 0 )
      {
        v35 = 80;
        goto LABEL_7;
      }
      v10 = v16;
    }
    v5 = v43;
    while ( v10 < v43 )
    {
      v11 = HvpAddDummyBinToHive(BugCheckParameter2, v10, &v44);
      v12 = v11;
      if ( v11 < 0 )
      {
        v35 = 96;
        goto LABEL_7;
      }
      v10 += 4096;
    }
  }
  Pool = CmpAllocatePool(0x100uLL);
  v41 = (struct _PRIVILEGE_SET *)Pool;
  v19 = (struct _PRIVILEGE_SET *)Pool;
  if ( Pool )
  {
    v20 = *(_DWORD **)(BugCheckParameter2 + 64);
    v39 = Pool;
    v37 = *(_QWORD *)(BugCheckParameter2 + 32);
    v36 = *(_QWORD *)(BugCheckParameter2 + 24);
    LODWORD(v38) = v5 >> 9;
    v21 = HvApplyLogFiles(v20, a2, v18, (__int64)a4, v34, BugCheckParameter2, v36, v37, (__int64)&v38);
    v12 = v21;
    if ( v21 < 0 )
    {
      SetFailureLocation(v7, 0, 27, v21, 128);
      goto LABEL_56;
    }
    v22 = 0LL;
    if ( a4[15] )
    {
      v23 = 0;
      do
      {
        v24 = (unsigned int)a4[v22 + 13];
        v25 = -1;
        *(_WORD *)(BugCheckParameter2 + 208) |= LOWORD(a4[6 * v24 + 2]) << v23;
        if ( (unsigned int)(a4[6 * v24 + 4] - a4[6 * v24 + 3] + 1) < 0xFF )
          v25 = LOBYTE(a4[6 * v24 + 4]) - LOBYTE(a4[6 * v24 + 3]) + 1;
        v22 = (unsigned int)(v22 + 1);
        v23 += 3;
        *(_BYTE *)(v24 + BugCheckParameter2 + 210) = v25;
      }
      while ( (unsigned int)v22 < a4[15] );
    }
    HvpSetRangeProtection(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 2);
    v26 = (RTL_BITMAP *)(BugCheckParameter2 + 112);
    RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)&v38);
    *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    v27 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    v28 = 0LL;
    v12 = v27;
    if ( v27 < 0 )
    {
      SetFailureLocation(v7, 0, 27, v27, 144);
LABEL_55:
      v19 = v41;
      goto LABEL_56;
    }
    *(_BYTE *)(BugCheckParameter2 + 194) = 0;
    *(_DWORD *)(BugCheckParameter2 + 184) = a4[17];
    *(_DWORD *)(BugCheckParameter2 + 168) = a4[18];
    *(_DWORD *)(BugCheckParameter2 + 172) = a4[20];
    *(_DWORD *)(BugCheckParameter2 + 176) = a4[19];
    *(_DWORD *)(BugCheckParameter2 + 180) = a4[21];
    if ( a4[15] )
    {
      do
      {
        LOBYTE(v29) = HvpLogTypeToLogArrayIndex(a4[6 * a4[v28 + 13] + 2]);
        v28 = (unsigned int)(v30 + 1);
        *(_BYTE *)(v29 + BugCheckParameter2 + 192) = 1;
      }
      while ( (unsigned int)v28 < a4[15] );
      v26 = (RTL_BITMAP *)(BugCheckParameter2 + 112);
    }
    if ( (a4[22] & 1) != 0 && (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
    {
      RtlMergeBitMaps((__int64)v26, (unsigned int *)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits(v26);
      RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 104) = 0;
      *(_DWORD *)(BugCheckParameter2 + 160) |= 0x100u;
      v11 = HvWriteHivePrimaryFile(BugCheckParameter2, 0, 0LL, v31);
      v12 = v11;
      if ( v11 < 0 )
      {
        v35 = 256;
        goto LABEL_7;
      }
      *(_DWORD *)(BugCheckParameter2 + 184) = *(_DWORD *)(BugCheckParameter2 + 172);
      v11 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 0);
      v12 = v11;
      if ( v11 < 0 )
      {
        v35 = 272;
        goto LABEL_7;
      }
      RtlClearAllBits(v26);
      *(_DWORD *)(BugCheckParameter2 + 128) = 0;
      HvResetLogFileStatusAll(BugCheckParameter2);
      *(_DWORD *)(BugCheckParameter2 + 168) = 1;
    }
    v32 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
    if ( v32 < v5 )
      HvFreeHivePartial(BugCheckParameter2, v32, 0);
    v12 = 0;
    goto LABEL_55;
  }
  v12 = -1073741670;
  SetFailureLocation(v7, 0, 27, -1073741670, 112);
LABEL_56:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v19 )
    CmSiFreeMemory(v19);
  return v12;
}
