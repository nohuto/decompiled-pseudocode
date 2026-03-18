/*
 * XREFs of ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140043BB0
 * Callers:
 *     VidMmSetSegmentPowerState @ 0x140043B60 (VidMmSetSegmentPowerState.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400D5120 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z.c)
 *     ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400F4F30 (-DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140043E40 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentIdle(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  int v4; // ebp
  _DWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _KEVENT *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1 << *((_BYTE *)a2 + 40);
  v5 = *(_DWORD **)(*((_QWORD *)this + 5029) + 8LL * *((unsigned __int16 *)a2 + 210));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5139, &LockHandle);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v6);
  *((_QWORD *)this + 5140) = KeGetCurrentThread();
  if ( !*((_QWORD *)a2 + 34) && !*((_BYTE *)a2 + 412) )
  {
    v5[118] &= ~v4;
    v7 = VIDMM_SEGMENT::DriverId(a2);
    if ( v5[26] != (_DWORD)v7 )
    {
      v7 = VIDMM_SEGMENT::DriverId(a2);
      if ( v5[22] != (_DWORD)v7 )
        VIDMM_GLOBAL::NotifyMemorySegmentHasData(this, *((_DWORD *)a2 + 102), 0);
    }
    if ( !v5[118] )
    {
      v8 = (struct _KEVENT *)*((_QWORD *)this + 5555);
      *((_BYTE *)this + 40942) = 1;
      KeSetEvent(v8, 0, 0);
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v7);
  *((_QWORD *)this + 5140) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
