/*
 * XREFs of KeFlushIoBuffers @ 0x14043D260
 * Callers:
 *     HalpDmaFlushBuffer @ 0x140333700 (HalpDmaFlushBuffer.c)
 *     HalFlushDmaBuffer @ 0x140450680 (HalFlushDmaBuffer.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE6B4 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404D4CFC (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpDmaFlushDriverMdl @ 0x140539DBC (HalpDmaFlushDriverMdl.c)
 *     HalpFlushMapBuffers @ 0x14054D128 (HalpFlushMapBuffers.c)
 *     ViMapDoubleBuffer @ 0x140B79670 (ViMapDoubleBuffer.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KiFlushRangeAllCaches @ 0x1405B8EC0 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x1406414E8 (EtwTraceCpuCacheFlush.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, char a3, __int64 a4)
{
  PVOID v4; // rax
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // r12
  char v10; // r15
  void *v11; // rbp
  char v12; // r14
  _OWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v4) = KiSystemFullyCoherent;
  memset(v14, 0, sizeof(v14));
  if ( !KiSystemFullyCoherent )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = *(unsigned int *)(BugCheckParameter4 + 40);
    v10 = 1;
    if ( a3 || a2 )
    {
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
      {
        v11 = *(void **)(BugCheckParameter4 + 24);
      }
      else
      {
        v4 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
        v11 = v4;
      }
      if ( v11 )
      {
        v10 = 0;
      }
      else if ( CurrentIrql == 15 )
      {
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      }
      if ( (xmmword_140FC5B10 & 0x4000000) != 0 )
      {
        v12 = 1;
        LOBYTE(v4) = EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v14, 0x84000000).LowPart;
      }
      else
      {
        v12 = 0;
      }
      if ( v10 )
      {
        if ( a3 )
          LOBYTE(v4) = KeInvalidateAllCaches();
      }
      else
      {
        LOBYTE(v4) = KiFlushRangeAllCaches(BugCheckParameter4, v11, v9, a3);
      }
      if ( v12 )
      {
        LOBYTE(a4) = a2 == 0;
        LOBYTE(v4) = EtwTraceCpuCacheFlush(v14, v11, v9, a4);
      }
    }
  }
  return (char)v4;
}
