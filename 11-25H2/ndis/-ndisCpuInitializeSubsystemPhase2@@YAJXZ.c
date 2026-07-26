/*
 * XREFs of ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14019725C
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIsHeterogeneousCpuSystem@@YAEXZ @ 0x1400AAE64 (-ndisIsHeterogeneousCpuSystem@@YAEXZ.c)
 *     ndisGetProcessorInfo @ 0x14019784C (ndisGetProcessorInfo.c)
 */

__int64 ndisCpuInitializeSubsystemPhase2(void)
{
  int v0; // edx
  int ProcessorInfo; // ebx

  ndisHeterogeneousCpuSystem = ndisIsHeterogeneousCpuSystem();
  ProcessorInfo = ndisGetProcessorInfo();
  if ( ProcessorInfo >= 0 )
  {
    qsort(
      ndisRssProcessors,
      (unsigned int)ndisRssCpuCount,
      4uLL,
      (int (__cdecl *)(const void *, const void *))ndisCompareProcNumInit);
    qword_1401268F8 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    return qword_1401268F8 == 0 ? 0xC000009A : 0;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v0,
        1,
        10,
        (struct _GUID *)&WPP_a7d85ed11c3633f8d00c12d0f3cbd601_Traceguids);
    }
    return (unsigned int)ProcessorInfo;
  }
}
