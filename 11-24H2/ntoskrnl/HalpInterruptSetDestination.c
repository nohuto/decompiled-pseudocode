/*
 * XREFs of HalpInterruptSetDestination @ 0x1403B9230
 * Callers:
 *     ExtEnvSetVpptTarget @ 0x1403BB428 (ExtEnvSetVpptTarget.c)
 * Callees:
 *     HalpInterruptSetRemappedDestinationHv @ 0x1403B9368 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptModel @ 0x1403BAB3C (HalpInterruptModel.c)
 *     HalpInterruptSetRemappedDestination @ 0x1403BAB84 (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403BB048 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
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
  char v15; // bl
  unsigned int v16; // eax
  __int64 v17; // rdx
  _DWORD v18[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  unsigned int *v20; // [rsp+40h] [rbp-10h]
  int v21; // [rsp+70h] [rbp+20h] BYREF
  int v22; // [rsp+74h] [rbp+24h]
  int v23; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v24; // [rsp+8Ch] [rbp+3Ch]

  v3 = a3;
  v4 = *a1;
  v18[1] = 0;
  if ( ((_DWORD)v4 == 3 || !(_DWORD)v4) && qword_140FC0EE8 )
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
        LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v11, v11 + 1);
        if ( LinesForGsiRange )
        {
          v13 = LinesForGsiRange[4];
          v21 = -1;
          v23 = v13;
          v14 = LinesForGsiRange[5] - LinesForGsiRange[7];
          v18[0] = 1;
          v19 = a2;
          v24 = v11 + v14;
          v22 = 1;
          v20 = a1 + 10;
          v15 = HalpAcquireHighLevelLock(&HalpInterruptLock);
          v16 = HalpInterruptSetDestinationInternal(&v23, v18, &v21);
          LOBYTE(v17) = v15;
          v8 = v16;
          HalpReleaseHighLevelLock(&HalpInterruptLock, v17);
          return v8;
        }
        HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 559);
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)HalpInterruptSetRemappedDestination(v3, a1, a2);
  }
}
