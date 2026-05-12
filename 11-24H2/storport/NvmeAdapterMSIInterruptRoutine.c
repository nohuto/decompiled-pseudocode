/*
 * XREFs of NvmeAdapterMSIInterruptRoutine @ 0x1400D3DC0
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportMsiInterrupt @ 0x1400290A0 (RaCallMiniportMsiInterrupt.c)
 *     McTemplateK0pqqx_EtwWriteTransfer @ 0x140056A2C (McTemplateK0pqqx_EtwWriteTransfer.c)
 */

char __fastcall NvmeAdapterMSIInterruptRoutine(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rdi
  LARGE_INTEGER v4; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  char v6; // bp
  LARGE_INTEGER v7; // rax
  unsigned __int64 v8; // r8
  ULONG CurrentProcessorNumber; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  v2 = 0LL;
  v4.QuadPart = 0LL;
  if ( !a2 || *a2 != 1314275652 || (a2[36] & 0x80) == 0 )
    return 0;
  if ( StorEtwLoggingEnabled && (byte_140171463 & 8) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v4 = PerformanceCounter;
  }
  v6 = RaCallMiniportMsiInterrupt((__int64)(a2 + 42));
  if ( StorEtwLoggingEnabled && (byte_140171463 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v7.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v7.QuadPart <= 0 || v7.QuadPart >= v4.QuadPart )
      v8 = v7.QuadPart - v4.QuadPart;
    else
      v8 = v7.QuadPart - v4.QuadPart - 1;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v8 )
        v2 = 10000
           * (1000 * (v8 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v8 / PerformanceFrequency.QuadPart)
            + 1000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart);
    }
    else
    {
      v2 = v8;
    }
    v14 = v2;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_140171463 & 8) != 0 )
      McTemplateK0pqqx_EtwWriteTransfer(
        v14,
        v10,
        v11,
        NvmeAdapterMSIInterruptRoutine,
        a2[14],
        CurrentProcessorNumber,
        v14);
  }
  return v6;
}
