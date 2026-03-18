/*
 * XREFs of ?GetCurrentRealization@CCompositionBuffer@@MEBAJPEAPEAVCBufferRealization@@@Z @ 0x14009D3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionBuffer::GetCurrentRealization(CCompositionBuffer *this, struct CBufferRealization **a2)
{
  *a2 = 0LL;
  if ( *((_DWORD *)this + 72) )
    *a2 = (struct CBufferRealization *)(*((_QWORD *)this + 34) - 8LL);
  return 3221226021LL;
}
