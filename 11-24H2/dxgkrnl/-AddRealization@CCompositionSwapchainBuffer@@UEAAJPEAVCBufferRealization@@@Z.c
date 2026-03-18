/*
 * XREFs of ?AddRealization@CCompositionSwapchainBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x140048FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRealization@CFlipExBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x140049030 (-AddRealization@CFlipExBuffer@@UEAAJPEAVCBufferRealization@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::AddRealization(
        CCompositionSwapchainBuffer *this,
        struct CBufferRealization *a2)
{
  int v3; // ebx

  v3 = CFlipExBuffer::AddRealization(this, a2);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 9) + 32LL))(*((_QWORD *)a2 + 9));
  return (unsigned int)v3;
}
