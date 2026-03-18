/*
 * XREFs of ?GetSize@CSwapChainBuffer@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1802CCC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CSwapChainBuffer::GetSize(CSwapChainBuffer *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
  a2[1] = *((_DWORD *)this + 7) - *((_DWORD *)this + 5);
  return (struct D2D_SIZE_U)a2;
}
