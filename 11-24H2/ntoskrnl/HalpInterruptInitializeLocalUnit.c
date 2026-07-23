/*
 * XREFs of HalpInterruptInitializeLocalUnit @ 0x140553F2C
 * Callers:
 *     HalpInterruptReinitializeThisProcessor @ 0x1404D1860 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptResetThisProcessor @ 0x14053F610 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptInitializeController @ 0x140553E14 (HalpInterruptInitializeController.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptRestoreController @ 0x1404976C4 (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpInterruptMarkProcessorStarted @ 0x14053F388 (HalpInterruptMarkProcessorStarted.c)
 *     HalpInitializeCmciVector @ 0x140553A10 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140553AC0 (HalpInitializeDeferredErrorVector.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptInitializeLocalUnit(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // r15
  bool v3; // r12
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  _DWORD *v8; // rdx
  int v9; // eax
  char v10; // bl
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r8d
  ULONG_PTR v18; // r8
  int v19; // eax
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-40h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  int v23; // [rsp+80h] [rbp+20h] BYREF

  v23 = 0;
  LODWORD(v22) = 0;
  v21 = 0LL;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = HalpDisableInterrupts();
  v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), (unsigned int)v1);
  v5 = v4;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 585;
    v6 = 4;
LABEL_3:
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      v6,
      v4,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      BugCheckParameter4);
    goto LABEL_4;
  }
  *(_DWORD *)(HalpInterruptLocalIds + 4 * v1) = v23;
  HalpInterruptMarkProcessorStarted(v23);
  v8 = (_DWORD *)(HalpInterruptTargets + 24 * v1);
  if ( !*v8 )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      if ( !HalpInterruptClusterModeForced
        && HalpInterruptClusterModeEnabled == HalpInterruptPhysicalModeOnly
        && (!HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptProcessorCount <= HalpInterruptLogicalFlatLimit) )
      {
        LODWORD(v21) = 5;
        v9 = 1 << v1;
        goto LABEL_18;
      }
      if ( HalpInterruptNextCluster < (unsigned int)HalpInterruptMaxCluster
        && (*(_DWORD *)(BugCheckParameter3 + 244) & 8) != 0 )
      {
        v10 = 1;
        DWORD2(v21) = HalpInterruptNextCluster;
        HIDWORD(v21) = 1 << HalpInterruptNextClusterIndex;
        LODWORD(v21) = 6;
        goto LABEL_19;
      }
    }
    v9 = v23;
    LODWORD(v21) = 4;
LABEL_18:
    v10 = 0;
    DWORD2(v21) = v9;
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_36;
LABEL_19:
    if ( *(_QWORD *)(BugCheckParameter3 + 80) )
    {
      v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), &v21);
      v12 = v21;
    }
    else
    {
      if ( !*(_QWORD *)(BugCheckParameter3 + 144) )
        goto LABEL_36;
      v10 = 0;
      v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), &v23);
      v12 = v21;
      if ( (_DWORD)v21 == 6 )
      {
        v13 = DWORD2(v21);
        if ( DWORD2(v21) >= (unsigned int)HalpInterruptMaxCluster )
        {
          DWORD2(v21) = v23;
          LODWORD(v21) = 4;
          goto LABEL_36;
        }
        goto LABEL_22;
      }
    }
    v13 = DWORD2(v21);
LABEL_22:
    if ( v11 >= 0 )
    {
      HalpInterruptLogicalMode = 1;
      if ( v12 == 6 )
      {
        HalpInterruptClusterModeEnabled = 1;
        if ( v13 > HalpInterruptNextCluster )
          HalpInterruptNextCluster = v13;
      }
      if ( v10 )
      {
        if ( ++HalpInterruptNextClusterIndex >= (unsigned int)HalpInterruptMaxClusterSize )
        {
          HalpInterruptNextClusterIndex = 0;
          ++HalpInterruptNextCluster;
        }
      }
      v14 = HalpInterruptTargets;
      *(_OWORD *)(HalpInterruptTargets + 24 * v1) = v21;
      *(_QWORD *)(v14 + 24 * v1 + 16) = v22;
      if ( (_DWORD)v21 != 4 )
        goto LABEL_30;
LABEL_37:
      KeAddProcessorAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v1);
      goto LABEL_30;
    }
LABEL_36:
    v16 = HalpInterruptTargets;
    *(_DWORD *)(HalpInterruptTargets + 24 * v1) = 4;
    *(_DWORD *)(v16 + 24 * v1 + 8) = v23;
    goto LABEL_37;
  }
  if ( !HalpInterruptPhysicalModeOnly )
  {
    if ( *(_QWORD *)(BugCheckParameter3 + 80) )
    {
      v17 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), v8);
      if ( v17 < 0 )
      {
        HalpInterruptSetProblemEx(
          BugCheckParameter3,
          6,
          v17,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
          0x319u);
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, BugCheckParameter3, v18);
      }
    }
  }
LABEL_30:
  v15 = HalpInitializeCmciVector(BugCheckParameter3);
  v5 = v15;
  if ( v15 >= 0 )
  {
    v4 = HalpInitializeDeferredErrorVector(BugCheckParameter3);
    v5 = v4;
    if ( v4 < 0 )
    {
      BugCheckParameter4 = 827;
      v6 = 38;
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(BugCheckParameter3 + 244) & 2) != 0 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), 0LL);
    if ( (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 240) - 3) <= 1
      && (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
    {
      v19 = HalpInterruptRestoreController(BugCheckParameter3, 1);
      v5 = v19;
      if ( v19 < 0 )
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 4uLL, v19);
    }
  }
  else
  {
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      10,
      v15,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      0x32Eu);
  }
LABEL_4:
  if ( v3 )
    _enable();
  return v5;
}
