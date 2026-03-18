/*
 * XREFs of HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1403917D4
 * Callers:
 *     HalpDmaSyncMapBuffers @ 0x14038FF20 (HalpDmaSyncMapBuffers.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x14038D160 (HalpDmaGetAdapterCacheAlignment.c)
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140410510 (MmMapLockedPagesWithReservedMapping.c)
 *     KeFlushIoBuffers @ 0x14043D470 (KeFlushIoBuffers.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void __fastcall HalpDmaSyncMapBuffersWithEmergencyResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        size_t Size,
        char a6,
        char a7,
        char a8)
{
  _QWORD *v8; // r15
  PMDL v11; // r14
  PMDL v12; // rsi
  ULONG v13; // r12d
  unsigned int v14; // ebp
  unsigned __int64 v15; // r9
  struct _MDL **v16; // r9
  PVOID v17; // rcx
  unsigned __int64 v18; // rbx
  char v19; // r13
  MEMORY_CACHING_TYPE v20; // edi
  PVOID v21; // rax
  __int64 v22; // r9
  void *v23; // r15
  unsigned int v24; // edi
  int v25; // r8d
  int v26; // edx
  __int16 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v30; // eax
  struct _MDL **v31; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  int AdapterCacheAlignment; // [rsp+A8h] [rbp+10h]
  __int64 v35; // [rsp+B0h] [rbp+18h]
  _QWORD *v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v8 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1);
  KeAcquireInStackQueuedSpinLock(&qword_140E3EB80, &LockHandle);
  v11 = qword_140E3EB58;
  v12 = MemoryDescriptorList;
  v13 = a3 & 0xFFF;
  v14 = Size;
  v15 = (unsigned __int64)(a3 - *(_QWORD *)(a2 + 32)) >> 12;
  qword_140E3EB58->ByteOffset = v13;
  v11->ByteCount = 4096 - v13;
  v11->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v12->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v16 = (struct _MDL **)(a2 + 8 * ((unsigned int)v15 + 6LL));
  v12->ByteOffset = v13;
  for ( v12->ByteCount = 4096 - v13; ; v12->ByteCount = v26 )
  {
    v31 = v16;
    if ( !v14 )
      break;
    if ( (v8[6] & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v18 = v13 + (v8[6] & 0xFFFFFFFFFFFFF000uLL);
      v19 = 0;
    }
    else
    {
      v17 = MappingAddress;
      v12[1].Next = (struct _MDL *)(*v8 >> 12);
      v18 = (unsigned __int64)MmMapLockedPagesWithReservedMapping(v17, 0x446C6148u, v12, MmCached);
      if ( !v18 )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF00uLL, 0LL, 0LL);
      v16 = v31;
      v19 = 1;
    }
    v20 = MmNonCached;
    v11[1].Next = *v16;
    while ( 1 )
    {
      v21 = MmMapLockedPagesWithReservedMapping(qword_140E3EB30, 0x446C6148u, v11, v20);
      v23 = v21;
      if ( v21 )
        break;
      if ( ++v20 >= MmMaximumCacheType )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF01uLL, 0LL, 0LL);
    }
    v24 = 4096 - v13;
    if ( v14 < 4096 - v13 )
      v24 = v14;
    v13 = 0;
    if ( a6 )
    {
      if ( !a7 )
        guard_dispatch_icall_no_overrides(v18, v21, v24, v22);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v25 = ~(AdapterCacheAlignment - 1);
        v12->ByteOffset = v25 & v18 & 0xFFF;
        v12->StartVa = (PVOID)((v18 - ((unsigned int)v18 - (v25 & (unsigned int)v18))) & 0xFFFFFFFFFFFFF000uLL);
        v12->ByteCount = v25 & (v24 + AdapterCacheAlignment + v18 - (v25 & v18) - 1);
        if ( !a8 )
          KeFlushIoBuffers((ULONG_PTR)v12);
      }
      if ( !a7 )
        memmove(v23, (const void *)v18, v24);
    }
    MmUnmapReservedMapping(v23, 0x446C6148u, v11);
    if ( v19 )
      MmUnmapReservedMapping((PVOID)v18, 0x446C6148u, v12);
    v14 -= v24;
    v26 = v14;
    v16 = v31 + 1;
    v27 = v24 + v35;
    v8 = (_QWORD *)v36[1];
    v28 = v24 + v35;
    v36 = v8;
    if ( v14 > 0x1000 )
      v26 = 4096;
    v35 += v24;
    v29 = v28 & 0xFFFFFFFFFFFFF000uLL;
    v11->ByteCount = v26;
    v11->StartVa = (PVOID)v29;
    v30 = v27 & 0xFFF;
    v11->ByteOffset = v30;
    v12->StartVa = (PVOID)v29;
    v12->ByteOffset = v30;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
