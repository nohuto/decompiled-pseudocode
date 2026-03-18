/*
 * XREFs of ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x180095C1C
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180095328 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180032FC0 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetInteractionInternal(CVisual *this, struct CInteraction *a2)
{
  __int64 *v2; // rcx
  _DWORD *v4; // r11
  int v5; // eax
  _BYTE *v6; // rcx
  __int64 i; // rax
  unsigned int Slot; // eax
  _QWORD *v9; // r10
  __int64 v10; // r11

  v2 = (__int64 *)((char *)this + 232);
  v4 = (_DWORD *)*v2;
  v5 = *(_DWORD *)*v2;
  if ( a2 )
  {
    if ( (v5 & 0x1000000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 8);
      if ( Slot < *(_DWORD *)(v10 + 4) )
        v9 = (_QWORD *)(*(unsigned int *)(v10 + 4)
                      + 15LL
                      + v10
                      + 8LL * Slot
                      - (((unsigned __int8)*(_DWORD *)(v10 + 4) + 15) & 7));
      *v9 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((__int64 **)v2, 8) = a2;
    }
  }
  else if ( (v5 & 0x1000000) != 0 )
  {
    v6 = v4 + 2;
    *v4 = v5 & 0xFEFFFFFF;
    for ( i = 0LL; (unsigned int)i < v4[1]; ++v6 )
    {
      if ( *v6 == 8 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i < v4[1] )
      *((_BYTE *)v4 + i + 8) = 0;
  }
}
