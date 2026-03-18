/*
 * XREFs of ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x1801F8ABC
 * Callers:
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1801F893C (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1801082B4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x180134930 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180170E90 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CSpriteVisual::SetDropShadow(CSpriteVisual *this, struct CDropShadow *a2)
{
  __int64 *v2; // rcx
  _DWORD *v4; // r11
  unsigned int Slot; // eax
  __int64 v6; // rdx
  _QWORD *v7; // r10
  __int64 v8; // r11

  v2 = (__int64 *)((char *)this + 232);
  v4 = (_DWORD *)*v2;
  if ( a2 )
  {
    if ( (*v4 & 0x20000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 15);
      if ( Slot < *(_DWORD *)(v8 + 4) )
        v7 = (_QWORD *)(v6
                      + *(unsigned int *)(v8 + 4)
                      + v8
                      + 8LL * Slot
                      - (((_BYTE)v6 + (unsigned __int8)*(_DWORD *)(v8 + 4)) & 7));
      *v7 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((__int64 **)v2, 15) = a2;
    }
  }
  else if ( (*v4 & 0x20000) != 0 )
  {
    CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData((_DWORD *)*v2, 15);
  }
}
