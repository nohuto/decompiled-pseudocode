/*
 * XREFs of ??1?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAA@XZ @ 0x1801D6870
 * Callers:
 *     ?GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z @ 0x18010C30C (-GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::unique_ptr<COcclusionInfo>::~unique_ptr<COcclusionInfo>(
        CMultiPrimitiveDrawListBrush *(__fastcall ****a1)(CMultiPrimitiveDrawListBrush *this, char a2))
{
  CMultiPrimitiveDrawListBrush *(__fastcall ***v1)(CMultiPrimitiveDrawListBrush *, char); // rcx
  CMultiPrimitiveDrawListBrush *(__fastcall *v2)(CMultiPrimitiveDrawListBrush *, char); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = **v1;
    if ( v2 == CWindowOcclusionInfo::`vector deleting destructor' )
    {
      operator delete(v1, 0x38uLL);
    }
    else if ( v2 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v1, 1);
    }
    else if ( v2 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v1, 1);
    }
    else
    {
      v2((CMultiPrimitiveDrawListBrush *)v1, 1);
    }
  }
}
