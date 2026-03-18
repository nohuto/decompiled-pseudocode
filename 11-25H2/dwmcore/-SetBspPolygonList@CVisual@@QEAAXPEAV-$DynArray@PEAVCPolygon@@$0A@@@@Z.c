/*
 * XREFs of ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x180216A8C
 * Callers:
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x180216968 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1801082B4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x180134930 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180170E90 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetBspPolygonList(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  _DWORD *v4; // r11
  unsigned int Slot; // eax
  _QWORD *v6; // r10
  __int64 v7; // r11

  v2 = (__int64 *)(a1 + 232);
  v4 = (_DWORD *)*v2;
  if ( a2 )
  {
    if ( (*v4 & 0x20000000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 3);
      if ( Slot < *(_DWORD *)(v7 + 4) )
        v6 = (_QWORD *)(*(unsigned int *)(v7 + 4)
                      + 15LL
                      + v7
                      + 8LL * Slot
                      - (((unsigned __int8)*(_DWORD *)(v7 + 4) + 15) & 7));
      *v6 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((__int64 **)v2, 3) = a2;
    }
  }
  else if ( (*v4 & 0x20000000) != 0 )
  {
    CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData((_DWORD *)*v2, 3);
  }
}
