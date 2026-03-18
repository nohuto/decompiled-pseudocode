/*
 * XREFs of ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x180027E4C
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180027A9C (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1801082B4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180170E90 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetWindowBackgroundTreatmentInternal(CVisual *this, struct CWindowBackgroundTreatment *a2)
{
  unsigned int **v2; // rcx
  unsigned int *v4; // r11
  unsigned int v5; // eax
  unsigned int *v6; // rcx
  unsigned int v7; // eax
  char v8; // r10
  __int64 v9; // r11
  unsigned int Slot; // eax
  _QWORD *v11; // r10
  __int64 v12; // r11

  v2 = (unsigned int **)((char *)this + 232);
  v4 = *v2;
  v5 = **v2;
  if ( a2 )
  {
    if ( (v5 & 0x400000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 10LL);
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
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 10LL) = a2;
    }
  }
  else if ( (v5 & 0x400000) != 0 )
  {
    v6 = *v2;
    *v4 = v5 & 0xFFBFFFFF;
    v7 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v6, 10LL);
    if ( v7 < *(_DWORD *)(v9 + 4) )
      *(_BYTE *)(v7 + v9 + 8) = v8;
  }
}
