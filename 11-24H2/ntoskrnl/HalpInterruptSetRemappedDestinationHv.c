/*
 * XREFs of HalpInterruptSetRemappedDestinationHv @ 0x1403B9368
 * Callers:
 *     HalpInterruptSetDestination @ 0x1403B9230 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpHvRetargetDeviceMsiInterrupt @ 0x1403B94C4 (HalpHvRetargetDeviceMsiInterrupt.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1403B9540 (HalpInterruptFindControllerAndLineState.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpHvRetargetIoApicDeviceInterrupt @ 0x1403BA8F8 (HalpHvRetargetIoApicDeviceInterrupt.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetRemappedDestinationHv(unsigned int *a1, int *a2, __int64 a3)
{
  int v4; // eax
  int v6; // eax
  unsigned int v7; // edi
  int ControllerAndLineState; // eax
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // ebx
  _DWORD *LinesForGsiRange; // rax
  char v14; // bl
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-8h] BYREF
  char v19; // [rsp+68h] [rbp+28h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v20 = 0LL;
  v17 = 0LL;
  v4 = *a2;
  v19 = 0;
  if ( v4 )
  {
    if ( v4 == 3 )
    {
      v6 = HalpHvRetargetDeviceMsiInterrupt(a2, a3);
      v7 = v6;
      if ( v6 < 0 )
        HalpInterruptSetProblemEx(0, 37, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 723);
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  ControllerAndLineState = HalpInterruptFindControllerAndLineState(*a1, &v20, &v17, a2);
  if ( ControllerAndLineState < 0 )
  {
    HalpInterruptSetProblemEx(
      v20,
      18,
      ControllerAndLineState,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      741);
    return (unsigned int)-1073741811;
  }
  v10 = v20;
  v11 = HalpHvRetargetIoApicDeviceInterrupt(*(unsigned int *)(v20 + 256), v17, a3, &v19);
  v7 = v11;
  if ( v11 < 0 )
  {
    HalpInterruptSetProblemEx(v10, 37, v11, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 755);
    return v7;
  }
  if ( v19 )
  {
    v12 = *a1;
    LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v12, v12 + 1);
    if ( LinesForGsiRange )
    {
      v18[0] = LinesForGsiRange[4];
      v18[1] = v12 + LinesForGsiRange[5] - LinesForGsiRange[7];
      v14 = HalpAcquireHighLevelLock(&HalpInterruptLock);
      v15 = HalpInterruptSetLineStateInternal(v10, v18);
      LOBYTE(v16) = v14;
      v7 = v15;
      HalpReleaseHighLevelLock(&HalpInterruptLock, v16);
      return v7;
    }
    HalpInterruptSetProblemEx(
      v10,
      18,
      -1073741275,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      769);
    return (unsigned int)-1073741811;
  }
  return v7;
}
