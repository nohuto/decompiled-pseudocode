/*
 * XREFs of HalpInterruptInitializeController @ 0x140553E14
 * Callers:
 *     HalpInterruptResetThisProcessor @ 0x14053F610 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptPowerChange @ 0x140554B90 (HalpInterruptPowerChange.c)
 *     HalpInterruptSelectController @ 0x140554CA8 (HalpInterruptSelectController.c)
 *     HalpInterruptReinitialize @ 0x140B6C0DC (HalpInterruptReinitialize.c)
 *     HalpInitializeInterrupts @ 0x140C0FE18 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553F2C (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptInitializeController(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // r8d
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx

  if ( (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
    return 0LL;
  v4 = *(_DWORD *)(BugCheckParameter3 + 244);
  if ( (v4 & 1) == 0 )
    goto LABEL_14;
  if ( !HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptMaxClusterSize > *(_DWORD *)(BugCheckParameter3 + 304) )
    HalpInterruptMaxClusterSize = *(_DWORD *)(BugCheckParameter3 + 304);
  if ( !(_DWORD)HalpInterruptMaxCluster || (unsigned int)HalpInterruptMaxCluster > *(_DWORD *)(BugCheckParameter3 + 308) )
    LODWORD(HalpInterruptMaxCluster) = *(_DWORD *)(BugCheckParameter3 + 308);
  v5 = v4 & 0x400;
  if ( !HalpInterruptDirectedEoiModeDetermined )
    goto LABEL_13;
  if ( !v5 )
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
  v6 = HalpInterruptInitializeLocalUnit(BugCheckParameter3);
  if ( v6 >= 0 )
  {
LABEL_14:
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), a2);
    if ( v6 < 0 )
      HalpInterruptSetProblemEx(
        BugCheckParameter3,
        5,
        v6,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
        0x1FFu);
  }
LABEL_16:
  v7 = *(_DWORD *)(BugCheckParameter3 + 248);
  if ( v6 < 0 )
  {
    v8 = v7 | 2;
    v9 = v8 & 0xFFFFFFFE;
  }
  else
  {
    v8 = v7 | 1;
    v9 = v8 & 0xFFFFFFFD;
  }
  *(_DWORD *)(BugCheckParameter3 + 248) = v8;
  result = (unsigned int)v6;
  *(_DWORD *)(BugCheckParameter3 + 248) = v9;
  return result;
}
