/*
 * XREFs of HalpInterruptInitializeLocalUnit @ 0x1405565EC
 * Callers:
 *     HalpInterruptReinitializeThisProcessor @ 0x1404D8410 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptResetThisProcessor @ 0x140541D10 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptInitializeController @ 0x1405564D4 (HalpInterruptInitializeController.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptRestoreController @ 0x14049CA1C (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpInterruptMarkProcessorStarted @ 0x140541A88 (HalpInterruptMarkProcessorStarted.c)
 *     HalpInitializeCmciVector @ 0x1405560D0 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140556180 (HalpInitializeDeferredErrorVector.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptInitializeLocalUnit(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // r15
  bool v3; // r12
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v8; // r9
  _DWORD *v9; // rdx
  int v10; // eax
  char v11; // bl
  int v12; // eax
  int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r8d
  ULONG_PTR v19; // r8
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-40h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  int v26; // [rsp+80h] [rbp+20h] BYREF

  v26 = 0;
  LODWORD(v25) = 0;
  v24 = 0LL;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = HalpDisableInterrupts();
  v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), (unsigned int)v1, 223LL, 216LL);
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
  *(_DWORD *)(HalpInterruptLocalIds + 4 * v1) = v26;
  HalpInterruptMarkProcessorStarted(v26);
  v9 = (_DWORD *)(HalpInterruptTargets + 24 * v1);
  if ( !*v9 )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      if ( !HalpInterruptClusterModeForced
        && HalpInterruptClusterModeEnabled == HalpInterruptPhysicalModeOnly
        && (!HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptProcessorCount <= HalpInterruptLogicalFlatLimit) )
      {
        LODWORD(v24) = 5;
        v10 = 1 << v1;
        goto LABEL_18;
      }
      if ( HalpInterruptNextCluster < (unsigned int)HalpInterruptMaxCluster
        && (*(_DWORD *)(BugCheckParameter3 + 244) & 8) != 0 )
      {
        v11 = 1;
        DWORD2(v24) = HalpInterruptNextCluster;
        HIDWORD(v24) = 1 << HalpInterruptNextClusterIndex;
        LODWORD(v24) = 6;
        goto LABEL_19;
      }
    }
    v10 = v26;
    LODWORD(v24) = 4;
LABEL_18:
    v11 = 0;
    DWORD2(v24) = v10;
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_36;
LABEL_19:
    if ( *(_QWORD *)(BugCheckParameter3 + 80) )
    {
      v12 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), &v24, 1LL, v8);
      v13 = v24;
    }
    else
    {
      if ( !*(_QWORD *)(BugCheckParameter3 + 144) )
        goto LABEL_36;
      LOBYTE(v8) = 1;
      v11 = 0;
      v12 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), &v26, &v24, v8);
      v13 = v24;
      if ( (_DWORD)v24 == 6 )
      {
        v14 = DWORD2(v24);
        if ( DWORD2(v24) >= (unsigned int)HalpInterruptMaxCluster )
        {
          DWORD2(v24) = v26;
          LODWORD(v24) = 4;
          goto LABEL_36;
        }
        goto LABEL_22;
      }
    }
    v14 = DWORD2(v24);
LABEL_22:
    if ( v12 >= 0 )
    {
      HalpInterruptLogicalMode = 1;
      if ( v13 == 6 )
      {
        HalpInterruptClusterModeEnabled = 1;
        if ( v14 > HalpInterruptNextCluster )
          HalpInterruptNextCluster = v14;
      }
      if ( v11 )
      {
        if ( ++HalpInterruptNextClusterIndex >= (unsigned int)HalpInterruptMaxClusterSize )
        {
          HalpInterruptNextClusterIndex = 0;
          ++HalpInterruptNextCluster;
        }
      }
      v15 = HalpInterruptTargets;
      *(_OWORD *)(HalpInterruptTargets + 24 * v1) = v24;
      *(_QWORD *)(v15 + 24 * v1 + 16) = v25;
      if ( (_DWORD)v24 != 4 )
        goto LABEL_30;
LABEL_37:
      KeAddProcessorAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v1);
      goto LABEL_30;
    }
LABEL_36:
    v17 = HalpInterruptTargets;
    *(_DWORD *)(HalpInterruptTargets + 24 * v1) = 4;
    *(_DWORD *)(v17 + 24 * v1 + 8) = v26;
    goto LABEL_37;
  }
  if ( !HalpInterruptPhysicalModeOnly )
  {
    if ( *(_QWORD *)(BugCheckParameter3 + 80) )
    {
      v18 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), v9, 1LL, v8);
      if ( v18 < 0 )
      {
        HalpInterruptSetProblemEx(
          BugCheckParameter3,
          6,
          v18,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
          0x319u);
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, BugCheckParameter3, v19);
      }
    }
  }
LABEL_30:
  v16 = HalpInitializeCmciVector(BugCheckParameter3);
  v5 = v16;
  if ( v16 >= 0 )
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
      guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), 0LL, v20, v21);
    if ( (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 240) - 3) <= 1
      && (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
    {
      v22 = HalpInterruptRestoreController(BugCheckParameter3, 1, v20, v21);
      v5 = v22;
      if ( v22 < 0 )
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 4uLL, v22);
    }
  }
  else
  {
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      10,
      v16,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      0x32Eu);
  }
LABEL_4:
  if ( v3 )
    _enable();
  return v5;
}
