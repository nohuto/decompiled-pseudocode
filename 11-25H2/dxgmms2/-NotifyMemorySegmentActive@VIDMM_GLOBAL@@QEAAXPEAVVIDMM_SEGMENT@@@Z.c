/*
 * XREFs of ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140042DB8
 * Callers:
 *     ?IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400D2548 (-IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400D2B70 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140043E40 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentActive(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  char *v2; // rbx
  char v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  VIDMM_SEGMENT *v10; // rcx
  VIDMM_SEGMENT *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)this + 41112;
  v5 = 0;
  v6 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * *((unsigned __int16 *)a2 + 210));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5139, &LockHandle);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v7);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  LOBYTE(v8) = *((_BYTE *)a2 + 40);
  v9 = *(unsigned int *)(v6 + 472);
  *(_DWORD *)(v6 + 472) = v9 | (1 << v8);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v8);
  *((_QWORD *)this + 5140) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !(_DWORD)v9 && *(_DWORD *)(v6 + 64) )
  {
    do
    {
      v10 = *(VIDMM_SEGMENT **)(*(_QWORD *)(v6 + 1648) + 8 * v9);
      if ( *((_DWORD *)v10 + 102) != -1
        && (*(_DWORD *)(v6 + 104) == VIDMM_SEGMENT::DriverId(v10) || *(_DWORD *)(v6 + 88) == VIDMM_SEGMENT::DriverId(v11)) )
      {
        if ( (unsigned int)VIDMM_GLOBAL::NotifyMemorySegmentHasData(this, *((_DWORD *)a2 + 102), 1u) == -1071775466
          && (*(_BYTE *)(v6 + 476) & 0x20) != 0 )
        {
          *(_BYTE *)(v6 + 477) |= 1u;
          v5 = 1;
        }
        *(_BYTE *)(v6 + 477) &= ~2u;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *(_DWORD *)(v6 + 64) );
  }
  VIDMM_GLOBAL::NotifyMemorySegmentHasData(this, *((_DWORD *)a2 + 102), 1u);
  if ( (*(_BYTE *)(v6 + 477) & 1) != 0 )
  {
    if ( v5 )
      VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((unsigned __int16 *)a2 + 210), 1u);
  }
}
