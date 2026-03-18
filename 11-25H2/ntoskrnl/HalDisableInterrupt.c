/*
 * XREFs of HalDisableInterrupt @ 0x140444D30
 * Callers:
 *     KiDisconnectInterruptInternal @ 0x140444BF8 (KiDisconnectInterruptInternal.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140444EC8 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpDisableSecondaryInterrupt @ 0x140443D28 (HalpDisableSecondaryInterrupt.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptApplyOverrides @ 0x140445554 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140445AEC (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140445BA4 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalDisableInterrupt(_DWORD *a1)
{
  unsigned int v1; // edi
  int v3; // esi
  unsigned int v5; // ebp
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v7; // r14
  __int64 v8; // rsi
  unsigned __int8 v9; // bl
  __int64 v10; // r8
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
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
    HalpInterruptSetProblemEx(0LL, 19, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0x1B0u);
    return (unsigned int)-1073741811;
  }
  v5 = a1[16];
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v5, v5 + 1);
  v7 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v5) )
      return (unsigned int)HalpDisableSecondaryInterrupt((__int64)a1);
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemLine = 417;
    goto LABEL_6;
  }
  v11 = LinesForGsiRange[4];
  v12 = v5 + LinesForGsiRange[5] - LinesForGsiRange[7];
  HalpInterruptApplyOverrides(&v11, 0LL, 0LL);
  v8 = HalpInterruptLookupController(v11);
  if ( !v8 )
    HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0x1C8u);
  v9 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v10 = *((_QWORD *)v7 + 5) + 56LL * (int)(v12 - v7[5]);
  *(_DWORD *)(v10 + 12) &= ~0x10u;
  v1 = HalpInterruptSetLineStateInternal(v8, &v11, v10);
  HalpReleaseHighLevelLock((__int64)&HalpInterruptLock, v9);
  return v1;
}
