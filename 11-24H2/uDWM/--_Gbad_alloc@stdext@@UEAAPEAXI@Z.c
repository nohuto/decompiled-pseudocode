/*
 * XREFs of ??_Gbad_alloc@stdext@@UEAAPEAXI@Z @ 0x18009E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

stdext::bad_alloc *__fastcall stdext::bad_alloc::`scalar deleting destructor'(
        stdext::bad_alloc *this,
        const struct std::nothrow_t *a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  if ( ((unsigned __int8)a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, a2);
  return this;
}
