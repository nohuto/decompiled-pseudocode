/*
 * XREFs of ??1CNineGridBrush@@MEAA@XZ @ 0x1802057BC
 * Callers:
 *     ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x180205770 (--_GCNineGridBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CNineGridBrush::~CNineGridBrush(CNineGridBrush *this)
{
  *(_QWORD *)this = &CNineGridBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  *((_QWORD *)this + 13) = 0LL;
  CBrush::~CBrush(this);
}
