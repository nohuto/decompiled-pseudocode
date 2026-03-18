/*
 * XREFs of ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1400F7AD8
 * Callers:
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400EDEF0 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 * Callees:
 *     <none>
 */

struct VIDMM_DEVICE *__fastcall VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(VIDMM_PAGING_QUEUE_PACKET *this)
{
  struct VIDMM_DEVICE *result; // rax

  if ( *((_BYTE *)this + 24) )
    return (struct VIDMM_DEVICE *)*((_QWORD *)this + 7);
  result = (struct VIDMM_DEVICE *)*((_QWORD *)this + 9);
  if ( !result )
  {
    result = (struct VIDMM_DEVICE *)*((_QWORD *)this + 8);
    if ( result )
      return (struct VIDMM_DEVICE *)*((_QWORD *)result + 1);
  }
  return result;
}
