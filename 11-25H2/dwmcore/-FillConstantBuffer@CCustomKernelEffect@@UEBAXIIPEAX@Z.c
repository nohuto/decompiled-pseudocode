/*
 * XREFs of ?FillConstantBuffer@CCustomKernelEffect@@UEBAXIIPEAX@Z @ 0x1801FDE60
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180069FE0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

void __fastcall CCustomKernelEffect::FillConstantBuffer(const void **this, __int64 a2, __int64 a3, void *a4)
{
  unsigned __int64 v6; // rax

  memcpy_0(a4, this[3], ((_BYTE *)this[4] - (_BYTE *)this[3]) & 0xFFFFFFFFFFFFFFF0uLL);
  v6 = ((_BYTE *)this[4] - (_BYTE *)this[3]) >> 4;
  if ( v6 > 8 )
    *((_DWORD *)a4 + 3) = v6;
}
