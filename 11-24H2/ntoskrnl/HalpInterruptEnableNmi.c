/*
 * XREFs of HalpInterruptEnableNmi @ 0x1404A356C
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B4D2D0 (HalpInterruptInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x140B4F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x1403B9678 (HalpInterruptGsiToLine.c)
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptDestinationToTarget @ 0x1403BAD88 (HalpInterruptDestinationToTarget.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1403BAEFC (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x140541328 (HalpInterruptSetRemappedLineStateInternal.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     HalpHvMapIoApicDeviceInterrupt @ 0x140B4C838 (HalpHvMapIoApicDeviceInterrupt.c)
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
  _QWORD *Lines; // rax
  __int64 v21; // rcx
  ULONG_PTR *v22; // rsi
  int v23; // eax
  __int64 v24; // r9
  int v25; // eax
  int v26; // edx
  unsigned int BugCheckParameter4; // [rsp+28h] [rbp-79h]
  char v28; // [rsp+40h] [rbp-61h]
  unsigned __int64 v29; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-51h]
  __int128 v31; // [rsp+58h] [rbp-49h] BYREF
  __int128 *v32; // [rsp+68h] [rbp-39h]
  __int128 v33; // [rsp+70h] [rbp-31h] BYREF
  __int128 v34; // [rsp+80h] [rbp-21h] BYREF
  __int128 v35; // [rsp+90h] [rbp-11h]
  __int64 v36; // [rsp+A0h] [rbp-1h]
  __int128 v37; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v38; // [rsp+B8h] [rbp+17h] BYREF

  v31 = 0LL;
  LODWORD(v32) = 0;
  v38 = 0LL;
  v29 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v30 = 0;
  v35 = 0LL;
  v37 = 0LL;
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
    v33 = 0LL;
    v36 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v37 = 0LL;
    v11 = *(_DWORD *)(j + 16);
    v12 = v11 & 0xC;
    if ( *(_BYTE *)(j + 8) )
    {
      v13 = DWORD2(v33);
      v14 = 0;
      if ( v12 != 12 )
        v13 = 1;
      DWORD2(v33) = v13;
      LOBYTE(v14) = (*(_BYTE *)(j + 16) & 3) == 3;
      v15 = v14 + 1;
    }
    else
    {
      if ( v12 == 4 || (v11 & 0xC) == 0 )
        DWORD2(v33) = 1;
      if ( (*(_DWORD *)(j + 16) & 3) == 0 || (v15 = 2, (*(_DWORD *)(j + 16) & 3) == 1) )
        v15 = 1;
    }
    *(_QWORD *)&v34 = 0x2FFFFFFFFLL;
    LODWORD(v33) = v15;
    LODWORD(v37) = v37 & 0x80000000 | 0x40000002;
    v32 = &v37;
    v31 = 0uLL;
    HIDWORD(v33) = 16;
    if ( !v9 )
      break;
    LODWORD(v31) = 5;
    v16 = *(_DWORD *)(HalpInterruptController + 256);
    HIDWORD(v29) = *(_DWORD *)(j + 20);
    LODWORD(v29) = v16;
LABEL_50:
    v7 = HalpInterruptSetLineState(&v29, 0, 15, SDWORD2(v33), v15, (__int64)&v31, (__int64)&v34, v28);
    if ( v7 < 0 )
      goto LABEL_7;
LABEL_34:
    ;
  }
  v17 = HalpInterruptGsiToLine(*(unsigned int *)(j + 20), &v29);
  if ( v17 < 0 )
  {
    HalpInterruptSetProblemEx(0LL, 18, v17, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x645u);
    goto LABEL_34;
  }
  if ( HalpInterruptPhysicalModeOnly )
  {
    LODWORD(v31) = 3;
  }
  else
  {
    v38 = 0LL;
    Number = CurrentPrcb->Number;
    LODWORD(v31) = 1;
    v19 = 0LL;
    _bittestandset64(&v19, *((_DWORD *)KiGlobalState + Number) & 0x3F);
    *(_QWORD *)&v38 = v19;
    *((_QWORD *)&v31 + 1) = &v38;
  }
  Lines = HalpInterruptFindLines((unsigned int *)&v29);
  if ( Lines )
  {
    if ( !*(_BYTE *)(Lines[6] + 16LL * v30 + 12) )
    {
      v22 = HalpInterruptLookupController(v29);
      if ( !v22 )
      {
        BugCheckParameter4 = 1644;
        v26 = 17;
        goto LABEL_55;
      }
      v23 = HalpInterruptDestinationToTarget(v21, (__int64)&v31, (_DWORD *)&v34 + 2);
      if ( v23 < 0 )
      {
        HalpInterruptSetProblemEx(
          (__int64)v22,
          19,
          v23,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
          0x681u);
        goto LABEL_56;
      }
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && KeGetCurrentPrcb()->CpuVendor != 1 )
      {
        HalpIommuUpdateRemappingTableEntry(0, v37 & 0x3FFFFFFF, (__int64)&v33, v24);
        DWORD2(v34) = 7;
        LODWORD(v35) = v37 & 0x3FFFFFFF;
      }
      if ( qword_140FC0EE8 )
      {
        v25 = HalpHvMapIoApicDeviceInterrupt(*((unsigned int *)v22 + 64), &v33, 0LL);
        v7 = v25;
        if ( v25 < 0 )
        {
          HalpInterruptSetProblemEx(
            (__int64)v22,
            31,
            v25,
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            0x6B4u);
          goto LABEL_7;
        }
      }
      HIDWORD(v33) &= ~0x10u;
      v7 = HalpInterruptSetRemappedLineStateInternal(v22, &v29, &v33);
      if ( v7 < 0 )
        goto LABEL_7;
      v15 = v33;
    }
    goto LABEL_50;
  }
  BugCheckParameter4 = 1628;
  v26 = 18;
LABEL_55:
  HalpInterruptSetProblemEx(
    0LL,
    v26,
    0,
    (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
    BugCheckParameter4);
LABEL_56:
  v7 = -1073741275;
LABEL_7:
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v2);
  return (unsigned int)v7;
}
