/*
 * XREFs of HalpDmaFlushBufferWithEmergencyResources @ 0x1404CE494
 * Callers:
 *     HalpDmaFlushBuffer @ 0x14038D450 (HalpDmaFlushBuffer.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140410510 (MmMapLockedPagesWithReservedMapping.c)
 *     KeFlushIoBuffers @ 0x14043D470 (KeFlushIoBuffers.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall HalpDmaFlushBufferWithEmergencyResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        char a6)
{
  ULONG v9; // r15d
  struct _MDL **v10; // r12
  PMDL v11; // rbx
  MEMORY_CACHING_TYPE v12; // edi
  __int64 v13; // r9
  PVOID v14; // r14
  unsigned int v15; // edi
  int v16; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140E3EB80, &LockHandle);
  v9 = a3 & 0xFFF;
  v10 = (struct _MDL **)(a2 + 48 + 8LL * (unsigned int)((unsigned __int64)(a3 - *(_QWORD *)(a2 + 32)) >> 12));
  v11 = qword_140E3EB58;
  qword_140E3EB58->ByteCount = 4096 - v9;
  v11->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v11->ByteOffset = v9;
  while ( a4 )
  {
    v12 = MmNonCached;
    v11[1].Next = *v10;
    while ( 1 )
    {
      v14 = MmMapLockedPagesWithReservedMapping(qword_140E3EB30, 0x446C6148u, v11, v12);
      if ( v14 )
        break;
      if ( ++v12 >= MmMaximumCacheType )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF01uLL, 0LL, 0LL);
    }
    v15 = a4;
    if ( a4 >= 4096 - v9 )
      v15 = 4096 - v9;
    if ( !a6 )
      KeFlushIoBuffers((ULONG_PTR)v11, a5 == 0, 1, v13);
    MmUnmapReservedMapping(v14, 0x446C6148u, v11);
    a4 -= v15;
    a3 += v15;
    ++v10;
    v9 = 0;
    v16 = a4;
    if ( a4 > 0x1000 )
      v16 = 4096;
    v11->ByteCount = v16;
    v11->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v11->ByteOffset = a3 & 0xFFF;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
