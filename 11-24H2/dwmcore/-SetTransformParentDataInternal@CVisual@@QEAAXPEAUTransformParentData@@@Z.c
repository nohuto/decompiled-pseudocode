/*
 * XREFs of ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1802003EC
 * Callers:
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1802001D8 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180032FC0 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetTransformParentDataInternal(CVisual *this, struct TransformParentData *a2)
{
  __int64 *v2; // rcx
  _DWORD *v4; // r11
  unsigned int Slot; // eax
  int v6; // edx
  _QWORD *v7; // r10
  __int64 v8; // r11

  v2 = (__int64 *)((char *)this + 232);
  v4 = (_DWORD *)*v2;
  if ( a2 )
  {
    if ( (*v4 & 0x2000000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 7);
      if ( Slot < *(_DWORD *)(v8 + 4) )
        v7 = (_QWORD *)(*(unsigned int *)(v8 + 4)
                      + 15LL
                      + v8
                      + 8LL * Slot
                      - (v6 & (unsigned int)(*(_DWORD *)(v8 + 4) + 15)));
      *v7 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((__int64 **)v2, 7) = a2;
    }
  }
  else if ( (*v4 & 0x2000000) != 0 )
  {
    CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData((_DWORD *)*v2, 7);
  }
}
