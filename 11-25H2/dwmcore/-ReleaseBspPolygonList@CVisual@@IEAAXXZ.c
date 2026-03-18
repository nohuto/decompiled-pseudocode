/*
 * XREFs of ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1801093C8
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180097BD8 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x180109450 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x180134930 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CVisual::ReleaseBspPolygonList(CVisual *this)
{
  __int64 BspPolygonList; // rax
  _DWORD *v3; // rbx
  unsigned int i; // edi
  _DWORD *v5; // rcx

  BspPolygonList = CVisual::GetBspPolygonList(this);
  v3 = (_DWORD *)BspPolygonList;
  if ( BspPolygonList )
  {
    for ( i = *(_DWORD *)(BspPolygonList + 24); i; ReleaseInterface<CPolygon>((__int64 *)(*(_QWORD *)v3 + 8LL * i)) )
      --i;
    v3[6] = 0;
    DynArrayImpl<0>::ShrinkToSize(v3, 8LL);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v3);
    operator delete(v3, 0x20uLL);
    v5 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v5 & 0x20000000) != 0 )
      CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(v5, 3LL);
  }
}
