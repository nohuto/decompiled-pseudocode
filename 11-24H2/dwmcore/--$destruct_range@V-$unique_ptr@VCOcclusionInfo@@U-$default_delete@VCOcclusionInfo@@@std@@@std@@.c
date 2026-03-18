/*
 * XREFs of ??$destruct_range@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@detail@@YAXPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@0@Z @ 0x1800A05B0
 * Callers:
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18009E720 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall detail::destruct_range<std::unique_ptr<COcclusionInfo>>(_QWORD ***a1, _QWORD ***a2, __int64 a3)
{
  _QWORD ***v4; // rbx
  _QWORD **v5; // rcx
  void (__fastcall *v6)(_QWORD **, __int64); // rax

  if ( a1 != a2 )
  {
    v4 = a1;
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = (void (__fastcall *)(_QWORD **, __int64))**v5;
        if ( (char *)v6 == (char *)CWindowOcclusionInfo::`vector deleting destructor' )
        {
          operator delete(v5, 0x38uLL);
        }
        else if ( (char *)v6 == (char *)CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v5, 1, a3);
        }
        else if ( (char *)v6 == (char *)CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v5, 1, a3);
        }
        else
        {
          v6(v5, 1LL);
        }
      }
      ++v4;
    }
    while ( v4 != a2 );
  }
}
