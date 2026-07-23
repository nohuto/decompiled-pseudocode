/*
 * XREFs of HalpCmciInit @ 0x140B5D858
 * Callers:
 *     HalpCmcWorkerRoutine @ 0x140A4B1B0 (HalpCmcWorkerRoutine.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     HalpCmciInitializeErrorPacket @ 0x14047BD0C (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x14047C2E4 (HalpCmciInitProcessor.c)
 *     HalpCmciLoadThresholdConfiguration @ 0x1404D6FCC (HalpCmciLoadThresholdConfiguration.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
