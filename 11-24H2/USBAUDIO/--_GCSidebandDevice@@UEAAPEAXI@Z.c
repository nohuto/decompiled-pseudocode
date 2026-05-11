/*
 * XREFs of ??_GCSidebandDevice@@UEAAPEAXI@Z @ 0x14000EA50
 * Callers:
 *     ??_ECSidebandDevice@@W7EAAPEAXI@Z @ 0x14000EA40 (--_ECSidebandDevice@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14000E308 (--3@YAXPEAX@Z.c)
 */

CSidebandDevice *__fastcall CSidebandDevice::`scalar deleting destructor'(CSidebandDevice *this, char a2)
{
  *(_QWORD *)this = &CSidebandDevice::`vftable'{for `ISidebandDevice'};
  *(_QWORD *)(*((_QWORD *)this + 5) + 152LL) = 0LL;
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
