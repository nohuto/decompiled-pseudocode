/*
 * XREFs of HalDisableInterrupt @ 0x140373FF0
 * Callers:
 *     KiDisconnectInterruptInternal @ 0x140373EC0 (KiDisconnectInterruptInternal.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140374188 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpDisableSecondaryInterrupt @ 0x140375450 (HalpDisableSecondaryInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalDisableInterrupt(_DWORD *a1)
{
  unsigned int v1; // edi
  int v3; // esi
  unsigned int v5; // ebp
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v7; // r14
  ULONG_PTR *v8; // rsi
  unsigned __int8 v9; // bl
  __int64 v10; // r8
  int v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+54h] [rbp+Ch]

  v1 = 0;
  if ( *a1 != 1 )
  {
    HalpInterruptLastProblem = 19;
    HalpInterruptLastProblemLine = 371;
LABEL_6:
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblemController = 0LL;
    return (unsigned int)-1073741811;
  }
  v3 = a1[2];
  if ( v3 )
  {
    if ( v3 == 3 )
      return v1;
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 432);
    return (unsigned int)-1073741811;
  }
  v5 = a1[16];
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v5, v5 + 1);
  v7 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v5) )
      return (unsigned int)HalpDisableSecondaryInterrupt(a1);
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemLine = 417;
    goto LABEL_6;
  }
  v11 = LinesForGsiRange[4];
  v12 = v5 + LinesForGsiRange[5] - LinesForGsiRange[7];
  HalpInterruptApplyOverrides((__int64)&v11, 0LL, 0LL);
  v8 = HalpInterruptLookupController(v11);
  if ( !v8 )
    HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 456);
  v9 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v10 = *((_QWORD *)v7 + 5) + 56LL * (int)(v12 - v7[5]);
  *(_DWORD *)(v10 + 12) &= ~0x10u;
  v1 = HalpInterruptSetLineStateInternal((__int64)v8, (__int64)&v11, v10);
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v9);
  return v1;
}
