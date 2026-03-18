/*
 * XREFs of HalpInterruptInitializeLocalUnit @ 0x140553CEC
 * Callers:
 *     HalpInterruptReinitializeThisProcessor @ 0x1404D9390 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptResetThisProcessor @ 0x14053F4E0 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptInitializeController @ 0x140553BD4 (HalpInterruptInitializeController.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     HalpInterruptRestoreController @ 0x140443B00 (HalpInterruptRestoreController.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpInterruptMarkProcessorStarted @ 0x14053F258 (HalpInterruptMarkProcessorStarted.c)
 *     HalpInitializeCmciVector @ 0x1405537D0 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140553880 (HalpInitializeDeferredErrorVector.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptInitializeLocalUnit(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // r15
  bool v3; // r12
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  char v8; // bl
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r8d
  ULONG_PTR BugCheckParameter4; // r8
  int v17; // eax
  int v18; // eax
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-10h]

  LODWORD(v20) = 0;
  v19 = 0LL;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = HalpDisableInterrupts();
  v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16));
  v5 = v4;
  if ( v4 < 0 )
  {
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      4,
      v4,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      0x249u);
    goto LABEL_3;
  }
  *(_DWORD *)(HalpInterruptLocalIds + 4 * v1) = 0;
  HalpInterruptMarkProcessorStarted(0);
  if ( *(_DWORD *)(HalpInterruptTargets + 24 * v1) )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      if ( *(_QWORD *)(BugCheckParameter3 + 80) )
      {
        v15 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16));
        if ( v15 < 0 )
        {
          HalpInterruptSetProblemEx(
            BugCheckParameter3,
            6,
            v15,
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
            0x319u);
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, BugCheckParameter3, BugCheckParameter4);
        }
      }
    }
    goto LABEL_29;
  }
  if ( !HalpInterruptPhysicalModeOnly )
  {
    if ( !HalpInterruptClusterModeForced
      && HalpInterruptClusterModeEnabled == HalpInterruptPhysicalModeOnly
      && (!HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptProcessorCount <= HalpInterruptLogicalFlatLimit) )
    {
      LODWORD(v19) = 5;
      v7 = 1 << v1;
      goto LABEL_17;
    }
    if ( HalpInterruptNextCluster < (unsigned int)HalpInterruptMaxCluster
      && (*(_DWORD *)(BugCheckParameter3 + 244) & 8) != 0 )
    {
      v8 = 1;
      DWORD2(v19) = HalpInterruptNextCluster;
      HIDWORD(v19) = 1 << HalpInterruptNextClusterIndex;
      LODWORD(v19) = 6;
      goto LABEL_18;
    }
  }
  v7 = 0;
  LODWORD(v19) = 4;
LABEL_17:
  v8 = 0;
  DWORD2(v19) = v7;
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_34;
LABEL_18:
  if ( *(_QWORD *)(BugCheckParameter3 + 80) )
  {
    v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16));
    v10 = v19;
  }
  else
  {
    if ( !*(_QWORD *)(BugCheckParameter3 + 144) )
      goto LABEL_34;
    v8 = 0;
    v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16));
    v10 = v19;
    if ( (_DWORD)v19 == 6 )
    {
      v11 = DWORD2(v19);
      if ( DWORD2(v19) >= (unsigned int)HalpInterruptMaxCluster )
        goto LABEL_34;
      goto LABEL_21;
    }
  }
  v11 = DWORD2(v19);
LABEL_21:
  if ( v9 >= 0 )
  {
    HalpInterruptLogicalMode = 1;
    if ( v10 == 6 )
    {
      HalpInterruptClusterModeEnabled = 1;
      if ( v11 > HalpInterruptNextCluster )
        HalpInterruptNextCluster = v11;
    }
    if ( v8 )
    {
      if ( ++HalpInterruptNextClusterIndex >= (unsigned int)HalpInterruptMaxClusterSize )
      {
        HalpInterruptNextClusterIndex = 0;
        ++HalpInterruptNextCluster;
      }
    }
    v12 = HalpInterruptTargets;
    *(_OWORD *)(HalpInterruptTargets + 24 * v1) = v19;
    *(_QWORD *)(v12 + 24 * v1 + 16) = v20;
    if ( (_DWORD)v19 != 4 )
      goto LABEL_29;
    goto LABEL_35;
  }
LABEL_34:
  v14 = HalpInterruptTargets;
  *(_DWORD *)(HalpInterruptTargets + 24 * v1) = 4;
  *(_DWORD *)(v14 + 24 * v1 + 8) = 0;
LABEL_35:
  KeAddProcessorAffinityEx(&HalpInterruptPhysicalTargets.Count, v1);
LABEL_29:
  v13 = HalpInitializeCmciVector(BugCheckParameter3);
  v5 = v13;
  if ( v13 >= 0 )
  {
    v17 = HalpInitializeDeferredErrorVector(BugCheckParameter3);
    v5 = v17;
    if ( v17 >= 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter3 + 244) & 2) != 0 )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16));
      if ( (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 240) - 3) <= 1
        && (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
      {
        v18 = HalpInterruptRestoreController(BugCheckParameter3, 1);
        v5 = v18;
        if ( v18 < 0 )
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 4uLL, v18);
      }
    }
    else
    {
      HalpInterruptSetProblemEx(
        BugCheckParameter3,
        38,
        v17,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
        0x33Bu);
    }
  }
  else
  {
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      10,
      v13,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      0x32Eu);
  }
LABEL_3:
  if ( v3 )
    _enable();
  return v5;
}
