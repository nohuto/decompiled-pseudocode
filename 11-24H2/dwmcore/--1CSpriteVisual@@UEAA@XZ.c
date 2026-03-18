/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x1801332EC
 * Callers:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180133150 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x18008FD70 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18014DEF4 (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x18018BD90 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(CSpriteVisual *this)
{
  CDropShadow *DropShadow; // rbx
  _DWORD *v3; // rcx

  *(_QWORD *)this = &CSpriteVisual::`vftable';
  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    CDropShadow::RemoveVisualFromCache(DropShadow, this);
    CResource::UnRegisterNotifierInternal(this, DropShadow);
    v3 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v3 & 0x20000) != 0 )
      CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(v3, 15);
  }
  CVisual::~CVisual(this);
}
