/*
 * XREFs of IoWriteCrashDump @ 0x14058EFA4
 * Callers:
 *     IoRetryAsMiniDump @ 0x14058E570 (IoRetryAsMiniDump.c)
 *     KiBugCheckWriteCrashDump @ 0x1405AF768 (KiBugCheckWriteCrashDump.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140275528 (KdCheckForDebugBreak.c)
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     IoSaveBugCheckProgress @ 0x14058E6E0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x14058EA90 (IoSetBugCheckProgressFlag.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x14058ECAC (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopCollectTriageDumpData @ 0x14059000C (IopCollectTriageDumpData.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1405902B4 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405903FC (IopDumpCallRemovePagesCallbacks.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14059204C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x140592224 (IopWriteTriageDumpToFirmware.c)
 *     IoAddPagesForPartialKernelDump @ 0x14059C76C (IoAddPagesForPartialKernelDump.c)
 *     MmGetDumpRange @ 0x14066C1F8 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x14066C5B8 (MmSnapTriageDumpInformation.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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
  __int64 v16; // rcx
  char v17; // cl
  int v18; // eax
  char v19; // r13
  __int64 v20; // rdx
  int v21; // esi
  int v22; // r8d
  __int64 v23; // r11
  __int64 v24; // r9
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  void *v31; // rcx
  int v32; // edx
  __int64 v33; // rsi
  unsigned int v34; // r14d
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ebx
  char v40; // [rsp+50h] [rbp-91h]
  unsigned int v41; // [rsp+54h] [rbp-8Dh]
  int v44; // [rsp+78h] [rbp-69h]
  _QWORD v45[6]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-29h]
  __int64 v48; // [rsp+C0h] [rbp-21h]
  __int64 v49; // [rsp+C8h] [rbp-19h]

  v9 = 0;
  v11 = a2;
  v40 = a8 == 0;
  v12 = a1;
  v44 = a2;
  v13 = 0;
  v41 = 0;
  KdCheckForDebugBreak(a1, a2, a3);
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(v12, v11, a3, a4, a5, (__int64)a6, a7);
  if ( DWORD1(xmmword_140E65E08) && !byte_140E65E04 )
  {
    IoSetBugCheckProgressFlag(0x400000);
    return 0;
  }
  v48 = a4;
  v49 = a5;
  v46 = v11;
  v47 = a3;
  MmSnapTriageDumpInformation(a6, &v46);
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
  guard_dispatch_icall_no_overrides(1LL);
  v16 = CrashdmpDumpBlock;
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0 || (v17 = 1, *(_DWORD *)(CrashdmpDumpBlock + 1336) != 5) )
    v17 = 0;
  if ( VslVsmEnabled )
  {
    v18 = 2 * HvlpForceAllPages;
    HvlpForceAllPages *= 2;
    if ( v17 )
      HvlpForceAllPages = v18 | 1;
  }
  LOBYTE(v16) = 1;
  ViVerifyDma = 0;
  v19 = guard_dispatch_icall_no_overrides(v16);
  IoSaveBugCheckProgress(32);
  v20 = 9LL;
  v21 = a3;
  v22 = a4;
  v23 = a5;
  v24 = (__int64)a6;
  *(_DWORD *)(CrashdmpDumpBlock + 24) = v12;
  v25 = a6;
  *(_QWORD *)(CrashdmpDumpBlock + 32) = v11;
  *(_QWORD *)(CrashdmpDumpBlock + 40) = a3;
  *(_QWORD *)(CrashdmpDumpBlock + 48) = a4;
  *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
  v26 = (_OWORD *)(CrashdmpDumpBlock + 64);
  do
  {
    *v26 = *v25;
    v26[1] = v25[1];
    v26[2] = v25[2];
    v26[3] = v25[3];
    v26[4] = v25[4];
    v26[5] = v25[5];
    v26[6] = v25[6];
    v26 += 8;
    v27 = v25[7];
    v25 += 8;
    *(v26 - 1) = v27;
    --v20;
  }
  while ( v20 );
  *v26 = *v25;
  v26[1] = v25[1];
  v26[2] = v25[2];
  v26[3] = v25[3];
  v26[4] = v25[4];
  *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
  *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
  *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
  *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1416) = &KeBugCheckTriageDumpDataArrayListHead;
  *(_BYTE *)(CrashdmpDumpBlock + 1432) = 4;
  if ( a8 )
    v28 = *(_QWORD *)(*(_QWORD *)(a7 + 184) + 40LL);
  else
    v28 = __readcr3();
  *(_QWORD *)(CrashdmpDumpBlock + 1344) = v28 & 0xFFFFFFFFFFFFF000uLL;
  v29 = *(_QWORD *)(CrashdmpDumpBlock + 1328);
  if ( v29 )
    goto LABEL_30;
  if ( v19 == 1 )
  {
    if ( a8 )
      goto LABEL_42;
LABEL_30:
    if ( v19 == 1 )
      goto LABEL_33;
  }
  v30 = *(_QWORD *)(CrashdmpDumpBlock + 1360);
  if ( v30 )
  {
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = v30 + 12316;
    *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    goto LABEL_36;
  }
LABEL_33:
  if ( !v29 && !a8 )
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
LABEL_36:
  v31 = *(void **)(CrashdmpDumpBlock + 1328);
  if ( IoPreparedTriageDumpData )
  {
    if ( IoPreparedTriageDumpData != v31 )
    {
      memmove(v31, IoPreparedTriageDumpData, *((unsigned int *)IoPreparedTriageDumpData + 1));
LABEL_41:
      v23 = a5;
      v24 = (__int64)a6;
      v22 = a4;
    }
LABEL_42:
    v32 = *(_DWORD *)(CrashdmpDumpBlock + 1368) & 2;
    if ( v32 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 4u;
      v13 = IoAddPagesForPartialKernelDump(v12, v11, a3, v22, v23, v24, a7);
      goto LABEL_55;
    }
    v33 = *(_QWORD *)(CrashdmpDumpBlock + 8);
    if ( !v33 )
    {
LABEL_54:
      v21 = a3;
LABEL_55:
      if ( v13 >= 0 )
        v13 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock);
      if ( v13 != -1073741267 )
        goto LABEL_65;
      if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
      {
        IoSaveBugCheckProgress(39);
        *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 8u;
        v13 = IoAddPagesForPartialKernelDump(v12, v11, v21, a4, a5, (__int64)a6, a7);
        if ( v13 < 0 )
          goto LABEL_65;
        v36 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock);
        v37 = 38;
      }
      else
      {
        if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) )
          goto LABEL_65;
        IoSetBugCheckProgressFlag(1024);
        IoPreparedTriageDumpData = 0LL;
        v13 = IopCollectTriageDumpData(v12, v11, v21, a4, a5, (__int64)a6, a7, v40);
        if ( v13 < 0 )
          goto LABEL_65;
        v36 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock);
        v37 = 35;
      }
      v13 = v36;
      IoSaveBugCheckProgress(v37);
LABEL_65:
      if ( (DumpPolicyAttemptOffline & 1) != 0 && v13 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v19 )
      {
        IoSaveBugCheckProgress(36);
        if ( (int)guard_dispatch_icall_no_overrides(0LL) >= 0 )
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
        if ( v19 == 1 || !*(_QWORD *)(CrashdmpDumpBlock + 1360) )
          return 1;
        v38 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
        if ( (v38 & 0x860000) == 0 )
          *(_DWORD *)(CrashdmpDumpBlock + 1404) = v38 & 0xFFFFFE00 | 0x25;
        *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x800u;
        IoUpdateBugCheckProgressEnvVariable();
        v39 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
        IoSetBugCheckProgressFlag(0x10000000);
        if ( v39 >= 0 )
          return 1;
      }
      return v9;
    }
    v45[5] = 0LL;
    v34 = 1;
    v46 = *(_QWORD *)(v33 + 48);
    v47 = v33 + 56;
    v45[2] = &v46;
    v45[0] = IoSetDumpRange;
    v45[1] = IoFreeDumpRange;
    v45[3] = v33;
    v45[4] = 0LL;
    v35 = *(_DWORD *)(CrashdmpDumpBlock + 1336);
    if ( v35 == 6 )
    {
      v41 = a9 != 0;
    }
    else
    {
      if ( v35 != 5 || !v32 )
        goto LABEL_53;
      v41 = 2;
    }
    v34 = 0;
LABEL_53:
    IopDumpCallAddPagesCallbacks(v12);
    IoSaveBugCheckProgress(33);
    MmGetDumpRange(v45, v34, v41);
    IoSaveBugCheckProgress(43);
    IopDumpCallRemovePagesCallbacks(v12);
    IoSaveBugCheckProgress(34);
    LODWORD(v11) = v44;
    *(_QWORD *)(v33 + 40) = RtlNumberOfSetBitsEx(&v46);
    goto LABEL_54;
  }
  v13 = IopCollectTriageDumpData(v12, v11, a3, a4, a5, (__int64)a6, a7, v40);
  if ( v13 >= 0 )
    goto LABEL_41;
  return v9;
}
