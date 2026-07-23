/*
 * XREFs of HalpInterruptSetDestination @ 0x140373710
 * Callers:
 *     ExtEnvSetVpptTarget @ 0x140374B64 (ExtEnvSetVpptTarget.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140373848 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpInterruptSetRemappedDestination @ 0x1403744F0 (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403747D8 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetDestination(unsigned int *a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // r9
  __int64 v4; // r8
  unsigned int v8; // edi
  int v10; // r8d
  unsigned int v11; // edi
  _DWORD *LinesForGsiRange; // rax
  int v13; // ecx
  int v14; // eax
  unsigned __int8 v15; // bl
  _DWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  unsigned int *v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+70h] [rbp+20h] BYREF
  int v20; // [rsp+74h] [rbp+24h]
  int v21; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v22; // [rsp+8Ch] [rbp+3Ch]

  v3 = a3;
  v4 = *a1;
  v16[1] = 0;
  if ( ((_DWORD)v4 == 3 || !(_DWORD)v4) && qword_140FC1148 )
  {
    return (unsigned int)HalpInterruptSetRemappedDestinationHv(v3, a1, a2);
  }
  else
  {
    if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) == 0
      || (unsigned int)HalpInterruptModel(a1, a2, v4, v3) != 1 && !v10 )
    {
      if ( v3 )
      {
        v11 = *v3;
        LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v11, v11 + 1);
        if ( LinesForGsiRange )
        {
          v13 = LinesForGsiRange[4];
          v19 = -1;
          v21 = v13;
          v14 = LinesForGsiRange[5] - LinesForGsiRange[7];
          v16[0] = 1;
          v17 = a2;
          v22 = v11 + v14;
          v20 = 1;
          v18 = a1 + 10;
          v15 = HalpAcquireHighLevelLock(&HalpInterruptLock);
          v8 = HalpInterruptSetDestinationInternal(&v21, v16, &v19);
          HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v15);
          return v8;
        }
        HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 559);
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)HalpInterruptSetRemappedDestination(v3, a1, a2);
  }
}
