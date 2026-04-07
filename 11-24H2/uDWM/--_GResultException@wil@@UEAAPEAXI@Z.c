/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x18009E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ResultException@wil@@UEAA@XZ @ 0x18009E04C (--1ResultException@wil@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall wil::ResultException::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
