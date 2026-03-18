/*
 * XREFs of HalDisableInterrupt @ 0x1403B8EA0
 * Callers:
 *     KiDisconnectInterruptInternal @ 0x1403B8D74 (KiDisconnectInterruptInternal.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1403B9038 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     HalpInterruptApplyOverrides @ 0x1403B96C4 (HalpInterruptApplyOverrides.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpDisableSecondaryInterrupt @ 0x14047EC50 (HalpDisableSecondaryInterrupt.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalDisableInterrupt(_DWORD *a1)
{
  unsigned int v1; // edi
  int v3; // esi
  unsigned int v5; // ebp
  _DWORD *LinesForGsiRange; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r14
  __int64 v10; // rsi
  char v11; // bl
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+54h] [rbp+Ch]

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
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v5, v5 + 1);
  v9 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v5, v7, v8) )
      return (unsigned int)HalpDisableSecondaryInterrupt(a1);
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemLine = 417;
    goto LABEL_6;
  }
  v15 = LinesForGsiRange[4];
  v16 = v5 + LinesForGsiRange[5] - LinesForGsiRange[7];
  HalpInterruptApplyOverrides(&v15, 0LL, 0LL);
  v10 = HalpInterruptLookupController(v15);
  if ( !v10 )
    HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 456);
  v11 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v12 = *((_QWORD *)v9 + 5) + 56LL * (int)(v16 - v9[5]);
  *(_DWORD *)(v12 + 12) &= ~0x10u;
  v13 = HalpInterruptSetLineStateInternal(v10, &v15);
  LOBYTE(v14) = v11;
  v1 = v13;
  HalpReleaseHighLevelLock(&HalpInterruptLock, v14);
  return v1;
}
