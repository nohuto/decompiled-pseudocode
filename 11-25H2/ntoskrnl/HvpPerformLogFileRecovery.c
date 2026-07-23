/*
 * XREFs of HvpPerformLogFileRecovery @ 0x1409FA6B8
 * Callers:
 *     HvLoadHive @ 0x1409F8C4C (HvLoadHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     RtlMergeBitMaps @ 0x140439210 (RtlMergeBitMaps.c)
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     HvpGrowDirtyVectors @ 0x1404612E4 (HvpGrowDirtyVectors.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     HvpAddDummyBinToHive @ 0x1407D0164 (HvpAddDummyBinToHive.c)
 *     HvApplyLogFiles @ 0x1407D6104 (HvApplyLogFiles.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14087E300 (HvpAdjustHiveFreeDisplay.c)
 *     HvpSetRangeProtection @ 0x1408813B4 (HvpSetRangeProtection.c)
 *     HvpViewMapExtendStorage @ 0x1408834A4 (HvpViewMapExtendStorage.c)
 *     HvWriteHivePrimaryFile @ 0x1409F7344 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1409F76C8 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpExpandMap @ 0x1409F81BC (HvpExpandMap.c)
 *     CmpDoFileSetSizeEx @ 0x1409F8288 (CmpDoFileSetSizeEx.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1409F8638 (HvpLogTypeToLogArrayIndex.c)
 *     HvpMapHiveImageFromViewMap @ 0x1409F991C (HvpMapHiveImageFromViewMap.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A5100C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvResetLogFileStatusAll @ 0x140A828F4 (HvResetLogFileStatusAll.c)
 */

__int64 __fastcall HvpPerformLogFileRecovery(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  unsigned int v5; // r12d
  __int64 v7; // r14
  __int64 v9; // rax
  unsigned int v10; // r15d
  int v11; // eax
  unsigned int v12; // ebx
  NTSTATUS v13; // eax
  unsigned int v14; // r12d
  __int64 Pool; // rax
  __int64 v16; // r8
  struct _PRIVILEGE_SET *v17; // r15
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // r10
  char v21; // r11
  __int64 v22; // r9
  char v23; // cl
  _RTL_BITMAP *v24; // r15
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // eax
  int v28; // edx
  __int64 v29; // r9
  int v31; // [rsp+20h] [rbp-51h]
  int v32; // [rsp+20h] [rbp-51h]
  __int64 v33; // [rsp+30h] [rbp-41h]
  __int64 v34; // [rsp+38h] [rbp-39h]
  __int64 v35; // [rsp+50h] [rbp-21h] BYREF
  __int64 v36; // [rsp+58h] [rbp-19h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp-11h]
  struct _PRIVILEGE_SET *v38; // [rsp+D0h] [rbp+5Fh]
  unsigned int v40; // [rsp+E0h] [rbp+6Fh]
  __int64 v41; // [rsp+E8h] [rbp+77h] BYREF

  v5 = a4[16];
  v7 = a5;
  v41 = 0LL;
  v35 = 0LL;
  v9 = *(_QWORD *)(BugCheckParameter2 + 64);
  v36 = 0LL;
  v38 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v10 = *(_DWORD *)(v9 + 40);
  if ( v5 <= v10 )
    v5 = *(_DWORD *)(v9 + 40);
  v40 = v5;
  if ( v5 > v10 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
    {
      v11 = CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v5 + 4096, 1);
      v12 = v11;
      if ( v11 < 0 )
      {
        v32 = 0;
LABEL_7:
        SetFailureLocation(v7, 0, 27, v11, v32);
        goto LABEL_55;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
      {
        v13 = HvpViewMapExtendStorage(BugCheckParameter2 + 224, v5);
        if ( v13 < 0 )
          SetFailureLocation(v7, 0, 27, v13, 16);
      }
    }
    v11 = HvpExpandMap(BugCheckParameter2, 0, v10, v5);
    v12 = v11;
    if ( v11 < 0 )
    {
      v32 = 32;
      goto LABEL_7;
    }
    *(_DWORD *)(BugCheckParameter2 + 280) = v5;
    v11 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v5, 0);
    v12 = v11;
    if ( v11 < 0 )
    {
      v32 = 48;
      goto LABEL_7;
    }
    v11 = HvpGrowDirtyVectors(BugCheckParameter2, v5);
    v12 = v11;
    if ( v11 < 0 )
    {
      v32 = 64;
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
      v14 = *(_DWORD *)(BugCheckParameter2 + 232) - 4096;
    else
      v14 = 0;
    if ( v10 < v14 )
    {
      v11 = HvpMapHiveImageFromViewMap(BugCheckParameter2, v10, v14 - v10);
      v12 = v11;
      if ( v11 < 0 )
      {
        v32 = 80;
        goto LABEL_7;
      }
      v10 = v14;
    }
    v5 = v40;
    while ( v10 < v40 )
    {
      v11 = HvpAddDummyBinToHive(BugCheckParameter2, v10, &v41);
      v12 = v11;
      if ( v11 < 0 )
      {
        v32 = 96;
        goto LABEL_7;
      }
      v10 += 4096;
    }
  }
  Pool = CmpAllocatePool(0x100uLL);
  v38 = (struct _PRIVILEGE_SET *)Pool;
  v17 = (struct _PRIVILEGE_SET *)Pool;
  if ( Pool )
  {
    v18 = *(_DWORD **)(BugCheckParameter2 + 64);
    v36 = Pool;
    v34 = *(_QWORD *)(BugCheckParameter2 + 32);
    v33 = *(_QWORD *)(BugCheckParameter2 + 24);
    LODWORD(v35) = v5 >> 9;
    v19 = HvApplyLogFiles(v18, a2, v16, (__int64)a4, v31, BugCheckParameter2, v33, v34, (__int64)&v35);
    v12 = v19;
    if ( v19 < 0 )
    {
      SetFailureLocation(v7, 0, 27, v19, 128);
      goto LABEL_56;
    }
    v20 = 0LL;
    if ( a4[15] )
    {
      v21 = 0;
      do
      {
        v22 = (unsigned int)a4[v20 + 13];
        v23 = -1;
        *(_WORD *)(BugCheckParameter2 + 208) |= LOWORD(a4[6 * v22 + 2]) << v21;
        if ( (unsigned int)(a4[6 * v22 + 4] - a4[6 * v22 + 3] + 1) < 0xFF )
          v23 = LOBYTE(a4[6 * v22 + 4]) - LOBYTE(a4[6 * v22 + 3]) + 1;
        v20 = (unsigned int)(v20 + 1);
        v21 += 3;
        *(_BYTE *)(v22 + BugCheckParameter2 + 210) = v23;
      }
      while ( (unsigned int)v20 < a4[15] );
    }
    HvpSetRangeProtection(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 2);
    v24 = (_RTL_BITMAP *)(BugCheckParameter2 + 112);
    RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)&v35);
    *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    v25 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    v26 = 0LL;
    v12 = v25;
    if ( v25 < 0 )
    {
      SetFailureLocation(v7, 0, 27, v25, 144);
LABEL_55:
      v17 = v38;
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
        LOBYTE(v27) = HvpLogTypeToLogArrayIndex(a4[6 * a4[v26 + 13] + 2]);
        v26 = (unsigned int)(v28 + 1);
        *(_BYTE *)(v27 + BugCheckParameter2 + 192) = 1;
      }
      while ( (unsigned int)v26 < a4[15] );
      v24 = (_RTL_BITMAP *)(BugCheckParameter2 + 112);
    }
    if ( (a4[22] & 1) != 0 && (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
    {
      RtlMergeBitMaps((__int64)v24, (unsigned int *)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits(v24);
      RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 104) = 0;
      *(_DWORD *)(BugCheckParameter2 + 160) |= 0x100u;
      v11 = HvWriteHivePrimaryFile(BugCheckParameter2, 0, 0LL, v29);
      v12 = v11;
      if ( v11 < 0 )
      {
        v32 = 256;
        goto LABEL_7;
      }
      *(_DWORD *)(BugCheckParameter2 + 184) = *(_DWORD *)(BugCheckParameter2 + 172);
      v11 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 0);
      v12 = v11;
      if ( v11 < 0 )
      {
        v32 = 272;
        goto LABEL_7;
      }
      RtlClearAllBits(v24);
      *(_DWORD *)(BugCheckParameter2 + 128) = 0;
      HvResetLogFileStatusAll(BugCheckParameter2);
      *(_DWORD *)(BugCheckParameter2 + 168) = 1;
    }
    if ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) < v5 )
      HvFreeHivePartial(BugCheckParameter2);
    v12 = 0;
    goto LABEL_55;
  }
  v12 = -1073741670;
  SetFailureLocation(v7, 0, 27, -1073741670, 112);
LABEL_56:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v17 )
    CmSiFreeMemory(v17);
  return v12;
}
