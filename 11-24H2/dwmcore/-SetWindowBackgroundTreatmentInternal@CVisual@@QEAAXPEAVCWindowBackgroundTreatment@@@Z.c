/*
 * XREFs of ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18006ACCC
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x18006AD90 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180032FC0 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetWindowBackgroundTreatmentInternal(CVisual *this, struct CWindowBackgroundTreatment *a2)
{
  __int64 *v2; // rcx
  _DWORD *v4; // r11
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax
  char v8; // r10
  __int64 v9; // r11
  unsigned int Slot; // eax
  _QWORD *v11; // r10
  __int64 v12; // r11

  v2 = (__int64 *)((char *)this + 232);
  v4 = (_DWORD *)*v2;
  v5 = *(_DWORD *)*v2;
  if ( a2 )
  {
    if ( (v5 & 0x400000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 10);
      if ( Slot < *(_DWORD *)(v12 + 4) )
        v11 = (_QWORD *)(*(unsigned int *)(v12 + 4)
                       + 15LL
                       + v12
                       + 8LL * Slot
                       - (((unsigned __int8)*(_DWORD *)(v12 + 4) + 15) & 7));
      *v11 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((__int64 **)v2, 10) = a2;
    }
  }
  else if ( (v5 & 0x400000) != 0 )
  {
    v6 = *v2;
    *v4 = v5 & 0xFFBFFFFF;
    v7 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v6, 10);
    if ( v7 < *(_DWORD *)(v9 + 4) )
      *(_BYTE *)(v7 + v9 + 8) = v8;
  }
}
