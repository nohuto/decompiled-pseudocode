/*
 * XREFs of HalpInterruptInitializeController @ 0x140553BD4
 * Callers:
 *     HalpInterruptResetThisProcessor @ 0x14053F4E0 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptPowerChange @ 0x140554950 (HalpInterruptPowerChange.c)
 *     HalpInterruptSelectController @ 0x140554A68 (HalpInterruptSelectController.c)
 *     HalpInterruptReinitialize @ 0x140B5AD18 (HalpInterruptReinitialize.c)
 *     HalpInitializeInterrupts @ 0x140BFCE18 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553CEC (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptInitializeController(ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // r8d
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx

  if ( (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
    return 0LL;
  v3 = *(_DWORD *)(BugCheckParameter3 + 244);
  if ( (v3 & 1) == 0 )
    goto LABEL_14;
  if ( !HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptMaxClusterSize > *(_DWORD *)(BugCheckParameter3 + 304) )
    HalpInterruptMaxClusterSize = *(_DWORD *)(BugCheckParameter3 + 304);
  if ( !(_DWORD)HalpInterruptMaxCluster || (unsigned int)HalpInterruptMaxCluster > *(_DWORD *)(BugCheckParameter3 + 308) )
    LODWORD(HalpInterruptMaxCluster) = *(_DWORD *)(BugCheckParameter3 + 308);
  v4 = v3 & 0x400;
  if ( !HalpInterruptDirectedEoiModeDetermined )
    goto LABEL_13;
  if ( !v4 )
  {
    if ( !HalpInterruptDirectedEoiModeEnabled )
      goto LABEL_13;
LABEL_19:
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      25,
      -1073741811,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      0x1E6u);
    goto LABEL_16;
  }
  if ( !HalpInterruptDirectedEoiModeEnabled )
    goto LABEL_19;
LABEL_13:
  v5 = HalpInterruptInitializeLocalUnit(BugCheckParameter3);
  if ( v5 >= 0 )
  {
LABEL_14:
    v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16));
    if ( v5 < 0 )
      HalpInterruptSetProblemEx(
        BugCheckParameter3,
        5,
        v5,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
        0x1FFu);
  }
LABEL_16:
  v6 = *(_DWORD *)(BugCheckParameter3 + 248);
  if ( v5 < 0 )
  {
    v7 = v6 | 2;
    v8 = v7 & 0xFFFFFFFE;
  }
  else
  {
    v7 = v6 | 1;
    v8 = v7 & 0xFFFFFFFD;
  }
  *(_DWORD *)(BugCheckParameter3 + 248) = v7;
  result = (unsigned int)v5;
  *(_DWORD *)(BugCheckParameter3 + 248) = v8;
  return result;
}
