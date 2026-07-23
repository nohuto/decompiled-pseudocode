/*
 * XREFs of IoWriteCrashDump @ 0x14058F7F8
 * Callers:
 *     IoRetryAsMiniDump @ 0x14058EDC0 (IoRetryAsMiniDump.c)
 *     KiBugCheckWriteCrashDump @ 0x1405B0068 (KiBugCheckWriteCrashDump.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x1402AC8F8 (KdCheckForDebugBreak.c)
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x14058F2E0 (IoSetBugCheckProgressFlag.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14058F500 (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopCollectTriageDumpData @ 0x140590828 (IopCollectTriageDumpData.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140590AD0 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140590C18 (IopDumpCallRemovePagesCallbacks.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14059287C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x140592A54 (IopWriteTriageDumpToFirmware.c)
 *     IoAddPagesForPartialKernelDump @ 0x14059CE74 (IoAddPagesForPartialKernelDump.c)
 *     MmGetDumpRange @ 0x140678D28 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x1406790E8 (MmSnapTriageDumpInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
  int v13; // ebx
  unsigned int i; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // cl
  int v19; // eax
  char v20; // r13
  __int64 v21; // rdx
  int v22; // esi
  int v23; // r8d
  __int64 v24; // r11
  __int64 v25; // r9
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  void *v32; // rcx
  int v33; // edx
  __int64 v34; // rsi
  unsigned int v35; // r14d
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  __int64 v39; // rdx
  int v40; // eax
  int v41; // ebx
  char v42; // [rsp+50h] [rbp-91h]
  unsigned int v43; // [rsp+54h] [rbp-8Dh]
  int v46; // [rsp+78h] [rbp-69h]
  _QWORD v47[6]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-29h]
  __int64 v50; // [rsp+C0h] [rbp-21h]
  __int64 v51; // [rsp+C8h] [rbp-19h]

  v9 = 0;
  v11 = a2;
  v42 = a8 == 0;
  v12 = a1;
  v46 = a2;
  v13 = 0;
  v43 = 0;
  KdCheckForDebugBreak(a1, a2, a3, a4);
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(v12, v11, a3, a4, a5, (__int64)a6, a7);
  if ( DWORD1(xmmword_140E661D8) && !byte_140E661D4 )
  {
    IoSetBugCheckProgressFlag(0x400000);
    return 0;
  }
  v50 = a4;
  v51 = a5;
  v48 = v11;
  v49 = a3;
  MmSnapTriageDumpInformation(a6, &v48);
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
    *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
  guard_dispatch_icall_no_overrides(1LL, 0LL);
  v17 = CrashdmpDumpBlock;
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0 || (v18 = 1, *(_DWORD *)(CrashdmpDumpBlock + 1336) != 5) )
    v18 = 0;
  if ( VslVsmEnabled )
  {
    v19 = 2 * HvlpForceAllPages;
    HvlpForceAllPages *= 2;
    if ( v18 )
      HvlpForceAllPages = v19 | 1;
  }
  LOBYTE(v17) = 1;
  ViVerifyDma = 0;
  v20 = guard_dispatch_icall_no_overrides(v17, v16);
  IoSaveBugCheckProgress(32);
  v21 = 9LL;
  v22 = a3;
  v23 = a4;
  v24 = a5;
  v25 = (__int64)a6;
  *(_DWORD *)(CrashdmpDumpBlock + 24) = v12;
  v26 = a6;
  *(_QWORD *)(CrashdmpDumpBlock + 32) = v11;
  *(_QWORD *)(CrashdmpDumpBlock + 40) = a3;
  *(_QWORD *)(CrashdmpDumpBlock + 48) = a4;
  *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
  v27 = (_OWORD *)(CrashdmpDumpBlock + 64);
  do
  {
    *v27 = *v26;
    v27[1] = v26[1];
    v27[2] = v26[2];
    v27[3] = v26[3];
    v27[4] = v26[4];
    v27[5] = v26[5];
    v27[6] = v26[6];
    v27 += 8;
    v28 = v26[7];
    v26 += 8;
    *(v27 - 1) = v28;
    --v21;
  }
  while ( v21 );
  *v27 = *v26;
  v27[1] = v26[1];
  v27[2] = v26[2];
  v27[3] = v26[3];
  v27[4] = v26[4];
  *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
  *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
  *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
  *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1416) = &KeBugCheckTriageDumpDataArrayListHead;
  *(_BYTE *)(CrashdmpDumpBlock + 1432) = 4;
  if ( a8 )
    v29 = *(_QWORD *)(*(_QWORD *)(a7 + 184) + 40LL);
  else
    v29 = __readcr3();
  *(_QWORD *)(CrashdmpDumpBlock + 1344) = v29 & 0xFFFFFFFFFFFFF000uLL;
  v30 = *(_QWORD *)(CrashdmpDumpBlock + 1328);
  if ( v30 )
    goto LABEL_30;
  if ( v20 == 1 )
  {
    if ( a8 )
      goto LABEL_42;
LABEL_30:
    if ( v20 == 1 )
      goto LABEL_33;
  }
  v31 = *(_QWORD *)(CrashdmpDumpBlock + 1360);
  if ( v31 )
  {
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = v31 + 12316;
    *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    goto LABEL_36;
  }
LABEL_33:
  if ( !v30 && !a8 )
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
LABEL_36:
  v32 = *(void **)(CrashdmpDumpBlock + 1328);
  if ( IoPreparedTriageDumpData )
  {
    if ( IoPreparedTriageDumpData != v32 )
    {
      memmove(v32, IoPreparedTriageDumpData, *((unsigned int *)IoPreparedTriageDumpData + 1));
LABEL_41:
      v24 = a5;
      v25 = (__int64)a6;
      v23 = a4;
    }
LABEL_42:
    v33 = *(_DWORD *)(CrashdmpDumpBlock + 1368) & 2;
    if ( v33 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 4u;
      v13 = IoAddPagesForPartialKernelDump(v12, v11, a3, v23, v24, v25, a7);
      goto LABEL_55;
    }
    v34 = *(_QWORD *)(CrashdmpDumpBlock + 8);
    if ( !v34 )
    {
LABEL_54:
      v22 = a3;
LABEL_55:
      if ( v13 >= 0 )
        v13 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock, a8);
      if ( v13 != -1073741267 )
        goto LABEL_65;
      if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
      {
        IoSaveBugCheckProgress(39);
        *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 8u;
        v13 = IoAddPagesForPartialKernelDump(v12, v11, v22, a4, a5, (__int64)a6, a7);
        if ( v13 < 0 )
          goto LABEL_65;
        v37 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock, a8);
        v38 = 38;
      }
      else
      {
        if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) )
          goto LABEL_65;
        IoSetBugCheckProgressFlag(1024);
        IoPreparedTriageDumpData = 0LL;
        v13 = IopCollectTriageDumpData(v12, v11, v22, a4, a5, (__int64)a6, a7, v42);
        if ( v13 < 0 )
          goto LABEL_65;
        v37 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock, a8);
        v38 = 35;
      }
      v13 = v37;
      IoSaveBugCheckProgress(v38);
LABEL_65:
      if ( (DumpPolicyAttemptOffline & 1) != 0 && v13 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v20 )
      {
        IoSaveBugCheckProgress(36);
        if ( (int)guard_dispatch_icall_no_overrides(0LL, v39) >= 0 )
        {
          IoSetBugCheckProgressFlag(4096);
          while ( 1 )
          {
            KeStallExecutionProcessor(0xF4240u);
            ++AttemptOfflineStallCount;
          }
        }
      }
      else if ( v13 >= 0 )
      {
        if ( v20 == 1 || !*(_QWORD *)(CrashdmpDumpBlock + 1360) )
          return 1;
        v40 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
        if ( (v40 & 0x860000) == 0 )
          *(_DWORD *)(CrashdmpDumpBlock + 1404) = v40 & 0xFFFFFE00 | 0x25;
        *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x800u;
        IoUpdateBugCheckProgressEnvVariable();
        v41 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
        IoSetBugCheckProgressFlag(0x10000000);
        if ( v41 >= 0 )
          return 1;
      }
      return v9;
    }
    v47[5] = 0LL;
    v35 = 1;
    v48 = *(_QWORD *)(v34 + 48);
    v49 = v34 + 56;
    v47[2] = &v48;
    v47[0] = IoSetDumpRange;
    v47[1] = IoFreeDumpRange;
    v47[3] = v34;
    v47[4] = 0LL;
    v36 = *(_DWORD *)(CrashdmpDumpBlock + 1336);
    if ( v36 == 6 )
    {
      v43 = a9 != 0;
    }
    else
    {
      if ( v36 != 5 || !v33 )
        goto LABEL_53;
      v43 = 2;
    }
    v35 = 0;
LABEL_53:
    IopDumpCallAddPagesCallbacks(v12);
    IoSaveBugCheckProgress(33);
    MmGetDumpRange(v47, v35, v43);
    IoSaveBugCheckProgress(43);
    IopDumpCallRemovePagesCallbacks(v12);
    IoSaveBugCheckProgress(34);
    LODWORD(v11) = v46;
    *(_QWORD *)(v34 + 40) = RtlNumberOfSetBitsEx(&v48);
    goto LABEL_54;
  }
  v13 = IopCollectTriageDumpData(v12, v11, a3, a4, a5, (__int64)a6, a7, v42);
  if ( v13 >= 0 )
    goto LABEL_41;
  return v9;
}
