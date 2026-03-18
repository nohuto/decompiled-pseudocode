/*
 * XREFs of ??$destruct_range@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@detail@@YAXPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@0@Z @ 0x1800CE5E0
 * Callers:
 *     ?push_back@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@Z @ 0x1800CC500 (-push_back@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@st.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x1800CC750 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall detail::destruct_range<std::unique_ptr<COcclusionInfo>>(
        CMultiPrimitiveDrawListBrush *(__fastcall ****a1)(CMultiPrimitiveDrawListBrush *this, char a2),
        CMultiPrimitiveDrawListBrush *(__fastcall ****a2)(CMultiPrimitiveDrawListBrush *this, char a2))
{
  CMultiPrimitiveDrawListBrush *(__fastcall ****v3)(CMultiPrimitiveDrawListBrush *, char); // rbx
  CMultiPrimitiveDrawListBrush *(__fastcall ***v4)(CMultiPrimitiveDrawListBrush *, char); // rcx
  CMultiPrimitiveDrawListBrush *(__fastcall *v5)(CMultiPrimitiveDrawListBrush *, char); // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = **v4;
        if ( v5 == CWindowOcclusionInfo::`vector deleting destructor' )
        {
          operator delete(v4, 0x38uLL);
        }
        else if ( v5 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v4, 1);
        }
        else if ( v5 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v4, 1);
        }
        else
        {
          v5((CMultiPrimitiveDrawListBrush *)v4, 1);
        }
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
