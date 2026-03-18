/*
 * XREFs of HalEnableInterrupt @ 0x1403B7D10
 * Callers:
 *     KeConnectInterrupt @ 0x1403B6EEC (KeConnectInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpEnableSecondaryInterrupt @ 0x1406FB490 (HalpEnableSecondaryInterrupt.c)
 */

__int64 __fastcall HalEnableInterrupt(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // ebx
  unsigned int v5; // r14d
  _DWORD *LinesForGsiRange; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // al
  int v10; // r8d
  char v11; // bl
  unsigned int v12; // eax
  __int64 v13; // rdx
  _DWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+80h] [rbp+20h] BYREF
  int v18; // [rsp+84h] [rbp+24h]
  int v19; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v20; // [rsp+8Ch] [rbp+2Ch]

  v1 = 0;
  v14[1] = 0;
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
  v17 = -1;
  v3 = *(_DWORD *)(a1 + 8);
  v15 = a1 + 32;
  v16 = a1 + 48;
  v14[0] = 1;
  v18 = 1;
  if ( !v3 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v5, v5 + 1);
    if ( LinesForGsiRange )
    {
      v19 = LinesForGsiRange[4];
      v20 = v5 + LinesForGsiRange[5] - LinesForGsiRange[7];
      v9 = HalpAcquireHighLevelLock(&HalpInterruptLock);
      LOBYTE(v10) = *(_BYTE *)(a1 + 16);
      v11 = v9;
      v12 = HalpInterruptSetLineState(
              (unsigned int)&v19,
              *(_DWORD *)(a1 + 12),
              v10,
              *(_DWORD *)(a1 + 24),
              *(_DWORD *)(a1 + 20),
              (__int64)v14,
              (__int64)&v17);
      LOBYTE(v13) = v11;
      v1 = v12;
      HalpReleaseHighLevelLock(&HalpInterruptLock, v13);
      return v1;
    }
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v5, v7, v8) )
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
