/*
 * XREFs of HalpInterruptSetRemappedDestinationHv @ 0x140373848
 * Callers:
 *     HalpInterruptSetDestination @ 0x140373710 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1403735D0 (HalpInterruptFindControllerAndLineState.c)
 *     HalpHvRetargetDeviceMsiInterrupt @ 0x1403739A4 (HalpHvRetargetDeviceMsiInterrupt.c)
 *     HalpHvRetargetIoApicDeviceInterrupt @ 0x140374248 (HalpHvRetargetIoApicDeviceInterrupt.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
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
  unsigned __int8 v14; // bl
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v16[2]; // [rsp+38h] [rbp-8h] BYREF
  char v17; // [rsp+68h] [rbp+28h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v18 = 0LL;
  v15 = 0LL;
  v4 = *a2;
  v17 = 0;
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
  ControllerAndLineState = HalpInterruptFindControllerAndLineState(*a1, &v18, &v15);
  if ( ControllerAndLineState < 0 )
  {
    HalpInterruptSetProblemEx(
      v18,
      18,
      ControllerAndLineState,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      741);
    return (unsigned int)-1073741811;
  }
  v10 = v18;
  v11 = HalpHvRetargetIoApicDeviceInterrupt(*(unsigned int *)(v18 + 256), v15, a3, &v17);
  v7 = v11;
  if ( v11 < 0 )
  {
    HalpInterruptSetProblemEx(v10, 37, v11, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 755);
    return v7;
  }
  if ( v17 )
  {
    v12 = *a1;
    LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v12, v12 + 1);
    if ( LinesForGsiRange )
    {
      v16[0] = LinesForGsiRange[4];
      v16[1] = v12 + LinesForGsiRange[5] - LinesForGsiRange[7];
      v14 = HalpAcquireHighLevelLock(&HalpInterruptLock);
      v7 = HalpInterruptSetLineStateInternal(v10, (__int64)v16, v15);
      HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v14);
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
