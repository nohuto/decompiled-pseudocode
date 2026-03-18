/*
 * XREFs of ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400BAEA8
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400BABD8 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x14001D214 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     VidSchDestroyDeviceSyncObject @ 0x140039330 (VidSchDestroyDeviceSyncObject.c)
 *     VidSchDestroySyncObject @ 0x1400BAF10 (VidSchDestroySyncObject.c)
 *     ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400BB420 (-UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
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
