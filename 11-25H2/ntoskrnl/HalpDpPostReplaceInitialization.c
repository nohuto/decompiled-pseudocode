/*
 * XREFs of HalpDpPostReplaceInitialization @ 0x140B3F9EC
 * Callers:
 *     HalpDpOfflineProcessorForReplace @ 0x140B3F7D0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpGetCpuInfo @ 0x14048D3A0 (HalpGetCpuInfo.c)
 *     HalpRestartProfiling @ 0x1404B1CF0 (HalpRestartProfiling.c)
 *     HalpMcUpdateMicrocode @ 0x1404D1C6C (HalpMcUpdateMicrocode.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1404D9390 (HalpInterruptReinitializeThisProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B58FF0 (HalpMcaResumeProcessorConfig.c)
 */

__int64 __fastcall HalpDpPostReplaceInitialization(int *a1, unsigned __int64 *a2)
{
  int v2; // edi
  int v5; // edx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  char CpuInfo; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int8 v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v17 = 0;
  HalpInterruptReinitializeThisProcessor();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
  }
  v7 = HIDWORD(*a2);
  __writemsr(0x10u, *a2);
  HalpMcaResumeProcessorConfig(1LL, v7);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL, v8, v9);
  v10 = (unsigned int)_InterlockedExchangeAdd(a1 + 15, 1u);
  while ( a1[15] < v2 )
    _mm_pause();
  while ( a1[16] < (int)v10 )
    _mm_pause();
  HalpMcUpdateMicrocode(v10);
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v17);
  LOBYTE(v13) = CpuInfo != 0 ? v17 : 0;
  v17 = v13;
  if ( (_BYTE)v13 == 1 )
  {
    if ( KeGetCurrentPrcb()->CpuType == 15 )
    {
      v13 = 3221291039LL;
      v14 = __readmsr(0xC001001F) & 0xFFFFFFFEFFEFFFFFuLL | 0x100000000LL;
      v12 = HIDWORD(v14);
      __writemsr(0xC001001F, v14);
    }
    if ( KeGetCurrentPrcb()->CpuType == 18 )
    {
      v13 = 3221295145LL;
      v15 = __readmsr(0xC0011029) | 0x80000000;
      v12 = HIDWORD(v15);
      __writemsr(0xC0011029, v15);
    }
  }
  _InterlockedAdd(a1 + 16, 1u);
  while ( a1[16] < v2 )
    _mm_pause();
  HalpRestartProfiling(v13, v12);
  return HalpInterruptEnableNmi();
}
