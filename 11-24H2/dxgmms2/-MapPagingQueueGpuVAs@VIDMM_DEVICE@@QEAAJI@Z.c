/*
 * XREFs of ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1400989EC
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1400F947C (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::MapPagingQueueGpuVAs(VIDMM_DEVICE *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned int v5; // ebx
  int v6; // eax

  v3 = 32LL * a2;
  result = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 9)));
  v5 = 0;
  if ( (int)result >= 0 )
  {
    result = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 10)));
    if ( (int)result >= 0 )
    {
      result = *((_QWORD *)this + 11);
      if ( result )
      {
        v6 = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(result + v3));
        if ( v6 < 0 )
          return (unsigned int)v6;
        return v5;
      }
    }
  }
  return result;
}
