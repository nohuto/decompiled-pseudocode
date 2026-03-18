/*
 * XREFs of HalpInterruptSetLineState @ 0x140443F50
 * Callers:
 *     HalEnableInterrupt @ 0x140201940 (HalEnableInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404CD4C8 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptFindBestRouting @ 0x14044478C (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140445AEC (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140445BA4 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGetPriority @ 0x140446738 (HalpInterruptGetPriority.c)
 *     HalpInterruptDestinationToTarget @ 0x140446BF8 (HalpInterruptDestinationToTarget.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptSetLineState(
        unsigned __int64 *a1,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  int v8; // r14d
  char v9; // r15
  char v10; // bl
  unsigned __int8 v11; // al
  __int64 *v12; // r8
  __int64 *v13; // rdx
  unsigned int v14; // edi
  signed int v15; // ebx
  unsigned int v16; // esi
  _DWORD *LinesForGsiRange; // rax
  ULONG_PTR v18; // rax
  __int64 v19; // rcx
  ULONG_PTR v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  signed int v25; // edx
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r12
  __int128 v29; // xmm10
  __int64 v30; // r13
  ULONG_PTR v31; // rbx
  bool v32; // zf
  __int64 v33; // xmm0_8
  __int128 v34; // xmm6
  __int128 v35; // xmm7
  __int128 v36; // xmm8
  __int64 v37; // xmm9_8
  _DWORD *v38; // r15
  int v39; // r8d
  int v41; // r8d
  int BestRouting; // eax
  unsigned int v43; // r9d
  int Priority; // eax
  char v45; // cl
  unsigned __int8 v46; // r9
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  ULONG_PTR BugCheckParameter4; // r10
  signed __int32 v50[8]; // [rsp+8h] [rbp-C1h] BYREF
  __int128 v51; // [rsp+38h] [rbp-91h]
  __int128 v52; // [rsp+48h] [rbp-81h]
  __int128 v53; // [rsp+58h] [rbp-71h]
  __int64 v54; // [rsp+68h] [rbp-61h]
  unsigned __int64 v55; // [rsp+118h] [rbp+4Fh] BYREF
  unsigned int v56; // [rsp+120h] [rbp+57h]
  char v57; // [rsp+128h] [rbp+5Fh]
  int v58; // [rsp+130h] [rbp+67h]

  v58 = a4;
  v57 = a3;
  v56 = a2;
  v8 = a5;
  if ( a5 == 3 )
  {
    v9 = 1;
    v8 = 2;
  }
  else if ( a5 == 4 )
  {
    v9 = 1;
    v8 = 1;
  }
  else
  {
    v9 = 0;
  }
  v10 = 0;
  v55 = *a1;
  a8 = v9;
  v11 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v12 = (__int64 *)HalpInterruptOverrides;
  while ( v12 != &HalpInterruptOverrides )
  {
    v13 = v12;
    v12 = (__int64 *)*v12;
    if ( v13[2] == v55 )
    {
      v10 = 1;
      v55 = v13[3];
      v8 = *((_DWORD *)v13 + 9);
      v58 = *((_DWORD *)v13 + 8);
      break;
    }
  }
  HalpReleaseHighLevelLock((__int64)&HalpInterruptOverridesLock, v11);
  if ( v10 || *(_DWORD *)(HalpInterruptController + 240) != 2 )
    goto LABEL_46;
  v14 = v55;
  v15 = HIDWORD(v55);
  if ( (unsigned int)(v55 - 45056) <= 1 )
  {
    v16 = HIDWORD(v55);
    if ( (_DWORD)v55 == 45057 )
      v16 = HIDWORD(v55) + 8;
    LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v16, v16 + 1);
    if ( LinesForGsiRange )
    {
      v15 = v16 + LinesForGsiRange[5] - LinesForGsiRange[7];
      v14 = LinesForGsiRange[4];
      v55 = __PAIR64__(v15, v14);
    }
  }
  while ( 1 )
  {
    v18 = HalpInterruptLookupController(v14);
    v20 = v18;
    if ( !v18 )
      break;
    if ( (*(_DWORD *)(v18 + 248) & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v18, 0x7931847uLL);
    v21 = HalpInterruptLookupController(v19);
    if ( !v21 )
    {
LABEL_38:
      HalpInterruptSetProblemEx(v20, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2240);
      return (unsigned int)-1073741275;
    }
    v22 = (_QWORD *)(v21 + 264);
    v23 = *(_QWORD **)(v21 + 264);
    do
    {
      if ( v23 == v22 )
        goto LABEL_38;
      v24 = v23;
      v23 = (_QWORD *)*v23;
      v25 = *((_DWORD *)v24 + 5);
    }
    while ( v25 > v15 || *((_DWORD *)v24 + 6) <= v15 );
    v26 = v15 - v25;
    if ( !v24 )
      goto LABEL_38;
    v27 = v24[6];
    v28 = 2LL * v26;
    if ( *(_BYTE *)(v27 + 16LL * v26) )
    {
      HalpInterruptSetProblemEx(v20, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2253);
      return (unsigned int)-1073741811;
    }
    v29 = *(_OWORD *)(v27 + 16LL * v26);
    v30 = 56LL * v26;
    v31 = v30 + v24[5];
    v32 = *(_BYTE *)(v27 + 8 * v28 + 12) == 0;
    v33 = *(_QWORD *)(v31 + 48);
    v34 = *(_OWORD *)v31;
    v35 = *(_OWORD *)(v31 + 16);
    v36 = *(_OWORD *)(v31 + 32);
    v51 = *(_OWORD *)v31;
    v52 = v35;
    v53 = v36;
    v37 = v33;
    v54 = v33;
    if ( v32 )
    {
      v41 = HalpInterruptDestinationToTarget(v27, a6, v31 + 24);
      if ( v41 < 0 )
      {
        HalpInterruptSetProblemEx(
          v20,
          22,
          v41,
          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
          2330);
        goto LABEL_49;
      }
      v38 = (_DWORD *)(v31 + 16);
      BestRouting = HalpInterruptFindBestRouting(&v55, *(_QWORD *)a7, v31 + 16);
      v39 = BestRouting;
      if ( BestRouting < 0 )
        goto LABEL_49;
      v43 = v56;
      *(_BYTE *)(v31 + 4) = a8;
      *(_DWORD *)(v31 + 8) = v58;
      *(_DWORD *)v31 = v8;
      *(_DWORD *)(v31 + 12) = 16;
      *(_DWORD *)(v31 + 48) = v43;
      Priority = HalpInterruptGetPriority(v20, v43, (unsigned int)BestRouting);
      v45 = v57;
      *(_DWORD *)(v31 + 52) = Priority;
      *((_BYTE *)&HalpHwToSwIrqlMap + ((unsigned __int64)v46 >> 4)) = v45;
    }
    else
    {
      if ( !HalpHvPresent
        && (*(_DWORD *)(v31 + 48) != v56
         || *(_DWORD *)(v31 + 8) != v58
         || *(_DWORD *)v31 != v8
         || *(_BYTE *)(v31 + 4) != v9) )
      {
        HalpInterruptSetProblemEx(v20, 32, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2295);
        KeBugCheckEx(0x5Cu, 0x202uLL, v31, *(unsigned int *)(v31 + 48), BugCheckParameter4);
      }
      *(_DWORD *)(v31 + 12) |= 0x10u;
      v38 = (_DWORD *)(v31 + 16);
    }
    _InterlockedOr(v50, 0);
    v39 = HalpInterruptSetLineStateInternal(v20, &v55, v31);
    if ( v39 < 0 )
    {
      v37 = v54;
      v36 = v53;
      v35 = v52;
      v34 = v51;
LABEL_49:
      v48 = v24[5];
      *(_OWORD *)(v48 + v30) = v34;
      *(_OWORD *)(v48 + v30 + 16) = v35;
      *(_OWORD *)(v48 + v30 + 32) = v36;
      *(_QWORD *)(v48 + v30 + 48) = v37;
      *(_OWORD *)(v24[6] + 8 * v28) = v29;
      return (unsigned int)v39;
    }
    if ( *(_DWORD *)(v31 + 20) == *(_DWORD *)(a7 + 4) && *v38 == *(_DWORD *)a7 )
      return 0;
    v47 = *(_QWORD *)v38;
    v9 = a8;
    v55 = v47;
LABEL_46:
    v14 = v55;
    v15 = HIDWORD(v55);
  }
  HalpInterruptLastProblemController = 0LL;
  HalpInterruptLastProblemStatus = 0;
  HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
  HalpInterruptLastProblem = 17;
  HalpInterruptLastProblemLine = 2216;
  return (unsigned int)-1073741275;
}
