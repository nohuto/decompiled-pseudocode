/*
 * XREFs of ??1CClipBrush@@MEAA@XZ @ 0x18029F46C
 * Callers:
 *     ??_ECClipBrush@@MEAAPEAXI@Z @ 0x18029F4F0 (--_ECClipBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CClipBrush::~CClipBrush(CClipBrush *this)
{
  *(_QWORD *)this = &CClipBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  *((_QWORD *)this + 13) = 0LL;
  CBrush::~CBrush(this);
}
