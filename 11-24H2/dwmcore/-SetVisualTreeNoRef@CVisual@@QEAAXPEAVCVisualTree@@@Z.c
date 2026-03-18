/*
 * XREFs of ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18008DE50
 * Callers:
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x18008D660 (-Initialize@CVisualTree@@MEAAJXZ.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18028AD60 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180032FC0 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x18008FD70 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 */

void __fastcall CVisual::SetVisualTreeNoRef(CVisual *this, struct CVisualTree *a2)
{
  __int64 *v2; // rcx
  _DWORD *v4; // r11
  unsigned int Slot; // eax
  _QWORD *v6; // r10
  __int64 v7; // r11

  v2 = (__int64 *)((char *)this + 232);
  v4 = (_DWORD *)*v2;
  if ( a2 )
  {
    if ( (*v4 & 0x8000000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 5);
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
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((__int64 **)v2, 5) = a2;
    }
  }
  else if ( (*v4 & 0x8000000) != 0 )
  {
    CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(*v2, 5LL);
  }
}
