/*
 * XREFs of IoWriteCrashDump @ 0x1405927D4
 * Callers:
 *     IoRetryAsMiniDump @ 0x140591DA0 (IoRetryAsMiniDump.c)
 *     KiBugCheckWriteCrashDump @ 0x1405B30F8 (KiBugCheckWriteCrashDump.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x14029DE08 (KdCheckForDebugBreak.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     RtlNumberOfSetBitsEx @ 0x1404181F0 (RtlNumberOfSetBitsEx.c)
 *     IoSaveBugCheckProgress @ 0x140591F10 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x1405922C0 (IoSetBugCheckProgressFlag.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1405924DC (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopCollectTriageDumpData @ 0x140593804 (IopCollectTriageDumpData.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140593AAC (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140593BF4 (IopDumpCallRemovePagesCallbacks.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14059584C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x140595A24 (IopWriteTriageDumpToFirmware.c)
 *     IoAddPagesForPartialKernelDump @ 0x14059FF50 (IoAddPagesForPartialKernelDump.c)
 *     MmGetDumpRange @ 0x140677B48 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x140677F08 (MmSnapTriageDumpInformation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

char __fastcall IoWriteCrashDump(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  char v9; // di
  __int64 v11; // r14
  unsigned int v12; // r15d
  unsigned int v13; // esi
  int v14; // ebx
  __int64 v16; // r9
  unsigned int i; // edx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  char v22; // cl
  int v23; // eax
  char v24; // r13
  __int64 v25; // rdx
  int v26; // esi
  __int64 v27; // r8
  __int64 v28; // r11
  __int64 v29; // r9
  _OWORD *v30; // rcx
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  void *v36; // rcx
  int v37; // edx
  __int64 v38; // rsi
  unsigned int v39; // r14d
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  int v44; // ecx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // eax
  int v51; // ebx
  char v52; // [rsp+50h] [rbp-91h]
  unsigned int v53; // [rsp+54h] [rbp-8Dh]
  int v56; // [rsp+78h] [rbp-69h]
  _QWORD v57[6]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-29h]
  __int64 v60; // [rsp+C0h] [rbp-21h]
  __int64 v61; // [rsp+C8h] [rbp-19h]

  v9 = 0;
  v11 = a2;
  v52 = a8 == 0;
  v12 = a1;
  v13 = 0;
  v56 = a2;
  v14 = 0;
  v53 = 0;
  KdCheckForDebugBreak(a1, a2, a3);
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(v12, v11, a3, a4, a5, (__int64)a6, a7);
  if ( DWORD1(xmmword_140E660E8) && !byte_140E660E4 )
  {
    IoSetBugCheckProgressFlag(0x400000);
    return 0;
  }
  v60 = a4;
  v61 = a5;
  v58 = v11;
  v59 = a3;
  MmSnapTriageDumpInformation(a6, &v58);
  if ( !CrashdmpDumpBlock )
    return v9;
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( *(_DWORD *)(CrashdmpDumpBlock + 4LL * i + 1372) == v12 )
      {
        *(_DWORD *)(CrashdmpDumpBlock + 1336) = 5;
        break;
      }
    }
  }
  if ( !a8 )
  {
    v13 = 1;
    *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
  }
  guard_dispatch_icall_no_overrides(1LL, 0LL, v13, v16);
  v21 = CrashdmpDumpBlock;
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0 || (v22 = 1, *(_DWORD *)(CrashdmpDumpBlock + 1336) != 5) )
    v22 = 0;
  if ( VslVsmEnabled )
  {
    v23 = 2 * HvlpForceAllPages;
    HvlpForceAllPages *= 2;
    if ( v22 )
      HvlpForceAllPages = v23 | 1;
  }
  LOBYTE(v21) = 1;
  ViVerifyDma = 0;
  v24 = guard_dispatch_icall_no_overrides(v21, v18, v19, v20);
  IoSaveBugCheckProgress(32);
  v25 = 9LL;
  v26 = a3;
  v27 = a4;
  v28 = a5;
  v29 = (__int64)a6;
  *(_DWORD *)(CrashdmpDumpBlock + 24) = v12;
  v30 = a6;
  *(_QWORD *)(CrashdmpDumpBlock + 32) = v11;
  *(_QWORD *)(CrashdmpDumpBlock + 40) = a3;
  *(_QWORD *)(CrashdmpDumpBlock + 48) = a4;
  *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
  v31 = (_OWORD *)(CrashdmpDumpBlock + 64);
  do
  {
    *v31 = *v30;
    v31[1] = v30[1];
    v31[2] = v30[2];
    v31[3] = v30[3];
    v31[4] = v30[4];
    v31[5] = v30[5];
    v31[6] = v30[6];
    v31 += 8;
    v32 = v30[7];
    v30 += 8;
    *(v31 - 1) = v32;
    --v25;
  }
  while ( v25 );
  *v31 = *v30;
  v31[1] = v30[1];
  v31[2] = v30[2];
  v31[3] = v30[3];
  v31[4] = v30[4];
  *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
  *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
  *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
  *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1416) = &KeBugCheckTriageDumpDataArrayListHead;
  *(_BYTE *)(CrashdmpDumpBlock + 1432) = 4;
  if ( a8 )
    v33 = *(_QWORD *)(*(_QWORD *)(a7 + 184) + 40LL);
  else
    v33 = __readcr3();
  *(_QWORD *)(CrashdmpDumpBlock + 1344) = v33 & 0xFFFFFFFFFFFFF000uLL;
  v34 = *(_QWORD *)(CrashdmpDumpBlock + 1328);
  if ( v34 )
    goto LABEL_30;
  if ( v24 == 1 )
  {
    if ( a8 )
      goto LABEL_42;
LABEL_30:
    if ( v24 == 1 )
      goto LABEL_33;
  }
  v35 = *(_QWORD *)(CrashdmpDumpBlock + 1360);
  if ( v35 )
  {
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = v35 + 12316;
    *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    goto LABEL_36;
  }
LABEL_33:
  if ( !v34 && !a8 )
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
LABEL_36:
  v36 = *(void **)(CrashdmpDumpBlock + 1328);
  if ( IoPreparedTriageDumpData )
  {
    if ( IoPreparedTriageDumpData != v36 )
    {
      memmove(v36, IoPreparedTriageDumpData, *((unsigned int *)IoPreparedTriageDumpData + 1));
LABEL_41:
      v28 = a5;
      v29 = (__int64)a6;
      v27 = a4;
    }
LABEL_42:
    v37 = *(_DWORD *)(CrashdmpDumpBlock + 1368) & 2;
    if ( v37 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 4u;
      v14 = IoAddPagesForPartialKernelDump(v12, v11, a3, v27, v28, v29, a7);
      goto LABEL_55;
    }
    v38 = *(_QWORD *)(CrashdmpDumpBlock + 8);
    if ( !v38 )
    {
LABEL_54:
      v26 = a3;
LABEL_55:
      if ( v14 >= 0 )
        v14 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock, a8, v27, v29);
      if ( v14 != -1073741267 )
        goto LABEL_65;
      if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
      {
        IoSaveBugCheckProgress(39);
        *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 8u;
        v14 = IoAddPagesForPartialKernelDump(v12, v11, v26, a4, a5, (__int64)a6, a7);
        if ( v14 < 0 )
          goto LABEL_65;
        v43 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock, a8, v41, v42);
        v44 = 38;
      }
      else
      {
        if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) )
          goto LABEL_65;
        IoSetBugCheckProgressFlag(1024);
        IoPreparedTriageDumpData = 0LL;
        v14 = IopCollectTriageDumpData(v12, v11, v26, a4, a5, (__int64)a6, a7, v52);
        if ( v14 < 0 )
          goto LABEL_65;
        v43 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock, a8, v45, v46);
        v44 = 35;
      }
      v14 = v43;
      IoSaveBugCheckProgress(v44);
LABEL_65:
      if ( (DumpPolicyAttemptOffline & 1) != 0 && v14 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v24 )
      {
        IoSaveBugCheckProgress(36);
        if ( (int)guard_dispatch_icall_no_overrides(0LL, v47, v48, v49) >= 0 )
        {
          IoSetBugCheckProgressFlag(4096);
          while ( 1 )
          {
            KeStallExecutionProcessor(0xF4240u);
            ++AttemptOfflineStallCount;
          }
        }
      }
      else if ( v14 >= 0 )
      {
        if ( v24 == 1 || !*(_QWORD *)(CrashdmpDumpBlock + 1360) )
          return 1;
        v50 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
        if ( (v50 & 0x860000) == 0 )
          *(_DWORD *)(CrashdmpDumpBlock + 1404) = v50 & 0xFFFFFE00 | 0x25;
        *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x800u;
        IoUpdateBugCheckProgressEnvVariable();
        v51 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
        IoSetBugCheckProgressFlag(0x10000000);
        if ( v51 >= 0 )
          return 1;
      }
      return v9;
    }
    v57[5] = 0LL;
    v39 = 1;
    v58 = *(_QWORD *)(v38 + 48);
    v59 = v38 + 56;
    v57[2] = &v58;
    v57[0] = IoSetDumpRange;
    v57[1] = IoFreeDumpRange;
    v57[3] = v38;
    v57[4] = 0LL;
    v40 = *(_DWORD *)(CrashdmpDumpBlock + 1336);
    if ( v40 == 6 )
    {
      v53 = a9 != 0;
    }
    else
    {
      if ( v40 != 5 || !v37 )
        goto LABEL_53;
      v53 = 2;
    }
    v39 = 0;
LABEL_53:
    IopDumpCallAddPagesCallbacks(v12);
    IoSaveBugCheckProgress(33);
    MmGetDumpRange(v57, v39, v53);
    IoSaveBugCheckProgress(43);
    IopDumpCallRemovePagesCallbacks(v12);
    IoSaveBugCheckProgress(34);
    LODWORD(v11) = v56;
    *(_QWORD *)(v38 + 40) = RtlNumberOfSetBitsEx(&v58);
    goto LABEL_54;
  }
  v14 = IopCollectTriageDumpData(v12, v11, a3, a4, a5, (__int64)a6, a7, v52);
  if ( v14 >= 0 )
    goto LABEL_41;
  return v9;
}
