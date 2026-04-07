/*
 * XREFs of ??_Gtype_info@@UEAAPEAXI@Z @ 0x18009B9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

type_info *__fastcall type_info::`scalar deleting destructor'(type_info *this, const struct std::nothrow_t *a2)
{
  *(_QWORD *)this = &type_info::`vftable';
  if ( ((unsigned __int8)a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, a2);
  return this;
}
