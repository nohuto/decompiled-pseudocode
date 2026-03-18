/*
 * XREFs of HalpInterruptEnablePerformanceEvents @ 0x1403B90F8
 * Callers:
 *     EmonPreOverflowHandler @ 0x1403B8A20 (EmonPreOverflowHandler.c)
 *     HalpInterruptInitSystem @ 0x140B4D2D0 (HalpInterruptInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x140B4F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x1403B8918 (HalpGetProcessorStateByNtIndex.c)
 *     HalpInterruptGsiToLine @ 0x1403B9678 (HalpInterruptGsiToLine.c)
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGetPriority @ 0x1403BA8C8 (HalpInterruptGetPriority.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 */

__int64 __fastcall HalpInterruptEnablePerformanceEvents(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // esi
  bool v4; // zf
  char v5; // di
  __int64 v6; // rdx
  int v7; // ecx
  __int64 result; // rax
  __int64 ProcessorStateByNtIndex; // rax
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // bl
  char v14; // di
  int v15; // r8d
  __int64 v16; // rdx
  __int128 v17; // [rsp+40h] [rbp-19h] BYREF
  __int64 v18; // [rsp+50h] [rbp-9h]
  __int128 v19; // [rsp+58h] [rbp-1h]
  _OWORD v20[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+88h] [rbp+2Fh]
  __int64 v22; // [rsp+C0h] [rbp+67h] BYREF
  int v23; // [rsp+C8h] [rbp+6Fh] BYREF
  int v24; // [rsp+CCh] [rbp+73h]

  v1 = HalpInterruptController;
  v2 = 0;
  v22 = 0LL;
  v19 = 0LL;
  v4 = *(_DWORD *)(HalpInterruptController + 240) == 2;
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  v5 = 0;
  if ( v4 )
  {
    LODWORD(v22) = *(_DWORD *)(HalpInterruptController + 256);
    HIDWORD(v22) = -3;
    if ( !HalpInterruptPerfLinesFound )
    {
      result = HalpInterruptFindLines(&v22, 0LL);
      if ( !result )
        return result;
      HalpInterruptPerfLinesFound = 1;
    }
    *(_QWORD *)&v20[0] = 0x1FFFFFFFFLL;
    *(_QWORD *)&v19 = 1LL;
    memset((char *)v20 + 12, 0, 20);
    *((_QWORD *)&v19 + 1) = 0x1000000001LL;
    DWORD2(v20[0]) = 3;
    LODWORD(v21) = 254;
    HIDWORD(v21) = HalpInterruptGetPriority(v1, 254LL);
    if ( !a1 )
      v5 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    HalpInterruptSetLineStateInternal(v1, &v22);
    if ( !a1 )
    {
      LOBYTE(v6) = v5;
      HalpReleaseHighLevelLock(&HalpInterruptLock, v6);
    }
  }
  v7 = *(_DWORD *)(v1 + 240);
  result = (unsigned int)(v7 - 3);
  if ( (result & 0xFFFFFFFC) == 0 && v7 != 5 )
  {
    ProcessorStateByNtIndex = HalpGetProcessorStateByNtIndex(KeGetPcr()->Prcb.Number);
    v23 = -1;
    v11 = ProcessorStateByNtIndex;
    result = 0LL;
    v24 = 1;
    v18 = 0LL;
    v17 = 0LL;
    v12 = *(unsigned int *)(v11 + 40);
    LODWORD(v17) = 6;
    DWORD2(v17) = v10;
    if ( (_DWORD)v12 )
    {
      result = HalpInterruptGsiToLine(v12, &v22);
      if ( (int)result >= 0 )
      {
        v13 = *(_BYTE *)(v11 + 14);
        v14 = HalpAcquireHighLevelLock(&HalpInterruptLock);
        LOBYTE(v15) = 15;
        LOBYTE(v2) = v13 != 0;
        HalpInterruptSetLineState((unsigned int)&v22, 254, v15, v2, 1, (__int64)&v17, (__int64)&v23);
        LOBYTE(v16) = v14;
        return HalpReleaseHighLevelLock(&HalpInterruptLock, v16);
      }
    }
  }
  return result;
}
