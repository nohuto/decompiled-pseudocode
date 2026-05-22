/*
 * XREFs of ?CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z @ 0x1800822E0
 * Callers:
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800995B4 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180140298 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x18009D758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D7C0 (_Init_thread_header.c)
 */

unsigned __int64 __fastcall InputETW::CalculateElapsedMicroseconds(__int64 a1, __int64 a2)
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  if ( __TSS0__1__CalculateElapsedMicroseconds_InputETW__SA_K_K0_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                     + (unsigned int)tls_index)
                                                                                   + 32LL) )
  {
    Init_thread_header(&__TSS0__1__CalculateElapsedMicroseconds_InputETW__SA_K_K0_Z_4HA);
    if ( __TSS0__1__CalculateElapsedMicroseconds_InputETW__SA_K_K0_Z_4HA == -1 )
    {
      Frequency.QuadPart = 0LL;
      QueryPerformanceFrequency(&Frequency);
      `InputETW::CalculateElapsedMicroseconds'::`2'::frequency = Frequency.QuadPart;
      Init_thread_footer(&__TSS0__1__CalculateElapsedMicroseconds_InputETW__SA_K_K0_Z_4HA);
    }
  }
  return 1000000 * (a2 - a1) / (unsigned __int64)`InputETW::CalculateElapsedMicroseconds'::`2'::frequency;
}
