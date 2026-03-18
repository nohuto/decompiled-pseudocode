/*
 * XREFs of ??1CMaskBrush@@MEAA@XZ @ 0x18013277C
 * Callers:
 *     ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x180132730 (--_ECMaskBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CMaskBrush::~CMaskBrush(CMaskBrush *this)
{
  *(_QWORD *)this = &CMaskBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *((_QWORD *)this + 13) = &CMaskBrush::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  *((_QWORD *)this + 15) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 14));
  *((_QWORD *)this + 14) = 0LL;
  CBrush::~CBrush(this);
}
