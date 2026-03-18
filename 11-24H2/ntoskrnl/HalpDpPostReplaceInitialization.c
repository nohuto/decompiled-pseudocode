/*
 * XREFs of HalpDpPostReplaceInitialization @ 0x140B4F9EC
 * Callers:
 *     HalpDpOfflineProcessorForReplace @ 0x140B4F7D0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B90F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpGetCpuInfo @ 0x14048CB70 (HalpGetCpuInfo.c)
 *     HalpInterruptEnableNmi @ 0x1404A356C (HalpInterruptEnableNmi.c)
 *     HalpRestartProfiling @ 0x1404B3050 (HalpRestartProfiling.c)
 *     HalpMcUpdateMicrocode @ 0x1404D1C2C (HalpMcUpdateMicrocode.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1404D8410 (HalpInterruptReinitializeThisProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpMcaResumeProcessorConfig @ 0x140B68E20 (HalpMcaResumeProcessorConfig.c)
 */

__int64 __fastcall HalpDpPostReplaceInitialization(int *a1, unsigned __int64 *a2)
{
  int v2; // edi
  int v5; // edx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  char CpuInfo; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
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
    HalpInterruptEnablePerformanceEvents(0LL);
  v8 = (unsigned int)_InterlockedExchangeAdd(a1 + 15, 1u);
  while ( a1[15] < v2 )
    _mm_pause();
  while ( a1[16] < (int)v8 )
    _mm_pause();
  HalpMcUpdateMicrocode(v8);
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v17);
  LOBYTE(v13) = CpuInfo != 0 ? v17 : 0;
  v17 = v13;
  if ( (_BYTE)v13 == 1 )
  {
    if ( KeGetCurrentPrcb()->CpuType == 15 )
    {
      v13 = 3221291039LL;
      v14 = __readmsr(0xC001001F) & 0xFFFFFFFEFFEFFFFFuLL | 0x100000000LL;
      v10 = HIDWORD(v14);
      __writemsr(0xC001001F, v14);
    }
    if ( KeGetCurrentPrcb()->CpuType == 18 )
    {
      v13 = 3221295145LL;
      v15 = __readmsr(0xC0011029) | 0x80000000;
      v10 = HIDWORD(v15);
      __writemsr(0xC0011029, v15);
    }
  }
  _InterlockedAdd(a1 + 16, 1u);
  while ( a1[16] < v2 )
    _mm_pause();
  HalpRestartProfiling(v13, v10, v11, v12);
  return HalpInterruptEnableNmi();
}
