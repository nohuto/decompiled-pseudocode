/*
 * XREFs of ??0CCompositionBuffer@@IEAA@XZ @ 0x140018658
 * Callers:
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x140018580 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x14009D280 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

CCompositionBuffer *__fastcall CCompositionBuffer::CCompositionBuffer(CCompositionBuffer *this)
{
  CCompositionBuffer *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  memset((char *)this + 48, 0, 0x90uLL);
  memset((char *)this + 192, 0, 0x50uLL);
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  result = this;
  *((_DWORD *)this + 76) = 0;
  return result;
}
