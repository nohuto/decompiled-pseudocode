/*
 * XREFs of HalpInterruptEnableNmi @ 0x14049E4CC
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B4F310 (HalpInterruptInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x140B51A3C (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpInterruptDestinationToTarget @ 0x140370DAC (HalpInterruptDestinationToTarget.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindLines @ 0x140373298 (HalpInterruptFindLines.c)
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1403746F4 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14053EC28 (HalpInterruptSetRemappedLineStateInternal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpHvMapIoApicDeviceInterrupt @ 0x140B4E878 (HalpHvMapIoApicDeviceInterrupt.c)
 */

__int64 HalpInterruptEnableNmi()
{
  unsigned __int8 v0; // al
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int8 v2; // r12
  unsigned int v3; // r8d
  ULONG_PTR v4; // r14
  unsigned int i; // ecx
  __int64 j; // rdi
  int v7; // ebx
  char v9; // dl
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebx
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  __int64 Number; // rcx
  __int64 v19; // rax
  ULONG_PTR *Lines; // rax
  __int64 v21; // rcx
  ULONG_PTR *v22; // rsi
  int v23; // eax
  int v24; // eax
  int v25; // edx
  unsigned int BugCheckParameter4; // [rsp+28h] [rbp-79h]
  char v27; // [rsp+40h] [rbp-61h]
  unsigned __int64 v28; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-51h]
  __int128 v30; // [rsp+58h] [rbp-49h] BYREF
  __int128 *v31; // [rsp+68h] [rbp-39h]
  __int128 v32; // [rsp+70h] [rbp-31h] BYREF
  __int128 v33; // [rsp+80h] [rbp-21h] BYREF
  __int128 v34; // [rsp+90h] [rbp-11h]
  __int64 v35; // [rsp+A0h] [rbp-1h]
  __int128 v36; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v37; // [rsp+B8h] [rbp+17h] BYREF

  v30 = 0LL;
  LODWORD(v31) = 0;
  v37 = 0LL;
  v28 = 0LL;
  v32 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v29 = 0;
  v34 = 0LL;
  v36 = 0LL;
  v0 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = v0;
  v3 = HalpInterruptProcessorCount;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)HalpInterruptProcessorCount; ++i )
  {
    v4 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
    if ( *(_WORD *)(v4 + 16) == CurrentPrcb->Group && *(_BYTE *)(v4 + 18) == CurrentPrcb->GroupIndex )
    {
      v3 = i;
      break;
    }
  }
  if ( v3 == (_DWORD)HalpInterruptProcessorCount )
    KeBugCheckEx(
      0x5Cu,
      0x104uLL,
      CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8),
      (unsigned int)HalpInterruptProcessorCount,
      0LL);
  for ( j = HalpInterruptNmiSources; ; j = *(_QWORD *)j )
  {
    if ( !j )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v9 = 0;
    if ( *(_BYTE *)(j + 8) )
    {
      if ( !*(_BYTE *)(v4 + 13) )
        continue;
      v10 = *(_DWORD *)(j + 12);
      if ( v10 != -1 && v10 != *(_DWORD *)(v4 + 4) )
        continue;
      v9 = 1;
    }
    else if ( CurrentPrcb->Number )
    {
      continue;
    }
    v32 = 0LL;
    v35 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v36 = 0LL;
    v11 = *(_DWORD *)(j + 16);
    v12 = v11 & 0xC;
    if ( *(_BYTE *)(j + 8) )
    {
      v13 = DWORD2(v32);
      v14 = 0;
      if ( v12 != 12 )
        v13 = 1;
      DWORD2(v32) = v13;
      LOBYTE(v14) = (*(_BYTE *)(j + 16) & 3) == 3;
      v15 = v14 + 1;
    }
    else
    {
      if ( v12 == 4 || (v11 & 0xC) == 0 )
        DWORD2(v32) = 1;
      if ( (*(_DWORD *)(j + 16) & 3) == 0 || (v15 = 2, (*(_DWORD *)(j + 16) & 3) == 1) )
        v15 = 1;
    }
    *(_QWORD *)&v33 = 0x2FFFFFFFFLL;
    LODWORD(v32) = v15;
    LODWORD(v36) = v36 & 0x80000000 | 0x40000002;
    v31 = &v36;
    v30 = 0uLL;
    HIDWORD(v32) = 16;
    if ( !v9 )
      break;
    LODWORD(v30) = 5;
    v16 = *(_DWORD *)(HalpInterruptController + 256);
    HIDWORD(v28) = *(_DWORD *)(j + 20);
    LODWORD(v28) = v16;
LABEL_50:
    v7 = HalpInterruptSetLineState(&v28, 0, 15, SDWORD2(v32), v15, (__int64)&v30, (__int64)&v33, v27);
    if ( v7 < 0 )
      goto LABEL_7;
LABEL_34:
    ;
  }
  v17 = HalpInterruptGsiToLine(*(_DWORD *)(j + 20), &v28);
  if ( v17 < 0 )
  {
    HalpInterruptSetProblemEx(0LL, 18, v17, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x648u);
    goto LABEL_34;
  }
  if ( HalpInterruptPhysicalModeOnly )
  {
    LODWORD(v30) = 3;
  }
  else
  {
    v37 = 0LL;
    Number = CurrentPrcb->Number;
    LODWORD(v30) = 1;
    v19 = 0LL;
    _bittestandset64(&v19, *((_DWORD *)KiGlobalState + Number) & 0x3F);
    *(_QWORD *)&v37 = v19;
    *((_QWORD *)&v30 + 1) = &v37;
  }
  Lines = HalpInterruptFindLines((int *)&v28);
  if ( Lines )
  {
    if ( !*(_BYTE *)(Lines[6] + 16LL * v29 + 12) )
    {
      v22 = HalpInterruptLookupController(v28);
      if ( !v22 )
      {
        BugCheckParameter4 = 1647;
        v25 = 17;
        goto LABEL_55;
      }
      v23 = HalpInterruptDestinationToTarget(v21, (__int64)&v30, (_DWORD *)&v33 + 2);
      if ( v23 < 0 )
      {
        HalpInterruptSetProblemEx(
          (__int64)v22,
          19,
          v23,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
          0x684u);
        goto LABEL_56;
      }
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && KeGetCurrentPrcb()->CpuVendor != 1 )
      {
        HalpIommuUpdateRemappingTableEntry(0, v36 & 0x3FFFFFFF);
        DWORD2(v33) = 7;
        LODWORD(v34) = v36 & 0x3FFFFFFF;
      }
      if ( qword_140FC1148 )
      {
        v24 = HalpHvMapIoApicDeviceInterrupt(*((unsigned int *)v22 + 64), &v32, 0LL);
        v7 = v24;
        if ( v24 < 0 )
        {
          HalpInterruptSetProblemEx(
            (__int64)v22,
            31,
            v24,
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            0x6B7u);
          goto LABEL_7;
        }
      }
      HIDWORD(v32) &= ~0x10u;
      v7 = HalpInterruptSetRemappedLineStateInternal(v22, &v28, &v32);
      if ( v7 < 0 )
        goto LABEL_7;
      v15 = v32;
    }
    goto LABEL_50;
  }
  BugCheckParameter4 = 1631;
  v25 = 18;
LABEL_55:
  HalpInterruptSetProblemEx(
    0LL,
    v25,
    0,
    (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
    BugCheckParameter4);
LABEL_56:
  v7 = -1073741275;
LABEL_7:
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v2);
  return (unsigned int)v7;
}
