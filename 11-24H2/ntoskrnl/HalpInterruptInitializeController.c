/*
 * XREFs of HalpInterruptInitializeController @ 0x1405564D4
 * Callers:
 *     HalpInterruptResetThisProcessor @ 0x140541D10 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptPowerChange @ 0x140557250 (HalpInterruptPowerChange.c)
 *     HalpInterruptSelectController @ 0x140557368 (HalpInterruptSelectController.c)
 *     HalpInterruptReinitialize @ 0x140B6A818 (HalpInterruptReinitialize.c)
 *     HalpInitializeInterrupts @ 0x140C0DE18 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1405565EC (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptInitializeController(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx

  if ( (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
    return 0LL;
  v6 = *(_DWORD *)(BugCheckParameter3 + 244);
  if ( (v6 & 1) == 0 )
    goto LABEL_14;
  if ( !HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptMaxClusterSize > *(_DWORD *)(BugCheckParameter3 + 304) )
    HalpInterruptMaxClusterSize = *(_DWORD *)(BugCheckParameter3 + 304);
  if ( !(_DWORD)HalpInterruptMaxCluster || (unsigned int)HalpInterruptMaxCluster > *(_DWORD *)(BugCheckParameter3 + 308) )
    LODWORD(HalpInterruptMaxCluster) = *(_DWORD *)(BugCheckParameter3 + 308);
  v7 = v6 & 0x400;
  if ( !HalpInterruptDirectedEoiModeDetermined )
    goto LABEL_13;
  if ( !v7 )
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
  v8 = HalpInterruptInitializeLocalUnit(BugCheckParameter3);
  a3 = (unsigned int)v8;
  if ( v8 >= 0 )
  {
LABEL_14:
    LODWORD(a3) = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), a2, a3, a4);
    if ( (int)a3 < 0 )
      HalpInterruptSetProblemEx(
        BugCheckParameter3,
        5,
        a3,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
        0x1FFu);
  }
LABEL_16:
  v9 = *(_DWORD *)(BugCheckParameter3 + 248);
  if ( (int)a3 < 0 )
  {
    v10 = v9 | 2;
    v11 = v10 & 0xFFFFFFFE;
  }
  else
  {
    v10 = v9 | 1;
    v11 = v10 & 0xFFFFFFFD;
  }
  *(_DWORD *)(BugCheckParameter3 + 248) = v10;
  result = (unsigned int)a3;
  *(_DWORD *)(BugCheckParameter3 + 248) = v11;
  return result;
}
