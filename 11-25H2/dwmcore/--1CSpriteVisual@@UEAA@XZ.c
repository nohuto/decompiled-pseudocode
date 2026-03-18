/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x1800680E0
 * Callers:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180068CF0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x1800C0ED8 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ?ClearData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEAAAEAT?$_Align_type@N$07@std@@I@Z @ 0x180134930 (-ClearData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEAAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x1801F8A5C (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
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
      CSparseAlignedStorage<8,8>::AllocatedStorage::ClearData(v3, 15LL);
  }
  CVisual::~CVisual(this);
}
