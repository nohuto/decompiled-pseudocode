/*
 * XREFs of ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400B2ED0
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400B2C00 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x140028674 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     VidSchDestroyDeviceSyncObject @ 0x14003B330 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchDestroySyncObject @ 0x1400B2F30 (VidSchDestroySyncObject.c)
 *     ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400B3440 (-UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::DestroyState(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  __int64 v2; // rdx

  if ( *((_QWORD *)this + 1) )
  {
    VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA(this);
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 96LL) + 32LL);
    if ( v2 )
      VidSchDestroyDeviceSyncObject(*((_QWORD *)this + 1), v2, 1, 0LL);
    VidSchDestroySyncObject(*((PVOID *)this + 1));
  }
  if ( *(_QWORD *)this )
  {
    VIDMM_PAGING_QUEUE::`scalar deleting destructor'(*(VIDMM_PAGING_QUEUE **)this);
    *(_QWORD *)this = 0LL;
  }
}
