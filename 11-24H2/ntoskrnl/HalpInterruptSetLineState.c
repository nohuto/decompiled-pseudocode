/*
 * XREFs of HalpInterruptSetLineState @ 0x1403BBB90
 * Callers:
 *     HalEnableInterrupt @ 0x1403B7D10 (HalEnableInterrupt.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B90F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x1404A356C (HalpInterruptEnableNmi.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404CD038 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGetPriority @ 0x1403BA8C8 (HalpInterruptGetPriority.c)
 *     HalpInterruptDestinationToTarget @ 0x1403BAD88 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptFindBestRouting @ 0x1403BB29C (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptSetLineState(
        unsigned __int64 *a1,
        int a2,
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
  int v14; // edi
  signed int v15; // ebx
  unsigned int v16; // esi
  _DWORD *LinesForGsiRange; // rax
  ULONG_PTR *v18; // rax
  int v19; // ecx
  __int64 v20; // rsi
  ULONG_PTR *v21; // rax
  __int64 v22; // r9
  ULONG_PTR *v23; // rcx
  ULONG_PTR *v24; // rax
  ULONG_PTR *v25; // rdi
  signed int v26; // edx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r12
  __int128 v30; // xmm10
  __int64 v31; // r13
  ULONG_PTR v32; // rbx
  bool v33; // zf
  __int64 v34; // xmm0_8
  __int128 v35; // xmm6
  __int128 v36; // xmm7
  __int128 v37; // xmm8
  __int64 v38; // xmm9_8
  _DWORD *v39; // r15
  int BestRouting; // r8d
  int v42; // r8d
  int v43; // r9d
  int Priority; // eax
  char v45; // cl
  unsigned __int64 v46; // rax
  ULONG_PTR v47; // rax
  ULONG_PTR BugCheckParameter4; // r10
  signed __int32 v49[8]; // [rsp+8h] [rbp-C1h] BYREF
  __int128 v50; // [rsp+38h] [rbp-91h]
  __int128 v51; // [rsp+48h] [rbp-81h]
  __int128 v52; // [rsp+58h] [rbp-71h]
  __int64 v53; // [rsp+68h] [rbp-61h]
  unsigned __int64 v54; // [rsp+118h] [rbp+4Fh] BYREF
  int v55; // [rsp+120h] [rbp+57h]
  char v56; // [rsp+128h] [rbp+5Fh]
  int v57; // [rsp+130h] [rbp+67h]

  v57 = a4;
  v56 = a3;
  v55 = a2;
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
  v54 = *a1;
  a8 = v9;
  v11 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v12 = (__int64 *)HalpInterruptOverrides;
  while ( v12 != &HalpInterruptOverrides )
  {
    v13 = v12;
    v12 = (__int64 *)*v12;
    if ( v13[2] == v54 )
    {
      v10 = 1;
      v54 = v13[3];
      v8 = *((_DWORD *)v13 + 9);
      v57 = *((_DWORD *)v13 + 8);
      break;
    }
  }
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptOverridesLock, v11);
  if ( v10 || *(_DWORD *)(HalpInterruptController + 240) != 2 )
    goto LABEL_46;
  v14 = v54;
  v15 = HIDWORD(v54);
  if ( (unsigned int)(v54 - 45056) <= 1 )
  {
    v16 = HIDWORD(v54);
    if ( (_DWORD)v54 == 45057 )
      v16 = HIDWORD(v54) + 8;
    LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v16, v16 + 1);
    if ( LinesForGsiRange )
    {
      v15 = v16 + LinesForGsiRange[5] - LinesForGsiRange[7];
      v14 = LinesForGsiRange[4];
      v54 = __PAIR64__(v15, v14);
    }
  }
  while ( 1 )
  {
    v18 = HalpInterruptLookupController(v14);
    v20 = (__int64)v18;
    if ( !v18 )
      break;
    if ( (v18[31] & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, (ULONG_PTR)v18, 0x7931847uLL);
    v21 = HalpInterruptLookupController(v19);
    if ( !v21 )
    {
LABEL_38:
      HalpInterruptSetProblemEx(v20, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2240);
      return (unsigned int)-1073741275;
    }
    v23 = v21 + 33;
    v24 = (ULONG_PTR *)v21[33];
    do
    {
      if ( v24 == v23 )
        goto LABEL_38;
      v25 = v24;
      v24 = (ULONG_PTR *)*v24;
      v26 = *((_DWORD *)v25 + 5);
    }
    while ( v26 > v15 || *((_DWORD *)v25 + 6) <= v15 );
    v27 = v15 - v26;
    if ( !v25 )
      goto LABEL_38;
    v28 = v25[6];
    v29 = 2LL * v27;
    if ( *(_BYTE *)(v28 + 16LL * v27) )
    {
      HalpInterruptSetProblemEx(v20, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2253);
      return (unsigned int)-1073741811;
    }
    v30 = *(_OWORD *)(v28 + 16LL * v27);
    v31 = 56LL * v27;
    v32 = v31 + v25[5];
    v33 = *(_BYTE *)(v28 + 8 * v29 + 12) == 0;
    v34 = *(_QWORD *)(v32 + 48);
    v35 = *(_OWORD *)v32;
    v36 = *(_OWORD *)(v32 + 16);
    v37 = *(_OWORD *)(v32 + 32);
    v50 = *(_OWORD *)v32;
    v51 = v36;
    v52 = v37;
    v38 = v34;
    v53 = v34;
    if ( v33 )
    {
      v42 = HalpInterruptDestinationToTarget(v28, a6, (_DWORD *)(v32 + 24));
      if ( v42 < 0 )
      {
        HalpInterruptSetProblemEx(
          v20,
          22,
          v42,
          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
          2330);
        goto LABEL_49;
      }
      v39 = (_DWORD *)(v32 + 16);
      BestRouting = HalpInterruptFindBestRouting((int *)&v54, *(_QWORD *)a7);
      if ( BestRouting < 0 )
        goto LABEL_49;
      v43 = v55;
      *(_BYTE *)(v32 + 4) = a8;
      *(_DWORD *)(v32 + 8) = v57;
      *(_DWORD *)v32 = v8;
      *(_DWORD *)(v32 + 12) = 16;
      *(_DWORD *)(v32 + 48) = v43;
      Priority = HalpInterruptGetPriority(v20, v43);
      v45 = v56;
      *(_DWORD *)(v32 + 52) = Priority;
      *((_BYTE *)&HalpHwToSwIrqlMap + ((unsigned __int64)(unsigned __int8)v22 >> 4)) = v45;
    }
    else
    {
      if ( !HalpHvPresent
        && (*(_DWORD *)(v32 + 48) != v55
         || *(_DWORD *)(v32 + 8) != v57
         || *(_DWORD *)v32 != v8
         || *(_BYTE *)(v32 + 4) != v9) )
      {
        HalpInterruptSetProblemEx(v20, 32, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2295);
        KeBugCheckEx(0x5Cu, 0x202uLL, v32, *(unsigned int *)(v32 + 48), BugCheckParameter4);
      }
      *(_DWORD *)(v32 + 12) |= 0x10u;
      v39 = (_DWORD *)(v32 + 16);
    }
    _InterlockedOr(v49, 0);
    BestRouting = HalpInterruptSetLineStateInternal(v20, (__int64)&v54, v32, v22);
    if ( BestRouting < 0 )
    {
      v38 = v53;
      v37 = v52;
      v36 = v51;
      v35 = v50;
LABEL_49:
      v47 = v25[5];
      *(_OWORD *)(v47 + v31) = v35;
      *(_OWORD *)(v47 + v31 + 16) = v36;
      *(_OWORD *)(v47 + v31 + 32) = v37;
      *(_QWORD *)(v47 + v31 + 48) = v38;
      *(_OWORD *)(v25[6] + 8 * v29) = v30;
      return (unsigned int)BestRouting;
    }
    if ( *(_DWORD *)(v32 + 20) == *(_DWORD *)(a7 + 4) && *v39 == *(_DWORD *)a7 )
      return 0;
    v46 = *(_QWORD *)v39;
    v9 = a8;
    v54 = v46;
LABEL_46:
    v14 = v54;
    v15 = HIDWORD(v54);
  }
  HalpInterruptLastProblemController = 0LL;
  HalpInterruptLastProblemStatus = 0;
  HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
  HalpInterruptLastProblem = 17;
  HalpInterruptLastProblemLine = 2216;
  return (unsigned int)-1073741275;
}
