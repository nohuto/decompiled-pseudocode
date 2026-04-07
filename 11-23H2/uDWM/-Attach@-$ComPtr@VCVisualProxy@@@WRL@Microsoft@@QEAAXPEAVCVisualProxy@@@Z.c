/*
 * XREFs of ?Attach@?$ComPtr@VCVisualProxy@@@WRL@Microsoft@@QEAAXPEAVCVisualProxy@@@Z @ 0x180004EF0
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180004B90 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CVisualProxy>::Attach(CBaseObject **a1, CBaseObject *a2)
{
  CBaseObject *v4; // rcx
  unsigned int result; // eax

  v4 = *a1;
  if ( v4 )
    result = CBaseObject::Release(v4);
  *a1 = a2;
  return result;
}
