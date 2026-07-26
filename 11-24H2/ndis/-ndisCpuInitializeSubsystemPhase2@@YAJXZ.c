/*
 * XREFs of ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14018C23C
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisIsHeterogeneousCpuSystem@@YAEXZ @ 0x1400A2CB4 (-ndisIsHeterogeneousCpuSystem@@YAEXZ.c)
 *     ndisGetProcessorInfo @ 0x14018C814 (ndisGetProcessorInfo.c)
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
    qword_14011C8B8 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    return qword_14011C8B8 == 0 ? 0xC000009A : 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
