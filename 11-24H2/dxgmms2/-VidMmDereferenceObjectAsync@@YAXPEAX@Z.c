/*
 * XREFs of ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400C13C0
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400A2C30 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1400A2E64 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1400C07AC (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400C10B0 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010454C (-FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1400C1444 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

void __fastcall VidMmDereferenceObjectAsync(PVOID Object)
{
  _QWORD v2[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(v2, 0, 0x48uLL);
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer();
  LODWORD(v2[4]) = 1;
  v2[5] = Object;
  if ( !(unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v2) )
  {
    ObfDereferenceObject(Object);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
}
