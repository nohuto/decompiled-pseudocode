/*
 * XREFs of EmonAllocateCounterOriginal @ 0x1405587FC
 * Callers:
 *     EmonEnableMonitoringOriginal @ 0x140558FF0 (EmonEnableMonitoringOriginal.c)
 * Callees:
 *     HalpAllocateHalCounters @ 0x14053BC68 (HalpAllocateHalCounters.c)
 *     EmonAllocateCounterInternal @ 0x140558740 (EmonAllocateCounterInternal.c)
 *     EmonFindCounterToAllocateOriginal @ 0x140559254 (EmonFindCounterToAllocateOriginal.c)
 */

__int64 __fastcall EmonAllocateCounterOriginal(int a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  __int64 HalCounters; // rax
  __int64 v10; // rdx
  int *v11; // rsi
  int v12; // ebx
  int v13; // ecx
  int v15[10]; // [rsp+30h] [rbp-28h] BYREF

  v15[0] = 0;
  HalCounters = HalpAllocateHalCounters();
  if ( (int)HalCounters >= 0 )
  {
    LODWORD(HalCounters) = KeGetPcr()->Prcb.Number;
    if ( v10 && *(_BYTE *)(v10 + 316) )
      v11 = (int *)(*(_QWORD *)(KiProcessorBlock[HalCounters] + 88) + 24LL);
    else
      v11 = *(int **)(KiProcessorBlock[HalCounters] + 88);
    if ( (unsigned __int8)EmonFindCounterToAllocateOriginal(v11, v10, v15) )
    {
      v12 = v15[0];
      EmonAllocateCounterInternal((__int64)v11, a1, a2, a3, v15[0]);
      v13 = *v11;
      *a4 = v12;
      *a5 = v13;
      return 0LL;
    }
    _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[3], 0xFFFFFFFE);
  }
  return 2147483665LL;
}
