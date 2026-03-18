/*
 * XREFs of ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E6660
 * Callers:
 *     TryMapScratchRange @ 0x1400AD654 (TryMapScratchRange.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400AEA70 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D7700 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 *     ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1400E5420 (-RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z.c)
 *     ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1400E5620 (-RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400E6508 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x14010F48C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x140035150 (VidSchIsMonitoredFenceSignaled.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1400F25E8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400FBFBC (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FlushScratchGpuVaRanges(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v3; // r13
  __int64 v4; // r8
  char v5; // al
  _QWORD **v6; // r14
  __int64 v7; // rsi
  char v8; // r15
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  struct VIDMM_VAD *v12; // rdi

  v3 = a2;
  v4 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  if ( (*(_BYTE *)(v4 + 476) & 1) != 0 )
  {
    if ( *((_QWORD *)this + a2 + 143) )
    {
      if ( *((_DWORD *)this + 2) )
      {
        v5 = *((_BYTE *)this + 40938);
        if ( (v5 & 1) == 0 )
        {
          v6 = (_QWORD **)(v4 + 504);
          *((_BYTE *)this + 40938) = v5 | 1;
          v7 = *((_QWORD *)this + a2 + 5052);
          while ( 1 )
          {
            v8 = 0;
            while ( 1 )
            {
              v9 = *v6;
              if ( *v6 == v6 || !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v3 + 740), v9[2]) )
                break;
              v10 = *v9;
              if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
                __fastfail(3u);
              *v11 = v10;
              *(_QWORD *)(v10 + 8) = v11;
              *v9 = 0LL;
              v9[1] = 0LL;
              if ( VIDMM_GLOBAL::_Config >= 0 )
              {
                v8 = 1;
                CVirtualAddressAllocator::UncommitVirtualAddressRange(
                  *((CVirtualAddressAllocator **)this + v3 + 5052),
                  (struct VIDMM_MAPPED_VA_RANGE *)(v9 - 4),
                  0LL,
                  1u);
              }
              v12 = (struct VIDMM_VAD *)*(v9 - 4);
              if ( *(struct _KTHREAD **)(v7 + 64) == KeGetCurrentThread() )
              {
                CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
                  (CVirtualAddressAllocator *)v7,
                  (struct VIDMM_VAD *)*(v9 - 4));
              }
              else
              {
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7 + 56, 0LL) )
                {
                  if ( bTracingEnabled && *(_DWORD *)(v7 + 80) != -1 && (byte_140081241 & 1) != 0 )
                    McTemplateK0q_EtwWriteTransfer();
                  ExAcquirePushLockExclusiveEx(v7 + 56, 0LL);
                }
                *(_QWORD *)(v7 + 64) = KeGetCurrentThread();
                CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v7, v12);
                *(_QWORD *)(v7 + 64) = 0LL;
                ExReleasePushLockExclusiveEx(v7 + 56, 0LL);
                KeLeaveCriticalRegion();
              }
            }
            if ( !v8 )
              break;
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v3, 0, 0LL, 0LL, 0, 0);
          }
          *((_BYTE *)this + 40938) &= ~1u;
        }
      }
    }
  }
}
