/*
 * XREFs of ?GetD3D11Resource@CDDisplaySwapChainBuffer@@UEAAPEAUID3D11Resource@@XZ @ 0x18020CAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11Resource *__fastcall CDDisplaySwapChainBuffer::GetD3D11Resource(CDDisplaySwapChainBuffer *this)
{
  return (struct ID3D11Resource *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 120LL))(*((_QWORD *)this + 27));
}
