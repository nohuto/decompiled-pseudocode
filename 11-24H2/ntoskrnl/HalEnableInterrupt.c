/*
 * XREFs of HalEnableInterrupt @ 0x1402B3DD0
 * Callers:
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 * Callees:
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpEnableSecondaryInterrupt @ 0x1406F90D0 (HalpEnableSecondaryInterrupt.c)
 */

__int64 __fastcall HalEnableInterrupt(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // ebx
  unsigned int v5; // r14d
  _DWORD *LinesForGsiRange; // rax
  char v7; // al
  int v8; // r8d
  char v9; // bl
  unsigned int v10; // eax
  __int64 v11; // rdx
  _DWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+84h] [rbp+24h]
  int v17; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v18; // [rsp+8Ch] [rbp+2Ch]

  v1 = 0;
  v12[1] = 0;
  if ( *(_DWORD *)a1 != 1 )
  {
    HalpInterruptLastProblem = 19;
    HalpInterruptLastProblemLine = 204;
LABEL_6:
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblemStatus = 0;
    return (unsigned int)-1073741811;
  }
  v15 = -1;
  v3 = *(_DWORD *)(a1 + 8);
  v13 = a1 + 32;
  v14 = a1 + 48;
  v12[0] = 1;
  v16 = 1;
  if ( !v3 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v5, v5 + 1);
    if ( LinesForGsiRange )
    {
      v17 = LinesForGsiRange[4];
      v18 = v5 + LinesForGsiRange[5] - LinesForGsiRange[7];
      v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
      LOBYTE(v8) = *(_BYTE *)(a1 + 16);
      v9 = v7;
      v10 = HalpInterruptSetLineState(
              (unsigned int)&v17,
              *(_DWORD *)(a1 + 12),
              v8,
              *(_DWORD *)(a1 + 24),
              *(_DWORD *)(a1 + 20),
              (__int64)v12,
              (__int64)&v15);
      LOBYTE(v11) = v9;
      v1 = v10;
      HalpReleaseHighLevelLock(&HalpInterruptLock, v11);
      return v1;
    }
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v5) )
      return (unsigned int)HalpEnableSecondaryInterrupt(a1);
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemLine = 272;
    goto LABEL_6;
  }
  if ( v3 != 3 )
  {
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 313);
    return (unsigned int)-1073741811;
  }
  return v1;
}
