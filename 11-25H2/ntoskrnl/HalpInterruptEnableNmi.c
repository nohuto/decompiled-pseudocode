/*
 * XREFs of HalpInterruptEnableNmi @ 0x140443DC4
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B3D2D0 (HalpInterruptInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x140B3F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B58A3C (HalpPostSleepMP.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetLineState @ 0x140443F50 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptGsiToLine @ 0x140445508 (HalpInterruptGsiToLine.c)
 *     HalpInterruptFindLines @ 0x140445644 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptDestinationToTarget @ 0x140446BF8 (HalpInterruptDestinationToTarget.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x140446D6C (HalpIommuUpdateRemappingTableEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14053EAF8 (HalpInterruptSetRemappedLineStateInternal.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     HalpHvMapIoApicDeviceInterrupt @ 0x140B3C838 (HalpHvMapIoApicDeviceInterrupt.c)
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
  __int64 Lines; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int BugCheckParameter4; // [rsp+28h] [rbp-79h]
  __int64 v27; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-51h] BYREF
  __int128 v29; // [rsp+58h] [rbp-49h] BYREF
  __int128 *v30; // [rsp+68h] [rbp-39h]
  __int128 v31; // [rsp+70h] [rbp-31h] BYREF
  __int128 v32; // [rsp+80h] [rbp-21h] BYREF
  __int128 v33; // [rsp+90h] [rbp-11h]
  __int64 v34; // [rsp+A0h] [rbp-1h]
  __int128 v35; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v36; // [rsp+B8h] [rbp+17h] BYREF

  v29 = 0LL;
  LODWORD(v30) = 0;
  v36 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v28 = 0;
  v33 = 0LL;
  v35 = 0LL;
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
    v31 = 0LL;
    v34 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v35 = 0LL;
    v11 = *(_DWORD *)(j + 16);
    v12 = v11 & 0xC;
    if ( *(_BYTE *)(j + 8) )
    {
      v13 = DWORD2(v31);
      v14 = 0;
      if ( v12 != 12 )
        v13 = 1;
      DWORD2(v31) = v13;
      LOBYTE(v14) = (*(_BYTE *)(j + 16) & 3) == 3;
      v15 = v14 + 1;
    }
    else
    {
      if ( v12 == 4 || (v11 & 0xC) == 0 )
        DWORD2(v31) = 1;
      if ( (*(_DWORD *)(j + 16) & 3) == 0 || (v15 = 2, (*(_DWORD *)(j + 16) & 3) == 1) )
        v15 = 1;
    }
    *(_QWORD *)&v32 = 0x2FFFFFFFFLL;
    LODWORD(v31) = v15;
    LODWORD(v35) = v35 & 0x80000000 | 0x40000002;
    v30 = &v35;
    v29 = 0uLL;
    HIDWORD(v31) = 16;
    if ( !v9 )
      break;
    LODWORD(v29) = 5;
    v16 = *(_DWORD *)(HalpInterruptController + 256);
    HIDWORD(v27) = *(_DWORD *)(j + 20);
    LODWORD(v27) = v16;
LABEL_50:
    LOBYTE(v3) = 15;
    v7 = HalpInterruptSetLineState((unsigned int)&v27, 0, v3, DWORD2(v31), v15, (__int64)&v29, (__int64)&v32);
    if ( v7 < 0 )
      goto LABEL_7;
LABEL_34:
    ;
  }
  v17 = HalpInterruptGsiToLine(*(unsigned int *)(j + 20), &v27);
  if ( v17 < 0 )
  {
    HalpInterruptSetProblemEx(0, 18, v17, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1605);
    goto LABEL_34;
  }
  if ( HalpInterruptPhysicalModeOnly )
  {
    LODWORD(v29) = 3;
  }
  else
  {
    v36 = 0LL;
    Number = CurrentPrcb->Number;
    LODWORD(v29) = 1;
    v19 = 0LL;
    _bittestandset64(&v19, *((_DWORD *)KiGlobalState + Number) & 0x3F);
    *(_QWORD *)&v36 = v19;
    *((_QWORD *)&v29 + 1) = &v36;
  }
  Lines = HalpInterruptFindLines(&v27, &v28);
  if ( Lines )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(Lines + 48) + 16LL * v28 + 12) )
    {
      v22 = HalpInterruptLookupController((unsigned int)v27);
      if ( !v22 )
      {
        BugCheckParameter4 = 1644;
        v25 = 17;
        goto LABEL_55;
      }
      v23 = HalpInterruptDestinationToTarget(v21, &v29, (char *)&v32 + 8);
      if ( v23 < 0 )
      {
        HalpInterruptSetProblemEx(
          v22,
          19,
          v23,
          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
          1665);
        goto LABEL_56;
      }
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && KeGetCurrentPrcb()->CpuVendor != 1 )
      {
        HalpIommuUpdateRemappingTableEntry(0LL, v35 & 0x3FFFFFFF, &v31);
        DWORD2(v32) = 7;
        LODWORD(v33) = v35 & 0x3FFFFFFF;
      }
      if ( qword_140FC0748 )
      {
        v24 = HalpHvMapIoApicDeviceInterrupt(*(unsigned int *)(v22 + 256), &v31, 0LL);
        v7 = v24;
        if ( v24 < 0 )
        {
          HalpInterruptSetProblemEx(
            v22,
            31,
            v24,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            1716);
          goto LABEL_7;
        }
      }
      HIDWORD(v31) &= ~0x10u;
      v7 = HalpInterruptSetRemappedLineStateInternal(v22, &v27, &v31);
      if ( v7 < 0 )
        goto LABEL_7;
      v15 = v31;
    }
    goto LABEL_50;
  }
  BugCheckParameter4 = 1628;
  v25 = 18;
LABEL_55:
  HalpInterruptSetProblemEx(
    0,
    v25,
    0,
    (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
    BugCheckParameter4);
LABEL_56:
  v7 = -1073741275;
LABEL_7:
  HalpReleaseHighLevelLock((__int64)&HalpInterruptLock, v2);
  return (unsigned int)v7;
}
