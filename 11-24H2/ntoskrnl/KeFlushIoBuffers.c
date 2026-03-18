/*
 * XREFs of KeFlushIoBuffers @ 0x14043D470
 * Callers:
 *     HalpDmaFlushBuffer @ 0x14038D450 (HalpDmaFlushBuffer.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1403917D4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalFlushDmaBuffer @ 0x140451A80 (HalFlushDmaBuffer.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE494 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaFlushDriverMdl @ 0x14053C5C0 (HalpDmaFlushDriverMdl.c)
 *     HalpFlushMapBuffers @ 0x14054FA88 (HalpFlushMapBuffers.c)
 *     ViMapDoubleBuffer @ 0x140B89650 (ViMapDoubleBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KiFlushRangeAllCaches @ 0x1405BCD60 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x14064D4B4 (EtwTraceCpuCacheFlush.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
        LOBYTE(v4) = EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v14, 0x84000000);
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
