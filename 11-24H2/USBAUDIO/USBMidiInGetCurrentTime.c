/*
 * XREFs of USBMidiInGetCurrentTime @ 0x140002170
 * Callers:
 *     UsbHwFrameCountTimestamp @ 0x140001ED0 (UsbHwFrameCountTimestamp.c)
 *     USBMidiInAddEventToPinQueue @ 0x140002238 (USBMidiInAddEventToPinQueue.c)
 *     USBMidiInStateChangePin @ 0x14000E0F0 (USBMidiInStateChangePin.c)
 * Callees:
 *     <none>
 */

unsigned __int64 USBMidiInGetCurrentTime()
{
  LARGE_INTEGER v0; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v0 = KeQueryPerformanceCounter(&PerformanceFrequency);
  return (10000000LL * v0.LowPart
        + ((10000000 * HIDWORD(v0.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32))
       / PerformanceFrequency.QuadPart
       + ((10000000 * HIDWORD(v0.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32);
}
