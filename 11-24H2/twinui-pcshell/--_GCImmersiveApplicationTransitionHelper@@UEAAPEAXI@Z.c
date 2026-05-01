/*
 * XREFs of ??_GCImmersiveApplicationTransitionHelper@@UEAAPEAXI@Z @ 0x1802F3D40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveApplicationTransitionHelper@@UEAA@XZ @ 0x1802B0260 (--1CImmersiveApplicationTransitionHelper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CImmersiveApplicationTransitionHelper *__fastcall CImmersiveApplicationTransitionHelper::`scalar deleting destructor'(
        CImmersiveApplicationTransitionHelper *this,
        char a2)
{
  CImmersiveApplicationTransitionHelper::~CImmersiveApplicationTransitionHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
