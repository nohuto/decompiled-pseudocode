/*
 * XREFs of HalpCmciInit @ 0x140B6E1D8
 * Callers:
 *     HalpCmcWorkerRoutine @ 0x140A44630 (HalpCmcWorkerRoutine.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpCmciInitializeErrorPacket @ 0x140477DA0 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x140478374 (HalpCmciInitProcessor.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1404CFB0C (HalpCmciLoadThresholdConfiguration.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void HalpCmciInit()
{
  PVOID v0; // r12
  LARGE_INTEGER PerformanceCounter; // rdi
  ULONG v2; // ebp
  ULONG ActiveProcessorCount; // r15d
  __int64 v4; // r14
  char v5; // cl
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rsi
  __int64 v8; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v0 = HalpCmcErrorSource;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  HalpCmciLoadThresholdConfiguration();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = 0LL;
    do
    {
      *(_DWORD *)Affinity.Reserved = 0;
      Affinity.Reserved[2] = 0;
      v5 = *(_DWORD *)((_BYTE *)KiGlobalState + v4) & 0x3F;
      Affinity.Group = *(_DWORD *)((char *)KiGlobalState + v4) >> 6;
      Affinity.Mask = 1LL << v5;
      if ( v2 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
      {
        v8 = *(_QWORD *)(i + 172);
        *(LARGE_INTEGER *)(i + 112) = PerformanceCounter;
        HalpCmciInitializeErrorPacket((__int64)v0, v8);
        HalpCmciInitProcessor((__int64)v0, v8);
      }
      ++v2;
      v4 += 4LL;
    }
    while ( v2 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
