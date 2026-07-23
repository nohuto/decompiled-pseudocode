/*
 * XREFs of HalpInterruptEnablePerformanceEvents @ 0x140373A20
 * Callers:
 *     EmonPreOverflowHandler @ 0x140374310 (EmonPreOverflowHandler.c)
 *     HalpInterruptInitSystem @ 0x140B4F310 (HalpInterruptInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x140B51A3C (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x1402B49A8 (HalpGetProcessorStateByNtIndex.c)
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindLines @ 0x140373298 (HalpInterruptFindLines.c)
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 *     HalpInterruptGetPriority @ 0x140373B58 (HalpInterruptGetPriority.c)
 */

__int64 __fastcall HalpInterruptEnablePerformanceEvents(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // esi
  bool v6; // zf
  unsigned __int8 v7; // di
  int v8; // ecx
  __int64 result; // rax
  __int64 ProcessorStateByNtIndex; // rax
  int v11; // edx
  __int64 v12; // rbx
  unsigned int v13; // ecx
  char v14; // bl
  unsigned __int8 v15; // di
  char v16; // [rsp+38h] [rbp-21h]
  __int128 v17; // [rsp+40h] [rbp-19h] BYREF
  __int64 v18; // [rsp+50h] [rbp-9h]
  _OWORD v19[3]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v20; // [rsp+88h] [rbp+2Fh]
  unsigned __int64 v21; // [rsp+C0h] [rbp+67h] BYREF
  int v22; // [rsp+C8h] [rbp+6Fh] BYREF
  int v23; // [rsp+CCh] [rbp+73h]

  v3 = HalpInterruptController;
  v4 = 0;
  v21 = 0LL;
  memset(v19, 0, sizeof(v19));
  v6 = *(_DWORD *)(HalpInterruptController + 240) == 2;
  v20 = 0LL;
  v7 = 0;
  if ( v6 )
  {
    LODWORD(v21) = *(_DWORD *)(HalpInterruptController + 256);
    HIDWORD(v21) = -3;
    if ( !HalpInterruptPerfLinesFound )
    {
      result = (__int64)HalpInterruptFindLines((int *)&v21);
      if ( !result )
        return result;
      HalpInterruptPerfLinesFound = 1;
    }
    *(_QWORD *)&v19[1] = 0x1FFFFFFFFLL;
    *(_QWORD *)&v19[0] = 1LL;
    memset((char *)&v19[1] + 12, 0, 20);
    *((_QWORD *)&v19[0] + 1) = 0x1000000001LL;
    DWORD2(v19[1]) = 3;
    LODWORD(v20) = 254;
    HIDWORD(v20) = HalpInterruptGetPriority(v3, 254LL, a3);
    if ( !a1 )
      v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    HalpInterruptSetLineStateInternal(v3, (__int64)&v21, (__int64)v19);
    if ( !a1 )
      HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v7);
  }
  v8 = *(_DWORD *)(v3 + 240);
  result = (unsigned int)(v8 - 3);
  if ( (result & 0xFFFFFFFC) == 0 && v8 != 5 )
  {
    ProcessorStateByNtIndex = HalpGetProcessorStateByNtIndex(KeGetPcr()->Prcb.Number);
    v22 = -1;
    v12 = ProcessorStateByNtIndex;
    result = 0LL;
    v23 = 1;
    v18 = 0LL;
    v17 = 0LL;
    v13 = *(_DWORD *)(v12 + 40);
    LODWORD(v17) = 6;
    DWORD2(v17) = v11;
    if ( v13 )
    {
      result = HalpInterruptGsiToLine(v13, &v21);
      if ( (int)result >= 0 )
      {
        v14 = *(_BYTE *)(v12 + 14);
        v15 = HalpAcquireHighLevelLock(&HalpInterruptLock);
        LOBYTE(v4) = v14 != 0;
        HalpInterruptSetLineState(&v21, 0xFEu, 15, v4, 1, (__int64)&v17, (__int64)&v22, v16);
        return HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v15);
      }
    }
  }
  return result;
}
